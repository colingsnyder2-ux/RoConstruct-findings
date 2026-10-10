// from server: 63% by colin
struct CXTPRibbonGroupControlPopup
{
    char pad_0000[0xfc];
    void* field_fc;
    char pad_0100[0x68];
    void* field_168;
    void* field_16c;
    char pad_0170[0x8];
    void* field_178;

    void func_00719750(void* arg1);
};

extern "C" void* __fastcall func_00643980(void* p);
extern "C" void* __fastcall func_0062fef6(unsigned int size);
extern "C" void __fastcall func_006301e4(void* p);
extern "C" void __fastcall func_0067a2d0(void* p);
extern "C" void __fastcall func_0063a690(void* p, int arg);
extern "C" void* __fastcall func_00719300(void* p, void* arg);

void CXTPRibbonGroupControlPopup::func_00719750(void* arg1)
{
    field_168 = arg1;
    if (arg1 != 0)
    {
        if (field_16c != 0)
        {
            func_006301e4(field_16c);
            field_16c = 0;
        }
        void* edi = func_00643980(field_fc);
        if (field_178 == 0)
        {
            void* p = func_0062fef6(0x248);
            if (p != 0)
                func_0067a2d0(p);
            else
                p = 0;
            field_16c = p;
            *(void**)((char*)p + 0x100) = edi;
            void** vtbl = *(void***)this;
            int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[0x6c / 4];
            int r = fn(this);
            int b;
            if (r == 2 || r == 3)
                b = 1;
            else
                b = 0;
            void* p2 = field_16c;
            void** vtbl2 = *(void***)p2;
            void (__thiscall *fn2)(void*, void*, int) = (void (__thiscall *)(void*, void*, int))vtbl2[0x158 / 4];
            fn2(p2, this, b);
        }
        else
        {
            void* p = func_0062fef6(0x250);
            if (p != 0)
                p = func_00719300(p, field_178);
            else
                p = 0;
            field_16c = p;
            *(void**)((char*)p + 0x100) = edi;
            void* p2 = field_16c;
            void** vtbl = *(void***)p2;
            int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[0x188 / 4];
            int r = fn(p2);
            if (r == 0)
                *(int*)((char*)p2 + 0x134) = r;
            void** vtbl2 = *(void***)this;
            int (__thiscall *fn2)(void*) = (int (__thiscall *)(void*))vtbl2[0x6c / 4];
            int r2 = fn2(this);
            int b;
            if (r2 == 2 || r2 == 3)
                b = 1;
            else
                b = 0;
            void* p3 = field_16c;
            void** vtbl3 = *(void***)p3;
            void (__thiscall *fn3)(void*, void*, int) = (void (__thiscall *)(void*, void*, int))vtbl3[0x158 / 4];
            fn3(p3, this, b);
        }
    }
    else
    {
        void** vtbl = *(void***)field_16c;
        void (__thiscall *fn)(void*, int, int, int) = (void (__thiscall *)(void*, int, int, int))vtbl[0x140 / 4];
        fn(field_16c, 0, 1, 0);
    }
    func_0063a690(this, 1);
}
