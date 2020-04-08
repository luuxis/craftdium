@echo off
if not exist "%CD%\debug\resource" mkdir "%CD%\debug\resource"
del "%CD%\debug\*.cpp"
del "%CD%\debug\*.h"
del "%CD%\debug\*.pdb"
del "%CD%\debug\*.ilk"
rmdir "%CD%\x64" /S /Q
rmdir "%CD%\debug\qml" /S /Q
copy "%CD%\resource" "%CD%\debug\resource"
move "%CD%\debug\test.exe" "%CD%\debug\craftdium.exe"
copy "C:\Windows\System32\msvcp140d.dll" "%CD%\debug"
copy "C:\Windows\System32\vcruntime140_1d.dll" "%CD%\debug"
copy "C:\Windows\System32\vcruntime140d.dll" "%CD%\debug"
copy "C:\Windows\System32\ucrtbased.dll" "%CD%\debug"