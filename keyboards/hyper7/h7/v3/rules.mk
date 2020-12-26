# MCU name
MCU = at90usb1286

# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.
F_CPU = 16000000

#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
#     This will define a symbol, F_USB, in all source code files equal to the
#     input clock frequency (before any prescaling is performed) in Hz. This value may
#     differ from F_CPU if prescaling is used on the latter, and is required as the
#     raw input clock is fed directly to the PLL sections of the AVR for high speed
#     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
#     at the end, this will be done automatically to create a 32-bit value in your
#     source code.
#
#     If no clock division is performed on the input clock inside the AVR (via the
#     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
F_USB = $(F_CPU)

# Interrupt driven control endpoint task
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT


# Boot Section Size in *bytes*
OPT_DEFS += -DBOOTLOADER_SIZE=8192


# Build Options
#   change yes to no to disable
#
LEADER_ENABLE = yes      # Enables leader key combination support
KEY_LOCK_ENABLE = yes	 # Enables key lock

# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes		 # USB Nkey Rollover

MOUSEKEY_ENABLE = no	 # Mouse keys
EXTRAKEY_ENABLE = no	 # Audio control and System control
CONSOLE_ENABLE = no	     # Console for debug
COMMAND_ENABLE = no      # Commands for debug and configuration

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE = no    # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no     # Enable keyboard RGB underglow
AUDIO_ENABLE = no        # Audio output

LAYOUTS = h7v3_183 h7v3_183_southpaw h7v3_213 h7v3_213_southpaw
