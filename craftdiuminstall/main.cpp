#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include <windows.h>
#include <math.h>
#include "pch.cpp"

using namespace std;

int nb_bar;
double last_progress, progress_bar_adv;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int progress_bar (void *bar, double t, double d)
{
    if(last_progress != round(d/t*100))
    {
      nb_bar = 25;
      progress_bar_adv = round(d/t*nb_bar);

      cout<<"\r ";
      SetConsoleTextAttribute(hConsole, 160);
      cout<<" telechargement : [ ";

      if(round(d/t*100) < 10)
      { cout<<"0"<<round(d/t*100)<<" %]"; }
      else
      { cout<<round(d/t*100)<<" %] "; }

      SetConsoleTextAttribute(hConsole, 15);
      cout<<" [";
      SetConsoleTextAttribute(hConsole, 10);
      for(int i = 0 ; i <= progress_bar_adv ; i++)
      { cout<<"0"; }
      SetConsoleTextAttribute(hConsole, 15);
      for(int i = 0 ; i < nb_bar - progress_bar_adv; i++)
      { cout<<"."; }

      cout<<"]";
      last_progress = round(d/t*100);
    }
  return 0;
}


inline bool notexist(const std::string& name) {
    if (FILE* file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    }
    else {
        return false;
    }
}


void downloadFile(const char* url, const char* fname) 
{
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        curl_easy_setopt(curl, CURLOPT_NOPROGRESS, FALSE);
        curl_easy_setopt(curl, CURLOPT_PROGRESSFUNCTION, progress_bar);
        SetConsoleTextAttribute(hConsole, 11);
        cout << "craftdium download" << endl << endl;
        res = curl_easy_perform(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}


int main(int argc, char* argv[])
{
    system("title craftdium");
    std::cout << "Demarrage de Craftdium\n";
    downloadFile("https://luuxis.legtux.org/res/craftdium/dos.txt", "minecraft/dos.bat");
    downloadFile("https://luuxis.legtux.org/res/craftdium/update.txt", "update.bat");
    downloadFile("https://luuxis.legtux.org/res/craftdium/paladiumupdate.txt", "paladiumupdate.bat");
    downloadFile("https://luuxis.legtux.org/res/craftdium/paladium.txt", "minecraft/paladium/paladium.bat");
    downloadFile("https://launcher.mojang.com/download/Minecraft.exe", "minecraft/minecraft/minecraft/minecraft.exe");
    system("start craftdium.exe");
    return 0;
}