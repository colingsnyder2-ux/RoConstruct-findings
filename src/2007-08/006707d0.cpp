// from server: 88% by colin
struct CControlButtonExpand {
    char pad[0xf4];
    int field_f4;
    int field_f8;
    int field_fc;
    char pad2[0x16c - 0x100];
    void* field_16c;
    char pad3[0x174 - 0x170];
    void* field_174;

    void func();
};

extern "C" void* __stdcall sub_677380(void*);
extern "C" void* __stdcall sub_630202(void*, void*);
extern "C" void* __stdcall sub_6effe0(void*);
extern "C" void __stdcall sub_6f0ad0(void*);

void CControlButtonExpand::func()
{
    void* p = field_16c;
    if (p == 0)
        return;
    int* edx = *(int**)((char*)this + 0xfc);
    int ecx = *(int*)((char*)edx + 0xfc);
    if (ecx == 5)
        return;
    int eax = field_f8;
    if (eax != 2 && eax != 3 && eax != 4)
        return;
    if (ecx == 4 && *(int*)((char*)edx + 0xf4) == 2)
        return;
    void* a = sub_677380(p);
    void* b = sub_630202(a, 0);
    if (b == 0)
        return;
    if (*(int*)((char*)b + 0x1e8) == 0)
        return;
    if (field_174 == 0)
        return;
    void* c = sub_6effe0(this);
    sub_6f0ad0(c);
}
