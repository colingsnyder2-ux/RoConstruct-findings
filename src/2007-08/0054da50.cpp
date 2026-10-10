// from server: 60% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S {
    char pad0[0x10];
    unsigned int* p10;
    char pad14[0xC];
    unsigned int* p20;
    char pad24[0xC];
    unsigned int* p30;
    char pad34[0x14];
    unsigned int off48;
    char pad4C[0x4];
    unsigned int off50;
    int f();
};

int S::f()
{
    if (*p20 == 0) {
        unsigned int* vt = *(unsigned int**)this;
        ((void (__stdcall*)(void*))vt[0x54/4])(this);
    }
    unsigned int* base = p20;
    unsigned int cur = *base;
    unsigned int end = *p30;
    unsigned int limit = cur + end;
    if (cur < limit) {
        return *(unsigned char*)cur;
    }
    unsigned int diff = cur - *p10;
    unsigned int* slot = &off50;
    unsigned int* chosen = slot;
    if ((int)off50 < (int)diff) {
        chosen = &diff;
    }
    unsigned int val = *chosen;
    if (val != 0) {
        memmove_s((void*)(off48 + (off50 - val)), off50 - val, (const void*)val, cur - val);
    }
    unsigned int newbase = off50 + off48;
    *p10 = newbase - val;
    *p20 = newbase;
    *p30 = 0;
    *p30 = (off50 + off48) - *p20;
    return -1;
}
