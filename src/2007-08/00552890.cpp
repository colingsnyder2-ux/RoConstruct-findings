// from server: 69% by colin
extern "C" int __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S {
    char pad0[0x10];
    unsigned int* p10;
    char pad14[0xC];
    unsigned int* p20;
    char pad24[0xC];
    unsigned int* p30;
    char pad34[0x8];
    char f3c;
    char pad3d[0x3];
    char buf40[0x4C];
    unsigned int f8c;
    unsigned int f90;
    unsigned int f94;
    int f98;
    int get();
};

int S::get()
{
    if (*p20 == 0) {
        (*(void (__stdcall**)(void))(*((unsigned int*)this) + 0x54))();
    }
    unsigned int ecx = *p20;
    unsigned int edx = *p30;
    unsigned int end = edx + ecx;
    if (ecx < end) {
        return *(unsigned char*)ecx;
    }
    unsigned int eax = ecx - *p10;
    int* edi = &f98;
    int tmp = (int)eax;
    int* peax = edi;
    if (*edi < tmp) {
        peax = &tmp;
    }
    int ebx = *peax;
    if (ebx != 0) {
        memmove_s((void*)(f90 + (*edi - ebx)), *edi - ebx, (const void*)ebx, ebx);
    }
    unsigned int ecx2 = *edi;
    unsigned int edx2 = f90;
    unsigned int eax2 = ecx2 + edx2;
    *p10 = eax2 - ebx;
    *p20 = eax2;
    *p30 = 0;
    int r = ((int (__stdcall*)(unsigned int, unsigned int, unsigned int))0x550870)(f8c, f90 + *edi, f94 - *edi);
    if (r == -1) {
        f3c = 1;
        r = 0;
    }
    unsigned int ecx3 = *edi + f90 + r;
    *p30 = ecx3 - *p20;
    if (r != 0) {
        return *(unsigned char*)*p20;
    }
    return -1;
}
