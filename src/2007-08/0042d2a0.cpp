// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall VariantInit(void*);
extern "C" void __stdcall VariantClear(void*);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct TString {
    void* rep;
    TString();
    TString(const char*);
    ~TString();
};

struct Variant {
    unsigned short vt;
    unsigned short wReserved1;
    unsigned short wReserved2;
    unsigned short wReserved3;
    int data[4];
};

struct CLuaHtmlView {
    char pad0[0xfc];
    void* field_fc;
    char pad100[0x0c];
    void* field_10c;
    void* field_110;
    void method_42d2a0(void* a, void* b, void* c, void* d);
};

extern "C" void* __cdecl func_6304ea();
extern "C" void __cdecl func_630b9e(void*, void*);
extern "C" void __cdecl func_5017c0(void*, const char*, void*);
extern "C" void* __cdecl func_62fef6(unsigned int);
extern "C" void __cdecl func_412dc0(void*, void*);
extern "C" void __cdecl func_411880(void*, void*);
extern "C" void __cdecl func_4a6c60(void*, void*);
extern "C" void __cdecl func_40d550(void*);
extern "C" void __cdecl func_492360(void*);
extern "C" void __cdecl func_5595a0(void*);
extern "C" void __cdecl func_42aac0(void*);
extern "C" int __cdecl func_42abb0(void*, void*);
extern "C" void __cdecl func_42ad80(void*, void*);
extern "C" void __cdecl func_42ba90(void*, void*);
extern "C" void __cdecl func_42c4d0(void*, void*);
extern "C" void __cdecl func_42d140(void*, void*, void*);

extern void* __stdcall func_77e698(void*);
extern void* __stdcall func_77ea00(void*);
extern void* __stdcall func_77e9d8(void*);
extern void* __stdcall func_77e6d8();

void CLuaHtmlView::method_42d2a0(void* a, void* b, void* c, void* d)
{
    void* v1 = 0;
    void* v2 = 0;
    void* v3 = 0;
    void* v4 = 0;
    void* v5 = 0;
    void* v6 = 0;
    void* v7 = 0;
    Variant var1;
    Variant var2;
    Variant var3;
    TString str1;
    TString str2;
    TString str3;
    void* obj;
    void* result;

    obj = func_6304ea();
    if (obj != 0) {
        void** vtbl = *(void***)obj;
        void* out = 0;
        ((void (__stdcall*)(void*, const char*, void**))vtbl[0])(obj, (const char*)0x787020, &out);
        v1 = out;
    }
    if (v1 == 0) {
        func_77e698((void*)0x78a2e4);
        func_412dc0(&str1, &v2);
        func_630b9e((void*)0x8410c0, &str1);
    }

    v3 = 0;
    {
        void** vtbl = *(void***)v1;
        void* out = 0;
        ((void (__stdcall*)(void*, void**))vtbl[8])(v1, &out);
        v3 = out;
    }

    v4 = 0;
    func_77ea00(&v4);

    {
        void* p1 = v4;
        void* p2 = v5;
        void* p3 = v6;
        void* p4 = v7;
        func_411880(&var1, d);
        var1.vt = 0;
        {
            void** vtbl = *(void***)v3;
            void* out = 0;
            ((void (__stdcall*)(void*, void*, void*, void*, void*, void*, void*, void*, void**))vtbl[11])(v3, p1, p2, p3, p4, 0, 0, 0, &out);
        }
    }

    func_77e9d8(&var2);
    func_77e9d8(&var3);

    if (v4 == 0) {
        func_5017c0(&str2, (const char*)0x78a5b0, d);
        func_412dc0(&str3, &str2);
        func_630b9e((void*)0x8410c0, &str3);
    }

    v5 = 0;
    {
        void** vtbl = *(void***)v4;
        ((void (__stdcall*)(void*, const char*, void**))vtbl[0])(v4, (const char*)0x78a234, &v5);
    }
    if (v5 == 0) {
        func_5017c0(&str2, (const char*)0x78a594, d);
        func_412dc0(&str3, &str2);
        func_630b9e((void*)0x8410c0, &str3);
    }

    {
        void* list = field_110;
        void* head = *(void**)list;
        void* node = head;
        void* sentinel = list;
        void* endnode = *(void**)((char*)list + 4);
        while (node != sentinel) {
            if (node == endnode) {
                func_77e6d8();
            }
            {
                void* item = *(void**)((char*)node + 8);
                void* itemvt = *(void**)item;
                void* itemobj = *(void**)((char*)itemvt + 0x20);
                if (func_42abb0(itemobj, v5)) {
                    func_42aac0(&node);
                    result = *(void**)node;
                    if (result != 0) {
                        goto do_work;
                    }
                    break;
                }
            }
            if (node == endnode) {
                func_77e6d8();
            }
            node = *(void**)node;
        }
    }

    {
        void* tmpbuf[2];
        func_4a6c60(&tmpbuf, (char*)this + 0xfc);
        func_40d550(&var1);
        {
            void* alloc = func_62fef6(0x24);
            if (alloc != 0) {
                func_42c4d0(alloc, v5);
            } else {
                alloc = 0;
            }
            func_42ad80(&v6, alloc);
            func_42ba90(&field_10c, v6);
            func_492360(&v6);
            func_5595a0(&var1);
        }
    }

do_work:
    {
        void* p1 = v6;
        void* p2 = v7;
        if (p2 != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)p2 + 4), 1);
        }
        func_42d140(v5, p1, p2);
    }

    if (v5 != 0) {
        void** vtbl = *(void***)v5;
        ((void (__stdcall*)(void*))vtbl[2])(v5);
    }
    if (v4 != 0) {
        void** vtbl = *(void***)v4;
        ((void (__stdcall*)(void*))vtbl[2])(v4);
    }
    if (v3 != 0) {
        void** vtbl = *(void***)v3;
        ((void (__stdcall*)(void*))vtbl[2])(v3);
    }
    if (v1 != 0) {
        void** vtbl = *(void***)v1;
        ((void (__stdcall*)(void*))vtbl[2])(v1);
    }
    func_492360(&v7);
}
