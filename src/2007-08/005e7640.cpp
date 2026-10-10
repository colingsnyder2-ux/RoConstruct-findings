// from server: 63% by colin
struct RBX_VFlag {
    char pad[0x168];
    void* field_168;
    char pad2[0xdc];
    void* field_248;
    char pad3[0x1c];
    void* field_21c;
    void* field_220;
    char pad4[0x8];
    void* field_22c;
    void* field_230;
    char field_234;
    char pad5[0x3];
    char field_238;
    char pad6[0x3];
    void* field_23c;
    int field_240;
    void construct(int arg);
};

extern "C" void __cdecl sub_5E7580(int);
extern "C" void __cdecl sub_541BF0(int, int);
extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void __stdcall sub_77E6AC(void*);

void RBX_VFlag::construct(int arg)
{
    if (arg != 0) {
        *(void**)((char*)this + 0x168) = (void*)0x7bd7ec;
        *(void**)((char*)this + 0x248) = (void*)0x7a4ccc;
    }
    sub_5E7580(0);
    void* v168 = *(void**)((char*)this + 0x168);
    *(void**)this = (void*)0x7bd4bc;
    *(void**)((char*)this + 4) = (void*)0x7bd4b0;
    *(void**)((char*)this + 0x10) = (void*)0x7bd4a8;
    *(void**)((char*)this + 0x14) = (void*)0x7bd498;
    *(void**)((char*)this + 0x2c) = (void*)0x7bd488;
    *(void**)((char*)this + 0x44) = (void*)0x7bd478;
    *(void**)((char*)this + 0x5c) = (void*)0x7bd468;
    *(void**)((char*)this + 0x74) = (void*)0x7bd458;
    *(void**)((char*)this + 0x8c) = (void*)0x7bd448;
    *(void**)((char*)this + 0xe8) = (void*)0x7bd440;
    *(void**)((char*)this + 0x158) = (void*)0x7bd428;
    void* ecx_val = *(void**)((char*)v168 + 4);
    *(void**)((char*)ecx_val + (int)this + 0x168) = (void*)0x7bd420;
    void* edx_val = *(void**)((char*)this + 0x168);
    void* eax_val = *(void**)((char*)edx_val + 4);
    void* ecx2 = (void*)((char*)eax_val - 0xe0);
    *(void**)((char*)eax_val + (int)this + 0x164) = ecx2;
    *(void**)((char*)this + 0x21c) = 0;
    *(void**)((char*)this + 0x220) = 0;
    *(void**)((char*)this + 0x22c) = 0;
    *(void**)((char*)this + 0x230) = 0;
    *(char*)((char*)this + 0x234) = 0;
    *(char*)((char*)this + 0x238) = 0;
    *(void**)((char*)this + 0x23c) = 0;
    void* str = sub_77E698(">Victory");
    sub_541BF0((int)this, (int)&str);
    sub_77E6AC(&str);
    *(int*)((char*)this + 0x240) = 0xc2;
}
