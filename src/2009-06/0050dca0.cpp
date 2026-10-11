// from server: 51% by atomic.potato
struct T4_0050dca0 {
    char pad0[4];
    void* m_field4;
    char pad8[4];
    char m_fieldC[0x24];
    int m_field30;
};

extern "C" void* __cdecl sub_00718a38(unsigned int);
extern "C" void __cdecl sub_0050d040(void*);
extern "C" void __cdecl sub_0050d500(void*, void*, void*, void*);
extern "C" void __cdecl sub_005088b0(void*);

T4_0050dca0* __cdecl sub_0050dca0(T4_0050dca0* self, void* arg1, void* arg2)
{
    self->m_field4 = sub_00718a38(0x38);
    char* esi = (char*)self + 0xc;
    sub_0050d040(esi);
    char* eax;
    if (esi != 0)
        eax = esi - 0xc;
    else
        eax = 0;
    int v = *(int*)(eax + 4);
    int* p;
    if (v != 0)
        p = (int*)(v + 0x30);
    else
        p = 0;
    int edx = *(int*)arg2;
    sub_0050d500(esi + 8, &arg1, p, (void*)edx);
    *(float*)(esi + 0x18) = 1.0f;
    *(int*)(esi + 0x20) = *(int*)(esi + 8);
    sub_005088b0(esi);
    self->m_field30 = 0;
    return self;
}
