// This file is converted by code7bit.
// code7bit: https://github.com/katahiromz/code7bit
// To revert conversion, please execute "code7bit -r <file>".
#pragma once

static MUI_ENTRY jaJPSetupInitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        20,
        "Please wait while the ReactOS Setup initializes itself",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        21,
        "and discovers your devices...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        0,
        "Please wait...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\271\336\335\272\336\311 \276\335\300\270",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  \262\335\275\304\260\331\274\336\306 \274\326\263\275\331 \271\336\335\272\336\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   \302\267\336\306\244 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \272\272\303\336 \276\335\300\270 \274\300 \271\336\335\272\336\312 \273\262\274\255\263\303\267\306 \274\275\303\321\311 \267\303\262\311 \271\336\335\272\336\306 \276\257\303\262\273\332\317\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263  F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS \276\257\304\261\257\314\337\315 \326\263\272\277",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "\272\311 \276\257\304\261\257\314\337\311 \300\336\335\266\262\303\336\312 ReactOS \265\315\337\332\260\303\250\335\270\336\274\275\303\321\246",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "\272\335\313\337\255\260\300\306 \272\313\337\260\274\244 \276\257\304\261\257\314\337\311 \302\267\336\311 \300\336\335\266\262\315\311 \274\336\255\335\313\336\246 \274\317\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press ENTER to install or upgrade ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  ReactOS \246 \274\255\263\314\270 \323\274\270\312 \272\263\274\335 \275\331\306\312 R \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  ReactOS \311 \327\262\276\335\275\274\336\256\263\271\335\246 \313\256\263\274\336 \275\331\306\312 L \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  ReactOS \246 \262\335\275\304\260\331 \276\275\336\306 \301\255\263\274\275\331 \312\336\261\262\312 F3 \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "ReactOS \311 \274\256\263\273\262\305 \274\336\256\263\316\263\306 \266\335\274\303\312 \262\266\246 \272\336\327\335 \270\300\336\273\262:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "https://reactos.org",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263  R = \274\255\263\314\270  L = \327\262\276\335\275  F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPIntroPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS Version Status",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        "ReactOS is in Alpha stage, meaning it is not feature-complete",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "and is under heavy development. It is recommended to use it only for",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "evaluation and testing purposes and not as your daily-usage OS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "Backup your data or test on a secondary computer if you attempt",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "to run ReactOS on real hardware.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ENTER to continue ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Continue   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLicensePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "\274\326\263 \267\256\300\336\270:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "\272\311 ReactOS \274\275\303\321\312 \270\320\261\334\276 \266\311\263\305 \327\262\276\335\275(X11 \324\244BSD \265\326\313\336",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU LGPL \327\262\276\335\275 \305\304\336)\311 \272\260\304\336\246 \314\270\321 \312\337\260\302\304 \304\323\306 GNU GPL \311",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\274\336\256\263\271\335\311 \323\304\306 \327\262\276\335\275 \273\332\303\262\317\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "ReactOS \274\275\303\321\311 \262\301\314\336\311 \277\314\304\263\252\261\311 \275\315\336\303\312 ReactOS \274\275\303\321\311 \262\301\314\336\303\336",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "\261\331\325\264\306 GNU GPL \300\336\271\303\336\305\270\244 \277\311 \277\314\304\263\252\261\311 \265\330\274\336\305\331 \327\262\276\335\275\311 \323\304\306\323",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\330\330\260\275 \273\332\303 \262\317\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\272\311 \277\314\304\263\252\261\312 '\321\316\274\256\263'\303\336 \303\263\267\256\263 \273\332\244 \301\262\267\316\263\324 \272\270\273\262\316\263\266\336 \303\267\265\263\273\332\331",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "\312\336\261\262\246 \311\277\336\262\303\244 \330\326\263 \276\262\271\336\335\246 \263\271\317\275\241 ReactOS \311 \327\262\276\335\275 \267\256\263\326\312",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\300\336\262\273\335\274\254\315\311 \312\335\312\336\262\246 \314\276\270\336 \300\336\271\303\336\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "GNU General Public License \246 ReactOS \304 \304\323\306 \263\271\304\327\305\266\257\300",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\312\336\261\262\312\244 \302\267\336\246 \272\336\273\335\274\256\263 \270\300\336\273\262",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "\313\335\274\302 \316\274\256\263:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "\272\332\312 \314\330\260 \277\314\304\263\252\261\303\336\275\241 \274\256\263\273\262\312 \277\260\275\311 \272\313\337\260\274\336\256\263\271\335\246 \272\336\327\335 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "\316\274\256\263\312 \317\257\300\270 '\261\330\317\276\335'\241 '\274\274\336\256\263\276\262' \324 '\303\267\272\336\263\276\262'",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "\306\265\262\303\323 \304\336\263\326\263\303\336\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \323\304\336\331",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDevicePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\262\266\311 \330\275\304\312 \271\336\335\273\336\262\311 \303\336\312\336\262\275 \276\257\303\262\303\336\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "\272\335\313\337\255\260\300:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "\303\336\250\275\314\337\332\262:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "\267\260\316\336\260\304\336:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "\267\260\316\336\260\304\336 \332\262\261\263\304:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "\274\336\255\300\336\270:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "\272\332\327\311 \303\336\312\336\262\275\311 \276\257\303\262\246 \274\336\255\300\336\270 \275\331",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \264\335\304\330\260\246 \276\335\300\270 \275\331 \272\304\306\326\330",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "\312\260\304\336\263\252\261\311 \276\257\303\262\246 \315\335\272\263 \303\336\267\317\275\241 \276\335\300\270 \274\300\327\244 ENTER \267\260\246 \265\274\303 \303\267\276\302\305 \276\257\303\262\246",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "\276\335\300\270 \274\317\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "\272\332\327\311 \276\257\303\262\266\336 \275\315\336\303 \300\300\336\274\262 \312\336\261\262\312\244 \"\272\332\327\311 \303\336\312\336\262\275\311 \276\257\303\262\246 \274\336\255\300\336\270 \275\331\" \246 \276\335\300\270 \274\303\244",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRepairPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "ReactOS \276\257\304\261\257\314\337\312 \274\256\267\266\262\312\302 \300\336\335\266\262\306 \261\330\317\275\241 \277\311\300\322\244 \317\300\336",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "\274\336\255\263\314\336\335\306 \330\326\263 \303\336\267\331 \276\257\304\261\257\314\337 \261\314\337\330\271\260\274\256\335\311 \275\315\336\303\311 \267\311\263\312 \273\316\337\260\304 \273\332\317\276\335\241",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "\274\255\263\314\270\267\311\263\312 \317\300\336 \274\336\257\277\263 \273\332\303 \262\317\276\335\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  OS \246 \272\263\274\335 \275\331\306\312 U \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  \266\262\314\270 \272\335\277\260\331\246 \313\327\270\306\312 R \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  \322\262\335\315\337\260\274\336\306 \323\304\336\331\306\312 ESC \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  \272\335\313\337\255\260\300\246 \273\262\267\304\336\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = \322\262\335\315\337\260\274\336  U = \272\263\274\335  R = \266\262\314\270  ENTER = \273\262\267\304\336\263",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPUpgradePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The ReactOS Setup can upgrade one of the available ReactOS installations",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "listed below, or, if a ReactOS installation is damaged, the Setup program",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "can attempt to repair it.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "The repair functions are not all implemented yet.",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        15,
        "\x07  Press UP or DOWN to select an OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press U for upgrading the selected OS installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press ESC to continue with a new installation.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Press F3 to quit without installing ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "U = Upgrade   ESC = Do not upgrade   F3 = Quit",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPComputerPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\262\335\275\304\260\331 \273\332\331 \272\335\313\337\255\260\300\311 \274\255\331\262\246 \315\335\272\263 \275\331 \272\304\266\336 \276\335\300\270 \273\332\317\274\300\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \303\267\275\331 \272\335\313\337\255\260\300\311 \274\255\331\262\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   \302\267\336\306 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \272\335\313\337\255\260\300\311 \274\255\331\262\246 \315\335\272\263\276\275\336\306 \317\264\311 \315\337\260\274\336\306 \323\304\336\331 \312\336\261\262\312 ESC \267\260\246",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFlushPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "\274\275\303\321\312 \266\270\274\336\302\306 \275\315\336\303\311 \303\336\260\300\266\336 \303\336\250\275\270\274\336\256\263\306 \316\277\336\335 \273\332\331 \326\263\306 \274\303\262\317\275",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "\272\332\306\312 \274\256\263\274\256\263 \274\336\266\335\266\336 \266\266\331 \312\336\261\262\266\336 \261\330\317\275",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "\266\335\330\256\263\272\336\244 \272\335\313\337\255\260\300\312 \274\336\304\336\263\303\306 \273\262\267\304\336\263 \273\332\317\275",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "\267\254\257\274\255\246 \274\256\263\267\256 \274\303 \262\317\275",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPQuitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS \312 \266\335\276\336\335\306 \262\335\275\304\260\331 \273\332\317\276\335\303\336\274\300",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "\304\336\327\262\314\336 A: \266\327 \314\333\257\313\337\260 \303\336\250\275\270\244 CD \304\336\327\262\314\336\266\327",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "\275\315\336\303\311 CD-ROM \246 \304\330\300\336\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "\272\335\313\337\255\260\300\246 \273\262\267\304\336\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "\265\317\301 \270\300\336\273\262...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDisplayPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\262\335\275\304\260\331 \273\332\331 \303\336\250\275\314\337\332\262\311 \274\255\331\262\246 \315\335\272\263 \275\331 \272\304\266\336 \276\335\300\270 \273\332\317\274\300\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
         "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \303\267\275\331 \303\336\250\275\314\337\332\262\311 \274\255\331\262\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   \302\267\336\306 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \303\336\250\275\314\337\332\262\311 \274\255\331\262\246 \315\335\272\263\276\275\336\306 \317\264\311 \315\337\260\274\336\306 \323\304\336\331\306\312 ESC \267\260\246",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPSuccessPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "ReactOS \311 \267\316\335\314\336\314\336\335\311 \262\335\275\304\260\331\312 \276\262\272\263 \274\317\274\300\241",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "\304\336\327\262\314\336 A: \266\327 \314\333\257\313\337\260 \303\336\250\275\270\244 CD \304\336\327\262\314\336\266\327",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "\275\315\336\303\311 CD-ROM \246 \304\330\300\336\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "\272\335\313\337\255\260\300\246 \273\262\267\304\336\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\276\257\304\261\257\314\337\312 \314\336\260\304\333\260\300\336\246 \272\335\313\337\255\260\300\311 \312\260\304\336\303\336\250\275\270\274\336\256\263\306 \262\335\275\304\260\331",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "\303\336\267\317\276\335\303\336\274\300",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "\304\336\327\262\314\336 A: \306 \314\253\260\317\257\304 \273\332\300 \314\333\257\313\337\260 \303\336\250\275\270\246 \262\332\303\244",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY jaJPSelectPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\262\266\311 \330\275\304\312 \277\335\273\336\262\275\331 \312\337\260\303\250\274\256\335\304 \274\335\267 \312\337\260\303\250\274\256\335\306 \303\267\274\300 \320\274\326\263\311",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "\303\336\250\275\270 \275\315\337\260\275\311 \262\301\327\335\303\336\275\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \330\275\304 \264\335\304\330\260\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \276\335\300\270\273\332\300 \312\337\260\303\250\274\256\335\306 ReactOS \246 \262\335\275\304\260\331 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Press P to create a primary partition.",
