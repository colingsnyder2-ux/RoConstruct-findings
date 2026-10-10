// from server: 79% by colin
struct FactoryProduct_Explosion {
    void* field0;
    void* field4;
};

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_587D30();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void __cdecl sub_4339D0(void*);
extern "C" void __cdecl sub_630D23(void*);

void __cdecl sub_772E00()
{
    void* p;
    sub_725520((const char*)0x8C34FC, (const char*)0x588120);
    p = sub_587D30();
    void** pp = &p;
    void* obj = sub_407410(pp);
    sub_4339D0(obj);
    *(void**)obj = (void*)0x8A357C;
    sub_630D23((void*)0x77A840);
}
