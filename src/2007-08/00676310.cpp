// from server: 23% by colin
struct CXTPCustomizeCommandsListBox
{
    char pad[0x54];
    void* field_54;
    int method_62fdd6(int, int, int);
    int method_62fde2(int, int, int);

    int method_676310(int nCmd, int nID, int nCode);
};

struct HelperA
{
    void ctor(void*);
    void dtor();
    void method_680060(void*, void*);
    void method_680430();
};

struct HelperB
{
    void ctor(void*);
    void dtor();
};

extern "C" void* __cdecl func_7383be(void*);
extern "C" void __cdecl func_6321d0(void*);
extern "C" void __cdecl func_630a1e();

int CXTPCustomizeCommandsListBox::method_676310(int nCmd, int nID, int nCode)
{
    if (nCmd == 0xf)
    {
        HelperB hb;
        hb.ctor(this);
        HelperA ha;
        ha.ctor(this);
        int local1 = 0;
        ha.method_680060(&local1, *(void**)((char*)&ha));
        HelperA ha2;
        ha2.ctor(this);
        int v1 = *(int*)((char*)&ha2);
        int v2 = *(int*)((char*)&ha2 + 4);
        int v3 = *(int*)((char*)&ha2 + 8);
        int v4 = *(int*)((char*)&ha2 + 12);
        func_6321d0(field_54);
        void* p = field_54;
        int args[4];
        args[0] = v1;
        args[1] = v2;
        args[2] = v3;
        args[3] = v4;
        void* vtbl = *(void**)&ha2;
        void (*fn)(void*, int, int, int, int, void*, void*) = *(void (**)(void*, int, int, int, int, void*, void*))((char*)vtbl + 0x70);
        fn(&ha2, 0, 1, (int)p, 0, &args, 0);
        int result = this->method_62fde2(0xf, 0, 0);
        ha2.dtor();
        hb.dtor();
        return result;
    }
    else if (nCmd == 0x14)
    {
        void* p = func_7383be((void*)nID);
        HelperA ha;
        ha.ctor(this);
        int v1 = *(int*)((char*)&ha);
        int v2 = *(int*)((char*)&ha + 4);
        int v3 = *(int*)((char*)&ha + 8);
        int v4 = *(int*)((char*)&ha + 12);
        func_6321d0(field_54);
        void* p2 = field_54;
        int args[4];
        args[0] = v1;
        args[1] = v2;
        args[2] = v3;
        args[3] = v4;
        void* vtbl = *(void**)&ha;
        void (*fn)(void*, int, int, int, int, void*, void*) = *(void (**)(void*, int, int, int, int, void*, void*))((char*)vtbl + 0x70);
        fn(&ha, 0, 1, (int)p2, 0, &args, (void*)p);
        return 1;
    }
    else
    {
        return this->method_62fdd6(nCmd, nID, nCode);
    }
}
