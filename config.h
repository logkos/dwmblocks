//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"[", "uptime -p", 60, 0},
        {"", "sb-internet", 5, 4},
	{" ", "sb-cpu", 10, 0},
        {" ", "free -h | awk '/^Swap/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 10, 0},
	{" ", "cat /sys/class/power_supply/BAT0/capacity", 30,	0},
	{" ", "date '+%b %d (%a) %I:%M%p]'", 5, 0},

};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "] [";
static unsigned int delimLen = 5;
