# C++ Dev Container Project

A template project for modern C++ development using VS Code Dev Containers, CMake, and Google Test. This setup provides a one-click, fully configured, and reproducible development environment.

## ✨ Features

*   **C++17** enabled by default.
*   **CMake** for a robust and cross-platform build system.
*   **Google Test** framework integrated for unit testing.
*   **Fully Containerized:** The entire development environment runs inside a Docker container, keeping your host machine pristine.
*   **Reproducible:** Every developer gets the exact same environment and tool versions, eliminating "works on my machine" issues.

## 🚀 Getting Started

Follow these steps to get the development environment up and running.

### Prerequisites

You must have the following software installed on your host machine:

1.  [**Visual Studio Code**](https://code.visualstudio.com/)
2.  [**Docker Desktop**](https://www.docker.com/products/docker-desktop/)
3.  The [**Dev Containers** extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) for VS Code.

### One-Click Setup

1.  Clone this repository to your local machine (in a folder that is **not** managed by OneDrive or other cloud sync services).
2.  Open the project folder in VS Code.
3.  When the prompt appears in the bottom-right corner, click **"Reopen in Container"**.

> Folder contains a Dev Container configuration file. Reopen to develop in a container?

VS Code will now build the Docker image and launch the container. This may take a few minutes on the first run.

## 🛠️ Usage (Inside the Container)

Once the container is running, you can use the built-in VS Code terminal (`Ctrl+` `) to build, run, and test the project.

### Building the Project

The project is configured by the `postCreateCommand` automatically. To re-build at any time:

```bash
cmake --build build