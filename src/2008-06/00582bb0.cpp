// from server: 16% by colin
struct DuplicateSelectionVerb {
    char pad0[4];
    void* field4;
    char pad8[4];
    void* fieldC;
    char pad10[4];
    char field14[0x0C];
    void* field20;
    void run(int);
};

extern "C" void __stdcall sub_57D250();
extern "C" void* __stdcall sub_591A30();
extern "C" void __stdcall sub_4153B0();
extern "C" void* __stdcall sub_581CC0();
extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_423BA0();
extern "C" void __stdcall sub_593480();
extern "C" void* __stdcall sub_6A0920();
extern "C" void __stdcall sub_5A05D0();
extern "C" void __stdcall sub_413B00();
extern "C" void __stdcall sub_4531E0();
extern "C" void __stdcall sub_5BD820();
extern "C" void __stdcall sub_58C5C0();
extern "C" void __stdcall sub_5A2FE0();
extern "C" void __stdcall sub_413A70();
extern "C" void __stdcall sub_6A067A();

void DuplicateSelectionVerb::run(int)
{
    void* p = sub_591A30();
    void* q = field20;
    if (q)
        sub_4153B0();
    void* r = sub_581CC0();
    void* s = *(void**)((char*)r + 0x154);
    void* t = *(void**)((char*)s + 0x10);
    if (*(void**)((char*)s + 0xC) > t)
        sub_802890();
    void* u = *(void**)s;
    void* v = sub_581CC0();
    void* w = *(void**)((char*)v + 0x154);
    void* x = *(void**)((char*)w + 0xC);
    if (x > *(void**)((char*)w + 0x10))
        sub_802890();
    void* y = *(void**)w;
    sub_423BA0();
    sub_593480();
    void* z = sub_6A0920();
    if (z)
        *(void**)z = 0;
    else
        z = 0;
    sub_5A05D0();
    sub_413B00();
    void* a = field20;
    if (a)
        sub_4531E0();
    else
        a = 0;
    sub_5BD820();
    void* b = field4;
    if (*(int*)((char*)b + 0x1C) >= 0x10)
        b = *(void**)((char*)b + 8);
    else
        b = (char*)b + 8;
    sub_58C5C0();
    sub_5A2FE0();
    if (p)
    {
        sub_413A70();
        sub_6A067A();
    }
}
