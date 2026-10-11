// from server: 47% by colin




extern "C" void __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S {
    char pad0[0x10];
    unsigned char* p10;
    char pad14[0xC];
    unsigned char* p20;
    char pad24[0xC];
    unsigned char* p30;
    char pad34[0x10];
    unsigned char* p44;
    unsigned char* p48;
    unsigned int p4c;
    unsigned int p50;
    int f();
};

int S::f() {
    if (*p20 == 0) {
        (*(void (__thiscall**)(S*))(*(unsigned int*)this + 0x54))(this);
    }
    unsigned char* a = p20;
    unsigned int v = *a;
    unsigned int end = *p30 + v;
    if (v < end) {
        return *p20;
    }
    unsigned int diff = v - (unsigned int)p10;
    unsigned int* pb = &p50;
    unsigned int* pc = pb;
    if ((int)p50 < (int)diff) {
        pc = &diff;
    }
    unsigned int edi = *pc;
    if (edi != 0) {
        memmove_s((void*)((unsigned int)p44 + edi), (unsigned int)(p48 - edi + p50), (void*)edi, v - edi);
    }
    unsigned int eax = (unsigned int)(p48 + p50);
    p10 = (unsigned char*)(eax - edi);
    p20 = (unsigned char*)eax;
    p30 = (unsigned char*)(eax - eax);
    unsigned int ebx = p50;
    unsigned int ecx = p4c - ebx;
    unsigned int edx = (unsigned int)(p48 + ebx);
    unsigned int eax2 = (unsigned int)p44;
    S* self = this;
    self = (S*)((char*)self + 0x40);
    ((void (__cdecl*)(S*, unsigned int, unsigned int, unsigned int))0x5f29e0)(self, eax2, edx, ecx);
    return 0;
}
