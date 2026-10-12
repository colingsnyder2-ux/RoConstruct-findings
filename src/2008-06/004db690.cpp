// from server: 77% by colin
struct ViewG3D {
    void* field0;
    void* field4;
    void* field8;
    char pad0C[8];
    void* field14;
    void func(int arg);
};

void ViewG3D::func(int arg)
{
    struct Vtbl0 { void (__thiscall *fn24)(void*); };
    struct Vtbl4 { void (__thiscall *fn14)(void*, double); };
    struct Vtbl8 { void (__thiscall *fn14)(void*, int, int); };
    struct VtblA { void* (__thiscall *fn8)(void*); };

    void* p0 = field0;
    (*(Vtbl0**)p0)->fn24(p0);

    double d = *(double*)0x826938;
    void* p4 = field4;
    (*(Vtbl4**)p4)->fn14(p4, d);

    void* p14 = field14;
    void* p204 = *(void**)((char*)p14 + 0x204);
    void* p288 = (char*)p204 + 0x288;
    void* edx = *(void**)p288;
    void* p8 = field8;
    void* edi = *(void**)p8;
    void* eax = (*(VtblA**)edx)->fn8(edx);
    (*(Vtbl8**)edi)->fn14(p8, (int)eax, arg);
}
