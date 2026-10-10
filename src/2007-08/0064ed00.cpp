// from server: 65% by colin
struct CXTPToolBar_CControlButtonExpand
{
    char pad[0x1A8];
    void Construct();
};

extern "C" void* __stdcall sub_62FEF6(int);
extern "C" void __stdcall sub_6811A0(int, int, int, int);
extern "C" void __stdcall sub_6CA6C0(void*, void*);
extern "C" void __stdcall sub_643F20();

void CXTPToolBar_CControlButtonExpand::Construct()
{
    sub_643F20();
    *(int*)((char*)this + 0x00) = 0x7C7384;
    *(int*)((char*)this + 0x54) = 0x7C7374;
    *(int*)((char*)this + 0x5C) = 0x7C7314;
    *(int*)((char*)this + 0x180) = 0;
    *(int*)((char*)this + 0x184) = 0;
    *(int*)((char*)this + 0x188) = 1;
    *(int*)((char*)this + 0x18C) = 0;
    *(int*)((char*)this + 0x130) = 1;
    *(int*)((char*)this + 0x198) = 0;
    *(int*)((char*)this + 0x19C) = 1;
    *(int*)((char*)this + 0x190) = 0;
    *(int*)((char*)this + 0x194) = 0;
    *(int*)((char*)this + 0x1A0) = 1;
    *(int*)((char*)this + 0x1A4) = 0;

    void* p = sub_62FEF6(0x50);
    if (p != 0)
    {
        sub_6CA6C0(p, this);
    }
    else
    {
        p = 0;
    }
    *(int*)((char*)this + 0x184) = (int)p;
    *(int*)((char*)this + 0xE8) = 0x3F;
    sub_6811A0(0, 8, 0x7C7304, 0);
}
