// from server: 82% by atomic.potato
extern "C" void __cdecl Function_80B15D(const char *);

volatile unsigned long Global_CD1804;
volatile unsigned long Global_CD17FC;
volatile unsigned long Global_CD1800;

int Function_006D6850()
{
    if (Global_CD1804 & 1)
        return 0;

    Global_CD1804 |= 1;
    Global_CD17FC = 0;
    Global_CD1800 = 0;
    Function_80B15D("8csm");
    return 0;
}
