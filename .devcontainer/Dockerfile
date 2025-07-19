# Step A: Start from the official C++ Dev Container base image.
# This gives us a solid foundation with essential C++ tools and configurations.
FROM mcr.microsoft.com/devcontainers/cpp:0-ubuntu-22.04

# Step B: Switch to the 'root' user to gain administrative privileges.
# This is necessary to install software using apt-get.
USER root

# Step C: Install CMake and Google Test using the system package manager.
# This is the core of our solution, as it gets the tools from Ubuntu's
# reliable repositories instead of the failing ghcr.io.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends cmake g++ libgtest-dev

# Step D: Switch back to the non-root 'vscode' user.
# This is a security best practice. The container will run as this user,
# which prevents accidental changes to the system and ensures files you
# create have the correct permissions.
USER vscode