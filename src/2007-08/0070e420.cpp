// from server: 71% by colin
struct CXTColorPageCustom
{
    char pad0[0x88];
    void* field_88;
    char pad8c[0x110 - 0x8c];
    void* field_110;
    char pad114[0x79c - 0x114];
    int field_79c;
    void* field_7a0;

    void func_0070e420();
};

extern "C" void __stdcall func_0062feea(int);
extern "C" void __stdcall func_0068ee30(void*, void*, int);
extern "C" void __stdcall func_0070c680(void*, void*);
extern "C" void __stdcall func_0070d140(void*, double);

extern double g_78d3a8;

void CXTColorPageCustom::func_0070e420()
{
    func_0062feea(1);

    double d = (double)field_79c / g_78d3a8;
    func_0070d140(&field_88, d);

    void** p88 = &field_88;
    void* v88 = *(void**)p88;
    void* r88 = ((void* (__thiscall*)(void*))*(void**)((char*)v88 + 0x148))(p88);

    void** p110 = &field_110;
    void* v110 = *(void**)p110;
    void* r110 = ((void* (__thiscall*)(void*))*(void**)((char*)v110 + 0x148))(p110);

    if (r88 != r110)
    {
        void* v = *(void**)p110;
        ((void (__thiscall*)(void*, void*, int))*(void**)((char*)v + 0x144))(p110, r88, 0);
    }

    void* p7a0 = field_7a0;
    if (r88 != *(void**)((char*)p7a0 + 0x124))
    {
        func_0068ee30(p7a0, r88, 0);
    }

    func_0070c680(this, r88);
}
