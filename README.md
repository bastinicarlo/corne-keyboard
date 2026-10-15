Corne Split Keyboard — Pokémon OLED Firmware ⚡🐉
A custom QMK / Vial firmware built for a split Corne keyboard powered by RP2040 microcontrollers. This repository features dynamic, layer-responsive Pokémon OLED animations, full cross-split state synchronization, and complete Vial compatibility for on-the-fly layout customization.

✨ Features
🎨 Dynamic Pokémon OLED Animations: Displays custom pixel-art sprites (Dratini, Rotom, Dragonite) that switch dynamically based on your active layer or system state.

🔄 Robust Split Synchronization: Leverages QMK's split transport layer to propagate layer states, default layers, modifier keys (SPLIT_MODS_ENABLE), and LED indicators (SPLIT_LED_STATE_ENABLE) seamlessly between both halves.

🔌 Universal USB Detect: Configured to automatically recognize the master side based on where the USB cable is plugged in, allowing you to flash a single unified firmware file to both halves.

🎛️ Vial Support: Fully compatible with the Vial GUI for on-the-fly remapping and macro configuration.

🛠️ Key Configuration (config.h)
C
/* Automatic Master detection based on USB connection */
#define SPLIT_USB_DETECT

/* Split State Synchronization */
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_DEFAULT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE

/* OLED Settings */
#define OLED_TIMEOUT 0   /* Disables auto-timeout to prevent flickering on the slave side */
🚀 Building & Flashing
Thanks to SPLIT_USB_DETECT, you can compile a single .uf2 file and flash it to both microcontrollers without needing side-specific builds.

Bash
qmk flash -kb crkbd -km personalizzato -e CONVERT_TO=promicro_rp2040 -bl uf2 -n
Flash the resulting .uf2 file to both the left and right RP2040 controllers.

🎮 OLED Layer & Sprite Logic
The firmware combines temporary layers (layer_state) and default layers (default_layer_state) using bitwise operations (|) to ensure instant response across all types of layer switches (MO, TO, DF):

C
uint8_t active_layer = get_highest_layer(layer_state | default_layer_state);
Layer 0: Dratini (Default / Base layer) 🟢

Layer 1: Dragonair 🔵

Layer 2: Rotom (Gaming Layer) ⚡

Layer 3+: Dragonite (Advanced / Higher Layers) 🟡

📜 License
This project is open-source and available under the MIT License.