//        "\x07  ��׼� �߰è��� � ���� ���� C ��� ��� ��޻��",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Press E to create an extended partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Press L to create a logical partition.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  \267\277\335\311 \312\337\260\303\250\274\256\335\246 \273\270\274\336\256 \275\331\306\312 D \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "\265\317\301 \270\300\336\273\262...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPChangeSystemPartition[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "The current system partition of your computer",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "on the system disk",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "uses a format not supported by ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        18,
        "In order to successfully install ReactOS, the Setup program must change",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "the current system partition to a new one.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "The new candidate system partition is:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "\x07  To accept this choice, press ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        27,
        "\x07  To manually change the system partition, press ESC to go back to",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        28,
        "   the partition selection list, then select or create a new system",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        29,
        "   partition on the system disk.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        32,
        "In case there are other operating systems that depend on the original",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        33,
        "system partition, you may need to either reconfigure them for the new",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        34,
        "system partition, or you may need to change the system partition back",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        35,
        "to the original one after finishing the installation of ReactOS.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Continue   ESC = Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You have chosen to delete the system partition.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "System partitions can contain diagnostic programs, hardware configuration",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programs, programs to start an operating system (like ReactOS) or other",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programs provided by the hardware manufacturer.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Delete a system partition only when you are sure that there are no such",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "programs on the partition, or when you are sure you want to delete them.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "When you delete the partition, you might not be able to boot the",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "computer from the harddisk until you finished the ReactOS Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Press ENTER to delete the system partition. You will be asked",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   to confirm the deletion of the partition again later.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Press ESC to return to the previous page. The partition will",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   not be deleted.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER=Continue  ESC=Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFormatPartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\312\337\260\303\250\274\256\335\311 \314\253\260\317\257\304",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "\276\257\304\261\257\314\337\312 \312\337\260\303\250\274\256\335\246 \314\253\260\317\257\304 \274\317\275\241 \277\336\257\272\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY jaJPInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\276\257\304\261\257\314\337\312 ReactOS \311 \314\247\262\331\246 \276\335\300\270 \273\332\300 \312\337\260\303\250\274\256\335\274\336\256\263\306 \262\335\275\304\260\331 \274\317\275\241 ReactOS \246",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "\262\335\275\304\260\331\275\331 \303\336\250\332\270\304\330\246 \276\257\303\262 \274\303 \270\300\336\273\262:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "\275\262\274\256\263 \303\336\250\332\270\304\330\246 \315\335\272\263\275\331\306\312\244 BACKSPACE \267\260\303\336 \323\274\336\246 \273\270\274\336\256 \274\300 \261\304\306\244",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "ReactOS \246 \262\335\275\304\260\331 \275\331 \303\336\250\332\270\304\330\246 \306\255\263\330\256\270",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFileCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        0,
        12,
        "ReactOS \276\257\304\261\257\314\337\266\336 ReactOS \262\335\275\304\260\331 \314\253\331\300\336\306 \314\247\262\331\246",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        13,
        "\272\313\337\260 \275\331 \261\262\300\336 \274\312\336\327\270 \265\317\301 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        0,
        14,
        "\266\335\330\256\263\317\303\336\306 \275\263\314\335 \266\266\331 \312\336\261\262\266\336 \261\330\317\275\241",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 \265\317\301 \270\300\336\273\262...    ",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootLoaderEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\276\257\304\261\257\314\337\312 \314\336\260\304 \333\260\300\336\246 \262\335\275\304\260\331 \274\317\275",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "\312\260\304\336\303\336\250\275\270\306 \314\336\260\304\333\260\300\336\260\246 \262\335\275\304\260\331 \274\317\275 (MBR \304 VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\312\260\304\336\303\336\250\275\270\306 \314\336\260\304\333\260\300\336\260\246 \262\335\275\304\260\331 \274\317\275 (VBR \311\320).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "\314\336\260\304\333\260\300\336\246 \314\333\257\313\337\260 \303\336\250\275\270\306 \262\335\275\304\260\331 \275\331\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\314\336\260\304\333\260\300\336\311 \262\335\275\304\260\331\246 \275\267\257\314\337 \275\331\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\262\335\275\304\260\331 \273\332\331 \267\260\316\336\260\304\336\311 \274\255\331\262\246 \315\335\272\263 \275\331 \272\304\266\336 \276\335\300\270 \273\332\317\274\300\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \303\267\275\331 \267\260\316\336\260\304\336\311 \274\255\331\262\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   \302\267\336\306 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \267\260\316\336\260\304\336\311 \274\255\331\262\246 \315\335\272\263 \276\275\336\306 \317\264\311 \315\337\260\274\336\306 \323\304\336\331\306\312 ESC\267\260\246",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\267\303\262\311 \332\262\261\263\304\304\274\303 \262\335\275\304\260\331 \273\332\331 \332\262\261\263\304\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \303\267\275\331 \267\260\316\336\260\304\336 \332\262\261\263\304\246 \276\335\300\270 \274\303\244",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "    \302\267\336\306 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  \267\260\316\336\260\304\336 \332\262\261\263\304\246 \315\335\272\263 \276\275\336\306 \317\264\311 \315\337\260\274\336\306 \323\304\336\331\306\312 ESC \267\260\246",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPPrepareCopyEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\276\257\304\261\257\314\337\312 ReactOS \311\314\247\262\331\246 \272\335\313\337\255\260\300\306 \272\313\337\260 \275\331 \274\336\255\335\313\336\246 \274\303 \262\317\275\241 ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "\272\313\337\260 \275\331 \314\247\262\331\311\330\275\304\246 \273\270\276\262 \301\255\263...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPSelectFSEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "\274\300\311 \330\275\304\266\327 \314\247\262\331 \274\275\303\321\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        0
    },
    {
        8,
        19,
        "\x07  UP \323\274\270\312 DOWN \267\260\246 \265\274\303 \314\247\262\331 \274\275\303\321\246 \276\335\300\270 \274\303 \270\300\336\273\262\241",
        0
    },
    {
        8,
        21,
        "\x07  \312\337\260\303\250\274\256\335\246 \314\253\260\317\257\304 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
        0
    },
    {
        8,
        23,
        "\x07  \315\336\302\311 \312\337\260\303\250\274\256\335\246 \276\335\300\270 \275\331 \312\336\261\262\244 ESC \267\260\246 \265\274\303 \270\300\336\273\262\241",
        0
    },
    {
        0,
        0,
        "ENTER = \277\336\257\272\263   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDeletePartitionEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\272\311 \312\337\260\303\250\274\256\335\246 \273\270\274\336\256 \275\331 \272\304\266\336 \276\335\300\270 \273\332\317\274\300",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  \272\311 \312\337\260\303\250\274\256\335\246 \273\270\274\336\256 \275\331\306\312 L \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "\271\262\272\270(WARNING): \272\311 \312\337\260\303\250\274\256\335\274\336\256\263\311 \275\315\336\303\311 \303\336\260\300\312 \263\274\305\334\332\317\275!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  \267\254\335\276\331 \275\331\306\312 ESC \267\260\246 \265\274\303 \270\300\336\273\262\241",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "L = \312\337\260\303\274\256\335 \273\270\274\336\256   ESC = \267\254\335\276\331   F3 = \301\255\263\274",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRegistryEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " \276\257\304\261\257\314\337 ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "\276\257\304\261\257\314\337\312 \274\275\303\321\311 \272\263\276\262\246 \272\263\274\335 \274\303\262\317\275\241 ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "\332\274\336\275\304\330 \312\262\314\336\246 \273\270\276\262 \301\255\263...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR jaJPErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Success\n"
    },
    {
        // ERROR_NOT_INSTALLED
        "ReactOS \312 \272\335\313\337\255\260\300\306 \266\335\276\336\335\306 \262\335\275\304\260\331\n"
        "\273\332\317\276\335\241 \276\257\304\261\257\314\337\246 \301\255\263\274 \275\331 \312\336\261\262\244 ReactOS \246 \262\335\275\304\260\331 \275\331\306\312 \276\257\304\261\257\314\337\246\n"
        "\323\263\262\301\304\336 \274\336\257\272\263 \275\331 \313\302\326\263\266\336 \261\330\317\275\241\n"
        "\n"
        "  \x07  \276\257\304\261\257\314\337\246 \277\336\257\272\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241\n"
        "  \x07  \276\257\304\261\257\314\337\246 \301\255\263\274 \275\331\306\312 F3 \267\260\246 \265\274\303 \270\300\336\273\262\241",
        "F3 = \301\255\263\274  ENTER = \277\336\257\272\263"
    },
    {
        // ERROR_NO_BUILD_PATH
        "Failed to build the installation paths for the ReactOS installation directory!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_SOURCE_PATH
        "You cannot delete the partition containing the installation source!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_SOURCE_DIR
        "You cannot install ReactOS within the installation source directory!\n"
        "ENTER = Reboot computer"
    },
    {
        // ERROR_NO_HDD
        "\276\257\304\261\257\314\337\312 \312\260\304\336\303\336\250\275\270\246 \271\335\274\255\302 \303\336\267\317\276\335 \303\336\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_NO_SOURCE_DRIVE
        "\276\257\304\261\257\314\337\312 \277\260\275 \304\336\327\262\314\336\246 \271\335\274\255\302 \303\336\267\317\276\335 \303\336\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_LOAD_TXTSETUPSIF
        "\276\257\304\261\257\314\337\312 \314\247\262\331 TXTSETUP.SIF \311 \326\320\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CORRUPT_TXTSETUPSIF
        "\276\257\304\261\257\314\337\312  TXTSETUP.SIF \266\336 \312\277\335 \274\303\262\331 \272\304\246 \271\335\274\255\302 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_SIGNATURE_TXTSETUPSIF,
        "\276\257\304\261\257\314\337\312 TXTSETUP.SIF \311 \321\272\263\305 \274\256\322\262\246 \271\335\274\255\302 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_DRIVE_INFORMATION
        "\276\257\304\261\257\314\337\312 \274\275\303\321 \304\336\327\262\314\336\311 \274\336\256\263\316\263\246 \274\320\304\330 \303\336\267\317\276\335 \303\336\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_WRITE_BOOT,
        "\276\257\304\261\257\314\337\312 \274\275\303\321 \312\337\260\303\250\274\256\335 \274\336\256\263\315\311 %S \314\336\260\304\272\260\304\336\311 \262\335\275\304\260\331\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_LOAD_COMPUTER,
        "\276\257\304\261\257\314\337\312 \272\335\313\337\255\260\300\311 \274\255\331\262 \330\275\304\311 \326\320\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_LOAD_DISPLAY,
        "\276\257\304\261\257\314\337\312 \303\336\250\275\314\337\332\262\311 \276\257\303\262 \330\275\304\311 \326\320\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_LOAD_KEYBOARD,
        "\276\257\304\261\257\314\337\312 \267\260\316\336\260\304\336\311 \274\255\331\262 \330\275\304\311 \326\320\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_LOAD_KBLAYOUT,
        "\276\257\304\261\257\314\337\312 \267\260\316\336\260\304\336 \332\262\261\263\304 \330\275\304\311 \326\320\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_WARN_PARTITION,
          "\276\257\304\261\257\314\337\312 \275\270\305\270\304\323 1\302\311 \312\260\304\336\303\336\250\275\270\266\336 \303\267\276\302\306 \261\302\266\264\305\262 \272\336\266\335\276\262\311 \305\262\n"
          "\312\337\260\303\250\274\256\335 \303\260\314\336\331\246 \314\270\321 \272\304\246 \271\335\274\255\302 \274\317\274\300!\n"
          "\n"
          "\312\337\260\303\250\274\256\335\246 \273\270\276\262 \317\300\312 \273\270\274\336\256 \274\303\244 \272\311 \312\337\260\303\250\274\256\335 \303\260\314\336\331\246 \312\266\262 \303\336\267\317\275\n"
          "\n"
          "  \x07  \276\257\304\261\257\314\337\246 \301\255\263\274 \275\331\306\312 F3 \267\260\246 \265\274\303 \270\300\336\273\262\241\n"
          "  \x07  \277\336\257\272\263 \275\331\306\312 ENTER \267\260\246 \265\274\303 \270\300\336\273\262\241",
          "F3 = \301\255\263\274  ENTER = \277\336\257\272\263"
    },
    {
        // ERROR_NEW_PARTITION,
        "\261\300\327\274\262 \312\337\260\303\250\274\256\335\246 \275\303\336\306 \277\335\273\336\262\275\331\n"
        "\312\337\260\303\250\274\256\335\311 \305\262\314\336\306 \273\270\276\262 \275\331\272\304\312 \303\336\267\317\276\335!\n"
        "\n"
        "  * \277\336\257\272\263 \275\331\306\312 \305\306\266 \267\260\246 \265\274\303 \270\300\336\273\262\241",
        NULL
    },
    {
        // ERROR_DELETE_SPACE,
        "\320\314\336\335\266\302 \311 \303\336\250\275\270 \275\315\337\260\275 \246 \273\270\274\336\256 \275\331\272\304\312 \303\336\267\317\276\335!\n"
        "\n"
        "  * \277\336\257\272\263 \275\331\306\312 \305\306\266 \267\260\246 \265\274\303 \270\300\336\273\262\241",
        NULL
    },
    {
        // ERROR_INSTALL_BOOTCODE,
        "\276\257\304\261\257\314\337\312 \274\275\303\321 \312\337\260\303\250\274\256\335 \274\336\256\263\315\311 %S \314\336\260\304 \332\272\260\304\336 \311 \262\335\275\304\260\331\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_NO_FLOPPY,
        "\304\336\327\262\314\336 A: \306 \303\336\250\275\270\266\336 \261\330\317\276\335\241",
        "ENTER = \277\336\257\272\263"
    },
    {
        // ERROR_UPDATE_KBSETTINGS,
        "\276\257\304\261\257\314\337\312 \267\260\316\336\260\304\336 \332\262\261\263\304 \311 \276\257\303\262\311 \272\263\306\335\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_UPDATE_DISPLAY_SETTINGS,
        "\276\257\304\261\257\314\337\312 \303\336\250\275\314\337\332\262\311 \332\274\336\275\304\330 \276\257\303\262\311 \272\263\274\335\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_IMPORT_HIVE,
        "\276\257\304\261\257\314\337\312 \312\262\314\336 \314\247\262\331\311 \262\335\316\337\260\304\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_FIND_REGISTRY
        "\276\257\304\261\257\314\337\312 \332\274\336\275\304\330 \303\336\260\300 \314\247\262\331\311 \271\335\274\255\302\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CREATE_HIVE,
        "\276\257\304\261\257\314\337\312 \332\274\336\275\304\330 \312\262\314\336\311 \273\270\276\262\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_INITIALIZE_REGISTRY,
        "\276\257\304\261\257\314\337\312 \332\274\336\275\304\330\311 \274\256\267\266\306 \274\257\312\337\262 \274\317\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_INVALID_CABINET_INF,
        "\267\254\313\336\310\257\304\306 \321\272\263\305 inf \314\247\262\331\266\336 \314\270\317\332\303 \262\317\275\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CABINET_MISSING,
        "\267\254\313\336\310\257\304\266\336 \320\302\266\330\317\276\335\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CABINET_SCRIPT,
        "\267\254\313\336\310\257\304\305\262\306 \276\257\304\261\257\314\337 \275\270\330\314\337\304\266\336 \320\302\266\330\317\276\335\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_COPY_QUEUE,
        "\276\257\304\261\257\314\337\312 \272\313\337\260 \314\247\262\331 \267\255\260\311 \265\260\314\337\335\306 \274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CREATE_DIR,
        "\276\257\304\261\257\314\337\312 \262\335\275\304\260\331 \303\336\250\332\270\304\330\246 \273\270\276\262 \303\336\267\317\276\335 \303\336\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_TXTSETUP_SECTION,
        "\276\257\304\261\257\314\337\312 TXTSETUP.SIF \305\262\311 '%S' \276\270\274\256\335\311 \271\335\273\270\306\n"
        "\274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CABINET_SECTION,
        "\276\257\304\261\257\314\337\312 \267\254\313\336\310\257\304\305\262\311 '%S' \276\270\274\256\335\311 \271\335\273\270\306\n"
        "\274\257\312\337\262 \274\317\274\300\241\n",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_CREATE_INSTALL_DIR
        "\276\257\304\261\257\314\337\312 \262\335\275\304\260\331 \303\336\250\332\270\304\330\246 \273\270\276\262 \303\336\267\317\276\335 \303\336\274\300\241",
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_WRITE_PTABLE,
        "\276\257\304\261\257\314\337\312 \312\337\260\303\250\274\256\335 \303\260\314\336\331\311 \266\267\272\320\306 \274\257\312\337\262 \274\317\274\300\241\n"
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_ADDING_CODEPAGE,
        "\276\257\304\261\257\314\337\312 \332\274\336\275\304\330\315\311 \272\260\304\336\315\337\260\274\336\311 \302\262\266\306 \274\257\312\337\262 \274\317\274\300\241\n"
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_UPDATE_LOCALESETTINGS,
        "\276\257\304\261\257\314\337\312 \274\275\303\321 \333\271\260\331\246 \276\257\303\262 \303\336\267\317\276\335 \303\336\274\300\241\n"
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_ADDING_KBLAYOUTS,
        "\276\257\304\261\257\314\337\312 \332\274\336\275\304\330\315\311 \267\260\316\336\260\304\336 \332\262\261\263\304\311 \302\262\266\306 \274\257\312\337\262 \274\317\274\300\241\n"
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_UPDATE_GEOID,
        "\276\257\304\261\257\314\337\312 geo id \246 \276\257\303\262 \303\336\267\317\276\335 \303\336\274\300\241\n"
        "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"
    },
    {
        // ERROR_DIRECTORY_NAME,
        "Invalid directory name.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_INSUFFICIENT_PARTITION_SIZE,
        "The selected partition is not large enough to install ReactOS.\n"
        "The install partition must have a size of at least %lu MB.\n"
        "\n"
        "  * Press any key to continue.",
        NULL
    },
    {
        // ERROR_PARTITION_TABLE_FULL,
        "You cannot create a new primary or extended partition in the\n"
        "partition table of this disk because the partition table is full.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_ONLY_ONE_EXTENDED,
        "You cannot create more than one extended partition per disk.\n"
        "\n"
        "  * Press any key to continue."
    },
    {
        // ERROR_FORMATTING_PARTITION,
        "Setup is unable to format the partition:\n"
        " %S\n"
        "\n"
        "ENTER = Reboot computer"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE jaJPPages[] =
{
    {
        SETUP_INIT_PAGE,
        jaJPSetupInitPageEntries
    },
    {
        LANGUAGE_PAGE,
        jaJPLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        jaJPWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        jaJPIntroPageEntries
    },
    {
        LICENSE_PAGE,
        jaJPLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        jaJPDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        jaJPRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        jaJPUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        jaJPComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        jaJPDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        jaJPFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        jaJPSelectPartitionEntries
    },
    {
        CHANGE_SYSTEM_PARTITION,
        jaJPChangeSystemPartition
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        jaJPConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        jaJPSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        jaJPFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        jaJPDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        jaJPInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        jaJPPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        jaJPFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        jaJPKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        jaJPBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        jaJPLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        jaJPQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        jaJPSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        jaJPBootPageEntries
    },
    {
        REGISTRY_PAGE,
        jaJPRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING jaJPStrings[] =
{
    {STRING_PLEASEWAIT,
     "   \265\317\301 \270\300\336\273\262..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = Install   P = Create Primary   E = Create Extended   F3 = Quit"},
//     "   ENTER = �ݽİ�   C = �߰è��� ����   F3 = ����"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = Install   L = Create Logical Partition   F3 = Quit"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = \262\335\275\304\260\331   D = \312\337\260\303\250\274\256\335 \273\270\274\336\256   F3 = \301\255\263\274"},
    {STRING_DELETEPARTITION,
     "   D = Delete Partition   F3 = Quit"},
    {STRING_PARTITIONSIZE,
     "\261\300\327\274\262 \312\337\260\303\250\274\256\335\311 \273\262\275\336:"},
    {STRING_CHOOSENEWPARTITION,
     "You have chosen to create a primary partition on"},
//     "��׼� �߰è��ݦ ·�� ������ �Ķ� ���� ��ϼ�:"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "You have chosen to create an extended partition on"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "You have chosen to create a logical partition on"},
    {STRING_HDDSIZE,
    "\261\300\327\274\262 \312\337\260\303\250\274\256\335\311 \273\262\275\336\246 \322\266\336\312\336\262\304 \300\335\262\303\336 \306\255\263\330\256\270 \274\303\270\300\336\273\262\241"},
    {STRING_CREATEPARTITION,
     "   ENTER = \312\337\260\303\250\274\256\335 \273\270\276\262   ESC = \267\254\335\276\331   F3 = \301\255\263\274"},
    {STRING_PARTFORMAT,
    "\272\311 \312\337\260\303\250\274\256\335\312 \302\267\336\311 \303\274\336\255\335\303\336 \314\253\260\317\257\304 \273\332\317\275\241"},
    {STRING_NONFORMATTEDPART,
    "ReactOS\246 \274\335\267 \317\300\312 \320\314\253\260\317\257\304\311 \312\337\260\303\250\274\256\335\306 \262\335\275\304\260\331\275\331 \272\304\266\336 \276\335\300\270 \273\332\317\274\300\241"},
    {STRING_NONFORMATTEDSYSTEMPART,
    "The system partition is not formatted yet."},
    {STRING_NONFORMATTEDOTHERPART,
    "The new partition is not formatted yet."},
    {STRING_INSTALLONPART,
    "\276\257\304\261\257\314\337\312 ReactOS\246 \312\337\260\303\250\274\256\335 \274\336\256\263\306 \262\335\275\304\260\331\274\317\275\241"},
    {STRING_CHECKINGPART,
    "\276\257\304\261\257\314\337\312 \276\335\300\270 \273\332\300 \312\337\260\303\250\274\256\335\246 \271\335\273 \274\303\262\317\275\241"},
    {STRING_CONTINUE,
    "ENTER = \277\336\257\272\263"},
    {STRING_QUITCONTINUE,
    "F3 = \301\255\263\274  ENTER = \277\336\257\272\263"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"},
    {STRING_DELETING,
     "   Deleting file: %S"},
    {STRING_MOVING,
     "   Moving file: %S to: %S"},
    {STRING_RENAMING,
     "   Renaming file: %S to: %S"},
    {STRING_COPYING,
     "   \272\313\337\260 \301\255\263\311 \314\247\262\331: %S"},
    {STRING_SETUPCOPYINGFILES,
     "\276\257\304\261\257\314\337\312 \314\247\262\331\246 \272\313\337\260 \274\303 \262\317\275..."},
    {STRING_REGHIVEUPDATE,
    "   \332\274\336\275\304\330 \312\262\314\336\311 \272\263\274\335 \301\255\263..."},
    {STRING_IMPORTFILE,
    "   %S \246 \262\335\316\337\260\304 \301\255\263..."},
    {STRING_DISPLAYSETTINGSUPDATE,
    "   \303\336\250\275\314\337\332\262 \332\274\336\275\304\330 \276\257\303\262\246 \272\263\274\335 \301\255\263..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   \301\262\267 \276\257\303\262\311 \272\263\274\335 \301\255\263..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   \267\260\316\336\260\304\336 \332\262\261\263\304\311 \276\257\303\262\246 \272\263\274\335 \301\255\263..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   \272\260\304\336 \315\337\260\274\336 \311 \274\336\256\263\316\263\246 \332\274\336\275\304\330\306 \302\262\266 \301\255\263..."},
    {STRING_DONE,
    "   \266\335\330\256\263..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = \272\335\313\337\255\260\300\311 \273\262\267\304\336\263"},
    {STRING_REBOOTPROGRESSBAR,
    " Your computer will reboot in %li second(s)... "},
    {STRING_CONSOLEFAIL1,
    "\272\335\277\260\331\246 \265\260\314\337\335 \303\336\267\317\276\335\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "\262\257\312\337\335\303\267\305 \271\336\335\262\335 \304\274\303 USB \267\260\316\336\260\304\336 \246 \302\266\257\303 \262\331\272\304\266\336 \266\335\266\336\264\327\332 \317\275\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB \267\260\316\336\260\304\336 \312 \317\300\336 \266\335\276\336\335\306 \273\316\337\260\304 \273\332\303 \262\317\276\335\r\n"},
    {STRING_FORMATTINGDISK,
    "\276\257\304\261\257\314\337\312 \303\336\250\275\270\246 \314\253\260\317\257\304 \274\303\262\317\275"},
    {STRING_CHECKINGDISK,
    "\276\257\304\261\257\314\337\312 \303\336\250\275\270\246 \271\335\273 \274\303\262\317\275\241"},
    {STRING_FORMATDISK1,
    " \312\337\260\303\250\274\256\335\246 %S \314\247\262\331 \274\275\303\321 \303\336\314\253\260\317\257\304 (\270\262\257\270 \314\253\260\317\257\304) "},
    {STRING_FORMATDISK2,
    " \312\337\260\303\250\274\256\335\246 %S \314\247\262\331 \274\275\303\321 \303\336\314\253\260\317\257\304 "},
    {STRING_KEEPFORMAT,
    " \271\336\335\273\336\262\311 \314\247\262\331 \274\275\303\321\311 \317\317 (\315\335\272\263 \274\305\262) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  \274\255\331\262 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "on %I64u %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "on %I64u %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "\312\260\304\336\303\336\250\275\270 %lu (%I64u %s), \316\337\260\304=%hu, \312\336\275=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  \274\255\331\262 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "on \312\260\304\336\303\336\250\275\270 %lu (%I64u %s), \316\337\260\304=%hu, \312\336\275=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %s\274\255\331\262 %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) on %wZ [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  \312\260\304\336\303\336\250\275\270 %lu  (\316\337\260\304=%hu, \312\336\275=%hu, Id=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "\276\257\304\261\257\314\337\312 \261\300\327\274\262 \312\337\260\303\250\274\256\335\246 \302\267\336\306 \273\270\276\262\274\317\274\300:"},
    {STRING_UNPSPACE,
    "    %s\320\314\336\335\266\302\311 \275\315\337\260\275%s            %6lu %s"},
    {STRING_MAXSIZE,
    "MB (\273\262\300\336\262. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Extended Partition"},
    {STRING_UNFORMATTED,
    "\274\335\267 (\320\314\253\260\317\257\304)"},
    {STRING_FORMATUNUSED,
    "\320\274\326\263"},
    {STRING_FORMATUNKNOWN,
    "\314\322\262"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "\267\260\316\336\260\304\336 \332\262\261\263\304\311 \302\262\266 \301\255\263"},
    {0, 0}
};
