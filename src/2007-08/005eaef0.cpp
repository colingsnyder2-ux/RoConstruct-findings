// from server: 56% by colin
struct FlagStand {
    char pad0[0xe8];
    int field_e8;
    int field_ec;
    int field_f0;
    void construct();
};

struct String {
    char buf[0x1c];
    String(const char*);
    ~String();
};

extern "C" void __stdcall sub_5eaa60();
extern "C" int __stdcall sub_5a0100();
extern "C" void __stdcall sub_541bf0();
extern "C" void __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

extern int dword_8c1558;

void FlagStand::construct()
{
    sub_5eaa60();

    *(int*)((char*)this + 0x00) = 0x7bdf1c;
    *(int*)((char*)this + 0x04) = 0x7bdf14;
    *(int*)((char*)this + 0x10) = 0x7bdf0c;
    *(int*)((char*)this + 0x14) = 0x7bdefc;
    *(int*)((char*)this + 0x2c) = 0x7bdeec;
    *(int*)((char*)this + 0x44) = 0x7bdedc;
    *(int*)((char*)this + 0x5c) = 0x7bdecc;
    *(int*)((char*)this + 0x74) = 0x7bdebc;
    *(int*)((char*)this + 0x8c) = 0x7bdeac;

    field_e8 = sub_5a0100();
    field_ec = 0;
    field_f0 = 0;

    String s("FlagStandService");
    sub_541bf0();
    s.~String();

    int* p = (int*)dword_8c1558;
    int* vt = (int*)*p;
    void (__stdcall *fn)(void*, void*) = (void (__stdcall *)(void*, void*))vt[2];
    char b = 0;
    fn((void*)((char*)this + 4), &b);
}
