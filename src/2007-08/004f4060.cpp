// from server: 46% by colin
extern "C" void __cdecl _free(void*);

struct S {
    void* p0;
    void* p4;
    void* p8;
    void* pC;
    void* p10;
    void* p14;
    void destroy();
};

void S::destroy()
{
    _free(pC);
    pC = 0;
    p10 = 0;
    p14 = 0;
    _free(p0);
    p0 = 0;
    p4 = 0;
    p8 = 0;
}
