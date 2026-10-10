// from server: 82% by atomic.potato
extern "C" void __cdecl Function_80B15D();

extern "C" unsigned long Global_CD0078;
extern "C" unsigned long Global_CD0070;
extern "C" unsigned long Global_CD0074;

extern "C" void __cdecl Function_6AB080()
{
    if (Global_CD0078 & 1)
        return;

    Global_CD0078 |= 1;
    Global_CD0070 = 0;
    Global_CD0074 = 0;
    Function_80B15D();
}
