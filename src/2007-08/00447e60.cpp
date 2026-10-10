// from server: 19% by colin
struct CRenderSettings {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    CRenderSettings();
};

extern "C" void __cdecl sub_6306D6();
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void* __cdecl sub_40A7D0();
extern "C" void* __cdecl sub_433D20(void*);
extern "C" void* __cdecl sub_40A7F0(void*);
extern "C" void __cdecl sub_6306D0(void*, const char*, unsigned int);
extern "C" void __cdecl sub_6306CA(void*, void*);

CRenderSettings::CRenderSettings()
{
    sub_6306D6();
    *(void**)this = (void*)0x7903AC;
    void* p = sub_62FEF6(0x6C);
    if (p) {
        void* a = sub_40A7D0();
        void* b = sub_433D20(a);
        void* c = sub_40A7F0(b);
        sub_6306D0(p, (const char*)c, 0xB9);
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x20) = p;
    sub_6306CA(this, p);
}
