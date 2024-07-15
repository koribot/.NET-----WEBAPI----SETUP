### EXECUTABLES REFERENCE
- watch.exe `<directory> -> optional`
  - dotnet watch --project `<directory>`
     - `<directory>` is optional, it has defaultDirectory
     - defaultDirectory is at  `Program/program.csproj`
- run.exe `<directory> -> optional`
  - dotnet run --project `<directory>` 
     - `<directory>` is optional, it has defaultDirectory
     - defaultDirectory is at  `Program/program.csproj`

### FOLDER STRUCTURE
<details>
  <summary>📁 Program</summary>

  ## Contains
  - 📁 obj folder
  - 📁 bin folder
  - 📁 properties folder
    - ***FOR CONFIG RELATED FILES SUCH AS***:
       - `launchSettings.json`: This file is used to configure the launch settings for the project  when you run it from within a development environment, such as Visual Studio or Visual Studio Code. The file allows you to specify various settings, such as the launch URL, environment variables, and command line arguments, for the project.
       - `AssemblyInfo.cs`: This file contains metadata about the assembly, such as the version number, culture, and copyright information. This metadata is used by the .NET runtime to identify and load the assembly, and can also be used by tools and libraries to provide additional information about the assembly.
       - `appsettings.json`: This file is used to store configuration settings for the project, such as database connection strings, API keys, and other settings that can be customized for different environments. The settings in this file can be accessed at runtime by the project's code to customize its behavior.
       - `Web.config`: This file is used to configure the behavior of a web application that is hosted in IIS (Internet Information Services). The file contains settings for various aspects of the application, such as security, authentication, and caching, and can be used to customize the behavior of the application in different environments.
  - 📜 program.cs
      ```
       Entry point
      ```
  - 📜 program.csproj
      ```
       Used by .net to build the project, resolve dependencies and it contains information about
       the project, such as the target framework and the list of dependencies.
      ```
</details>

