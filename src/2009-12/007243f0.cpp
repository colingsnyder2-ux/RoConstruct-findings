// from server: 74% by atomic.potato
struct S {
    char pad0[0x14];
    int* field14;
    char pad18[0x0c];
    int* field24;
    char pad28[0x0c];
    int* field34;
    char pad38[0x08];
    int field40;
    char pad44[0x08];
    int field4c;
    int field50;
    void f();
};

extern "C" void* __stdcall append_impl(void*, const char*, unsigned int);

void S::f()
{
    int* p14 = field14;
    int ecx = *p14;
    int* p24 = field24;
    int eax = *p24;
    eax -= ecx;
    if (eax > 0)
    {
        append_impl((void*)field40, (const char*)ecx, (unsigned int)eax);
        int ecx2 = field4c;
        int* edx = field14;
        int eax2 = field50;
        *edx = ecx2;
        int* edx2 = field24;
        eax2 += ecx2;
        *edx2 = ecx2;
        eax2 -= ecx2;
        int* ecx3 = field34;
        *ecx3 = eax2;
    }
}
