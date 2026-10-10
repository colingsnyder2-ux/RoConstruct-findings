// from server: 70% by atomic.potato
extern "C" void __cdecl sub_5ccca0(void*, int);

struct S {
    void __cdecl f(void*, int);
};

void __cdecl S::f(void* p, int value)
{
    if (value != 4) {
        sub_5ccca0(p, value);
        return;
    }

    *(unsigned long*)p = 0x00ba896c;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
