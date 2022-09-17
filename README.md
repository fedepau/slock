# CFP's build of slock

## Applied patches:
- [blur pixelated screen](https://tools.suckless.org/slock/patches/blur-pixelated-screen/)
- [dpms](https://tools.suckless.org/slock/patches/dpms/)
- [mediakeys](https://tools.suckless.org/slock/patches/mediakeys/)

## Requirements:
Xlib header files. On Arch-based systems:

```bash
# pacman -S libx11
```

## Installation:
Edit config.mk and config.h and run:

```bash
# make clean install
```
