// from server: 32% by colin
struct VDHTMLWindow_SignalDesc
{
    void construct();
};

extern "C" void __cdecl func_00418690();
extern "C" void __cdecl func_00630d23();
extern "C" void __cdecl func_00570c00();

void VDHTMLWindow_SignalDesc::construct()
{
    if ((*(unsigned char*)0x8bb458 & 1) == 0)
    {
        *(unsigned int*)0x8bb458 |= 1;
        func_00418690();
        func_00570c00();
        func_00630d23();
    }
}
