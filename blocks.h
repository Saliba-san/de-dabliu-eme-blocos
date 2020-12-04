//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"", "nextappointment",				60,                 0},
        {"", "musicstatus",				1,                  11},
				//{"", "currencies",				30000,              0},
        {"", "wifistrength",				20,                 0},
        {"", "volume.sh",				 0,                 10},
				{"", "battery",				        10,        	    0},
        {"", "clock",					60,                 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
