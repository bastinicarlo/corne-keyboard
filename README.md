# Corne Split Keyboard — OLED Firmware

A custom **QMK / Vial** firmware built for a split **Corne keyboard** powered by **RP2040** microcontrollers. This repository features dynamic, layer-responsive Pokémon OLED animations, full cross-split state synchronization, and complete Vial compatibility for on-the-fly layout customization.

## Features

* **🎨 Dynamic Animations:** Pixel-art sprites (Dratini, Dragonair, Rotom, Dragonite) that update instantly based on your active layer or system state.
* **🔄 Robust Split Synchronization:** Seamlessly shares layer states, default layers, modifiers (`SPLIT_MODS_ENABLE`), and LED indicators (`SPLIT_LED_STATE_ENABLE`) between both halves via the TRRS cable.
* **🔌 Universal USB Detect:** Automatically detects which half is connected to the PC (`SPLIT_USB_DETECT`), allowing you to flash a single firmware file to both controllers.
* **🎛️ Vial Support:** Fully compatible with the Vial GUI for real-time key remapping and macro setup without recompiling.

## 🎮 OLED Layer & Sprite Mapping

The firmware combines temporary layers (`layer_state`) and default layers (`default_layer_state`) using bitwise operations (`|`) to ensure instant response across all types of layer switches (`MO`, `TO`, `DF`):

* **Layer 0:** Dratini (Base Layer) 
* **Layer 1:** Dragonair 🔵
* **Layer 2:** Rotom (Gaming Layer) 
* **Layer 3+:** Dragonite (Advanced / Higher Layers) 

```

## 🚀 Building

Since `SPLIT_USB_DETECT` is enabled, you can compile a single universal `.uf2` file and flash it directly to both microcontrollers:

```bash
qmk compile -kb crkbd -km personalizzato
```

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).
