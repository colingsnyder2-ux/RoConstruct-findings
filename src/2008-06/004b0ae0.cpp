// from server: 54% by colin
struct ReplicatorNewInstanceItem {
    char pad0[4];
    void* field4;
    char pad8[4];
    char fieldC[0x24];
    int field30;
    ReplicatorNewInstanceItem* ctor(void* a, void* b);
};

extern "C" void* __cdecl sub_6A0920(unsigned int size);
extern "C" void __fastcall sub_4ACC30(void* p);
extern "C" void __fastcall sub_4CB540(void* p, void* a, void* b, void* c);
extern "C" void __fastcall sub_4CA090(void* p);

ReplicatorNewInstanceItem* ReplicatorNewInstanceItem::ctor(void* a, void* b)
{
    field4 = sub_6A0920(0x298);
    char* esi = (char*)this + 0xc;
    *(volatile int*)((char*)this + 0x18) = 0;
    sub_4ACC30(esi);
    void* eax;
    if (esi != 0)
        eax = esi - 0xc;
    else
        eax = 0;
    eax = *(void**)((char*)eax + 4);
    if (eax != 0)
        eax = (char*)eax + 0x290;
    else
        eax = 0;
    void* edx = *(void**)b;
    void* tmp = (char*)this + 0x1c;
    sub_4CB540(esi + 8, tmp, eax, edx);
    *(float*)(esi + 0x18) = 1.0f;
    *(int*)(esi + 0x20) = *(int*)(esi + 8);
    sub_4CA090(esi);
    field30 = 0;
    return this;
}
