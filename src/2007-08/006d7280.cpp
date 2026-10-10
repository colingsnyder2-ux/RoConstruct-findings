// from server: 35% by colin
struct CXTMemDC
{
    void dtor();
};

extern "C" int __stdcall BitBlt(int, int, int, int, int, int, int, int, unsigned long);
extern "C" int __stdcall SelectObject(int, int);

void CXTMemDC::dtor()
{
    *(int*)this = 0x7d8b5c;
    if (*(int*)((char*)this + 0x14) != 0)
    {
        int a = *(int*)((char*)this + 0x24) - *(int*)((char*)this + 0x1c);
        int b = *(int*)((char*)this + 0x20) - *(int*)((char*)this + 0x18);
        int c = *(int*)((char*)this + 0x1c);
        int d = *(int*)((char*)this + 0x18);
        int e = *(int*)((char*)this + 0x10);
        int f = *(int*)((char*)this + 4);
        BitBlt(*(int*)((char*)e + 4), d, c, b, a, f, 0, 0, 0xcc0020);
    }
    int g = *(int*)((char*)this + 0x30);
    if (g != 0)
    {
        SelectObject(*(int*)((char*)this + 4), g);
        (*(void(__thiscall**)(char*))((char*)this + 0x28))((char*)this + 0x28);
    }
    (*(void(__thiscall**)(char*))0x7388e6)((char*)this);
    *(int*)((char*)this + 0x28) = 0x788300;
    (*(void(__thiscall**)(char*))0x41f680)((char*)this + 0x28);
    (*(void(__thiscall**)(char*))0x7383dc)((char*)this);
}
