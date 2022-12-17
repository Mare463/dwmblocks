//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   " , "~/dwmblocks/scripts/network"                       , 1 , 4 } ,
	{"" , "~/dwmblocks/scripts/volume "                            , 0 , 10} ,
	{"盛 " , "brillo"                                                      , 0 , 6 } ,
	{"", "~/dwmblocks/scripts/battery"                             , 2 , 0 } ,
	{" "  , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g "    , 1 , 0 } ,
        {" "  , "date '+%I:%M %p ' "                                          , 60, 0 } ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
