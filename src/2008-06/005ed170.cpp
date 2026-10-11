// from server: 50% by colin
struct S {
    void* vtable;
    char pad[0x1c - 4];
    unsigned int field_1c;
    int field_20;
    char pad2[0x30 - 0x24];
    char field_30[0x20];
    char field_50[0x20];
    int field_70;
    char pad4[0x7c - 0x74];
    int field_7c;
    int field_80;
    int field_84;
    char field_88[0x18];
    int field_a0;
    char pad6[0xac - 0xa4];
    int field_ac;
    int field_b0;
    int field_b4;
    int field_b8;
    char pad8[0xc4 - 0xbc];
    int field_c4;
    int field_c8;
    int field_cc;
    int field_d0;
    char pad10[0xdc - 0xd4];
    int field_dc;
    int field_e0;
    int field_e4;
    void destroy();
};

extern "C" void __cdecl func_006a067a(void*);
extern "C" void __cdecl func_00802890();

void S::destroy()
{
    vtable = (void*)0x83fe7c;
    int ebp = field_20;
    void (__cdecl *ebx)() = func_00802890;
    if (field_1c > ebp)
        ebx();
    int edi = field_1c;
    if (edi > field_20)
        ebx();
    while (edi != ebp) {
        int* p = (int*)edi;
        int ecx = *p;
        if (ecx != 0) {
            int* eax = (int*)ecx;
            void (__thiscall *edx)(void*, int) = (void (__thiscall *)(void*, int))*(int*)*eax;
            edx((void*)ecx, 1);
        }
        edi += 4;
    }
    if (field_dc != 0) {
        func_006a067a((void*)field_dc);
    }
    func_006a067a((void*)field_d0);
    field_dc = 0;
    field_e0 = 0;
    field_e4 = 0;
    if (field_c4 != 0) {
        func_006a067a((void*)field_c4);
    }
    func_006a067a((void*)field_b8);
    field_c4 = 0;
    field_c8 = 0;
    field_cc = 0;
    if (field_ac != 0) {
        func_006a067a((void*)field_ac);
    }
    func_006a067a((void*)field_a0);
    field_ac = 0;
    field_b0 = 0;
    field_b4 = 0;
    ((void (__thiscall *)(void*))0x4077d0)(field_88);
    func_006a067a(*(void**)field_88);
    if (field_7c != 0) {
        func_006a067a((void*)field_7c);
    }
    func_006a067a((void*)field_70);
    field_7c = 0;
    field_80 = 0;
    field_84 = 0;
    ((void (__thiscall *)(void*))0x553d80)(field_50);
    ((void (__thiscall *)(void*))0x553d80)(field_30);
    ((void (__thiscall *)(void*))0x56c080)(this);
}
