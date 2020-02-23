# HoloLens Reader Glove

A firmware for HoloLens Reader Glove.

HoloLens Reader Glove enables your HoloLens to scan special markers on physical objects and translate their position into virtual space.

## Build and use
HoloLens Reader Glove is based on esp8266 SoC. Firmware is uploaded using UART via USB-TTL converter.

**Important!** You need a PlatformIO IDE insalled to work with this project.

Run `pio run --target upload` to build the firmware and upload it to the glove.
