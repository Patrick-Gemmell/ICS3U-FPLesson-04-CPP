// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This Program moves a background

#include <gb/gb.h>
#include "export.c"
#include "backgroundsimple.c"

void main() {
    set_bkg_data(0, 7, tilelabel);
    set_bkg_tiles(0, 0, 40, 18, backgroundsimple);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
