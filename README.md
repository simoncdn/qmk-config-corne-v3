# QMK Configuration - Corne v3 HotSwap

Custom configuration for Corne v3 (crkbd) keyboard with RP2040.

<img width="399" height="405" alt="Image" src="https://github.com/user-attachments/assets/89f4c15e-b7ac-44d8-a968-80b9d046b5d6" />

## Features

- **Microcontroller**: RP2040
- **Layout**: Split 3x6_3 (42 keys)
- **RGB Matrix**: 54 LEDs (27 per side)
- **Layers**: 3 custom layers

### Layer Layout

#### Layer 0 - Base (QWERTY)
- Standard QWERTY layout
- Modifier keys on thumbs
- Access to layers 1 and 2 via MO(1) and MO(2)

#### Layer 1 - Numbers & Navigation
- Numbers 0-9
- Media controls (volume, brightness)
- Arrow keys
- LED control (on/off)

#### Layer 2 - Symbols
- Programming symbols
- Parentheses, brackets, braces
- Special operators

## QMK Firmware Installation

### 1. Prerequisites

#### macOS

Install Homebrew if not already installed:
```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

#### Windows

Install [QMK MSYS](https://msys.qmk.fm/) which provides a complete QMK environment for Windows.

Alternatively, you can use [WSL (Windows Subsystem for Linux)](https://docs.microsoft.com/en-us/windows/wsl/install) and follow the Linux instructions.

#### Linux

**Debian/Ubuntu:**
```sh
sudo apt update
sudo apt install -y git python3-pip
```

**Fedora/RHEL:**
```sh
sudo dnf install -y git python3-pip
```

**Arch Linux:**
```sh
sudo pacman -S git python-pip
```

### 2. Install QMK CLI

#### macOS / Linux / WSL

Install QMK CLI with the following command:
```sh
curl -fsSL https://install.qmk.fm | sh
```

Or using pip:
```sh
python3 -m pip install --user qmk
```

#### Windows (QMK MSYS)

QMK CLI is already included in QMK MSYS. Open QMK MSYS terminal and proceed to the next step.

### 3. Setup QMK

Run the setup command:
```sh
qmk setup
```

Answer `y` to all prompts for a complete installation.

For more details, check the [official QMK documentation](https://docs.qmk.fm/newbs_getting_started).

## Installing this Configuration

### 1. Clone this repository

```sh
git clone <your-repo-url> ~/qmk-config-corne-v3
```

### 2. Copy configuration to QMK

Copy the configuration files to the QMK firmware folder:

```sh
# Create keymap folder if needed
mkdir -p ~/qmk_firmware/keyboards/crkbd/keymaps/custom

# Copy configuration files
cp ~/qmk-config-corne-v3/keymap.c ~/qmk_firmware/keyboards/crkbd/keymaps/custom/
cp ~/qmk-config-corne-v3/config.h ~/qmk_firmware/keyboards/crkbd/keymaps/custom/
cp ~/qmk-config-corne-v3/rules.mk ~/qmk_firmware/keyboards/crkbd/keymaps/custom/
```

## Compiling and Flashing

### Option 1: Compile and flash in one command

```sh
qmk flash -kb crkbd -km custom
```

This command will:
1. Compile the firmware
2. Wait for you to put the keyboard in bootloader mode
3. Flash automatically

### Option 2: Compile only

To generate the `.uf2` file without flashing:

```sh
qmk compile -kb crkbd -km custom
```

The file will be generated in `.build/` with the name `crkbd_rev1_custom.uf2`.

### Bootloader Mode

To flash the keyboard:
1. Unplug the USB cable
2. Hold down the BOOT button
3. Plug in the USB cable while holding BOOT
4. Release the BOOT button
5. The keyboard appears as a USB disk
6. Copy the `.uf2` file to this disk (or use `qmk flash`)

Repeat the operation for both halves of the keyboard.

## Resources

- [QMK Documentation](https://docs.qmk.fm/)
- [QMK Configurator](https://config.qmk.fm/)
- [QMK Newbs Guide](https://docs.qmk.fm/newbs)
- [Corne Documentation](https://github.com/foostan/crkbd)

## License

This configuration is provided as-is, free to use and modify.
