#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include "pch.cpp"


inline bool notexist(const std::string& name) {
    if (FILE* file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    }
    else {
        return false;
    }
}

void downloadFile(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 1/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}

void downloadFile2(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 2/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}

void downloadFile3(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 3/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}

void downloadFile4(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 4/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}

void downloadFile5(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 5/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}

void downloadFile6(const char* url, const char* fname) {
    CURL* curl;
    FILE* fp;
    CURLcode res;
    curl = curl_easy_init();
    if (!notexist(fname) && curl)
    {
        system("cls");
        std::cout << "Programme de telechargement 6/7 \n";
        system("if not exist minecraft mkdir minecraft");
        fp = fopen(fname, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        system("if not exist minecraft/minecraft cd minecraft & Start dos.bat");
    }
}



int main(int argc, char* argv[])
{
    system("title craftdium");
    std::cout << "Demarrage de Craftdium\n";
    downloadFile("https://luuxis.legtux.org/res/craftdium/dos.txt", "minecraft/dos.bat");
    system("timeout /t 01>nul");
    downloadFile2("https://luuxis.legtux.org/res/craftdium/paladium.txt", "minecraft/paladium/paladium.bat");
    downloadFile3("https://luuxis.legtux.org/res/craftdium/update.txt", "update.bat");
    downloadFile4("https://luuxis.legtux.org/res/craftdium/7z.exe", "minecraft/paladium/7z.exe");
    downloadFile5("https://luuxis.legtux.org/res/craftdium/7z.dll", "minecraft/paladium/7z.dll");
    downloadFile6("https://launcher.mojang.com/download/Minecraft.exe", "minecraft/minecraft/minecraft/minecraft.exe");
    system("start craftdium.exe");
    return 0;
}