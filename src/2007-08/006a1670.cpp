// from server: 43% by colin
struct CXTPDockBar {
    char pad0[0x54];
    int field54;
    char pad58[0x14];
    int field6c;
    int ctor();
};

extern "C" void __stdcall sub_6305da();
extern "C" void __stdcall sub_632d40();
extern "C" void __stdcall sub_6811a0(int, int, int, int);
extern "C" void __stdcall sub_6d2910(int, int);

int CXTPDockBar::ctor()
{
    sub_6305da();
    *(int*)this = 0x7d32dc;
    sub_632d40();
    sub_6d2910(*(int*)((char*)this + 0x60), 0);
    field54 = 0;
    field6c = 0;
    sub_6811a0(0, 0x7d3280, 0, 0);
    return (int)this;
}
