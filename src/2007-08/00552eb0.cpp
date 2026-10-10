// from server: 59% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S {
    char pad0[0x10];
    unsigned int* field10;
    char pad14[0xC];
    unsigned int* field20;
    char pad24[0xC];
    unsigned int* field30;
    char pad34[0x8];
    unsigned char field3c;
    char pad3d[0x3];
    char field40[0x60];
    unsigned int fielda0;
    unsigned int fielda4;
    unsigned int fielda8;
    int fieldac;
    int get();
};

int S::get()
{
    if (*field20 == 0) {
        (*(void (__stdcall**)(void))(*((unsigned int*)this) + 0x54))();
    }
    unsigned int ecx = *field20;
    unsigned int edx = *field30;
    unsigned int end = edx + ecx;
    if (ecx < end) {
        return *(unsigned char*)ecx;
    }
    unsigned int eax = ecx - *field10;
    int* edi = &fieldac;
    int* peax;
    if (fieldac < (int)eax) {
        peax = edi;
    } else {
        peax = (int*)&eax;
    }
    int ebx = *peax;
    if (ebx != 0) {
        unsigned int dst = fielda4 + (*edi - ebx);
        memmove_s((void*)dst, ecx - ebx, (const void*)ebx, *edi - ebx);
    }
    unsigned int eax2 = *edi + fielda4;
    *field10 = eax2 - ebx;
    *field20 = eax2;
    *field30 = 0;
    int r = ((int (__stdcall*)(unsigned int, unsigned int, unsigned int))0x552980)(fielda0, fielda4 + *edi, fielda8 - *edi);
    if (r == -1) {
        field3c = 1;
        r = 0;
    }
    unsigned int ecx2 = *edi + fielda4 + r - *field20;
    *field30 = ecx2;
    if (r != 0) {
        return *(unsigned char*)*field20;
    }
    return -1;
}
