//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    { "", "/etc/scripts/dwmblocks/sb-music",   0,    1  },
    { "", "/etc/scripts/dwmblocks/sb-gpu",     5,    0  },
    { "", "/etc/scripts/dwmblocks/sb-sysres",  5,    0  },
    { "", "/etc/scripts/dwmblocks/sb-temp",    10,   0  },
    { "", "/etc/scripts/dwmblocks/sb-date",    60,   0  },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  |  ";
static unsigned int delimLen = 5;
