/**
 * 👀
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FLAG
#define FLAG "RUN"
#endif 
#define RUN_FLAG "RUN"
#define WATCH_FLAG "WATCH"
#define RUN_COMMAND "dotnet run --project "
#define WATCH_COMMAND "dotnet watch --project "

int main(int argc, char *argv[])
{
  char *defaultProjDir;
  if (argc > 1)
  {
    defaultProjDir = argv[1];
  }
  else
  {
    defaultProjDir = "Program/Program.csproj";
  }

  char *command = RUN_COMMAND;
  if(FLAG==WATCH_FLAG){
    command = WATCH_COMMAND;
    printf("\n------------------------------------------------------------------\n");
    printf("🏃‍♂️ Running Dotnet...\n");
    printf("👀 with HOT RELOAD --watch \n");
    printf("➡️  csproj and program.cs file is at: %s\n", defaultProjDir);
    printf("------------------------------------------------------------------\n\n");
  }else{
    printf("\n------------------------------------------------------------------\n");
    printf("🏃‍♂️ Running Dotnet...\n");
    printf("➡️  csproj and program.cs file is at: %s\n", defaultProjDir);
    printf("------------------------------------------------------------------\n\n");
  }
  char dir[strlen(command) + strlen(defaultProjDir) + 1];
  strcpy(dir, command);
  strcat(dir, defaultProjDir);
  system(dir);
  return 0;
}
