// from server: 40% by colin
struct CLuaHtmlViewBinder
{
    char pad0[4];
    char field4[0x14];
    char field18;
    void Init();
};

extern "C" void __stdcall sub_42B150(void*, void*, int);
extern "C" void __stdcall sub_41E0F0(void*, void*);
extern "C" void __stdcall sub_42CD40(void*);
extern "C" void __stdcall sub_417750(void*);

void CLuaHtmlViewBinder::Init()
{
    if (field18 != 0)
        return;

    char buf1[0xc];
    char buf2[0x10];
    char buf3[8];

    sub_41E0F0(&field4[0], buf3);
    sub_42B150(buf2, (void*)0x42B8F0, 0);
    sub_42CD40(buf1);
    sub_417750(*(void**)0x8BAFCC);

    field18 = 1;
}
