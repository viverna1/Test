#!/bin/sh

sudo rm -rf /tmp/*
sudo pacman -Rscun $(pacman -Qdtq)
sudo pacman -Scc
