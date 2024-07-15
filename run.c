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
  char *defaultProjDir = "\0";
  if (argc > 1)
  {
    defaultProjDir = malloc(strlen(argv[1]));
    if (defaultProjDir == NULL)
    {
      printf("Failed to Allocate Memory: reverting to defualt program directory {Program/Program.csproj}\n");
      defaultProjDir = "Program/Program.csproj";
    }
    strcat(defaultProjDir, argv[1]);
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
  char *dir;
  size_t len;

  len = strlen(command) + strlen(defaultProjDir) + 1;
  dir = malloc(len);
  if (dir == NULL)
  {
    fprintf(stderr, "Failed to allocate memory\n");
    return 1;
  }
  strcpy(dir, command);
  strcat(dir, defaultProjDir);
  system(dir);

  free(dir);
  if (argc > 1)
  {
    free(defaultProjDir);
  }
  return 0;
}
