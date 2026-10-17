// from server: 18% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    void* vptr;
    int field4;
    int field8;
    void* fieldC;
};

struct ServiceProvider {
    Instance* findService(const char* name);
};

struct InsertService {
    char pad[0xC];
    ServiceProvider* provider;
    void construct();
};

extern "C" void __cdecl sub_41FE00(void*);
extern "C" void* __cdecl sub_6A0926();
extern "C" void* __cdecl sub_6A0E7E(void*, void*, void*, void*, void*);
extern "C" int __cdecl sub_6A084E(void*);
extern "C" void* __cdecl sub_6A0E78(void*, void*, void*, void*);
extern "C" void __cdecl sub_409D50(void*, void*);
extern "C" void __cdecl sub_6A158C(void*, void*);
extern "C" void __cdecl sub_41FF40(void*);
extern "C" void __cdecl sub_600660(void*);
extern "C" long __cdecl sub_5726F0(void*, void*);

extern "C" void* __stdcall imp_8032CC();
extern "C" void __stdcall imp_803EB8(void*, void*);
extern "C" void __stdcall imp_803F14(void*);
extern "C" void* __stdcall imp_803EE0(void*);
extern "C" void __stdcall imp_803F04(void*);
extern "C" void __stdcall imp_8032C4(void*, int, void*);
extern "C" void __stdcall imp_802458(void*, void*);

extern char byte_80F250;
extern char byte_80F260;
extern char byte_8D1BC8;

void InsertService::construct()
{
    char buf1[0x58];
    char buf2[0x90];
    char buf3[0x58];
    void* local10 = 0;
    void* local14 = 0;

    sub_41FE00(buf3);

    void* p = sub_6A0926();
    void* q = *(void**)((char*)p + 4);
    sub_6A0E7E(q, &local10, &byte_80F250, &byte_80F260, 0);
    void* s = imp_8032CC();
    imp_803EB8(buf2, s);
    imp_803F14(&local10);

    int res = sub_6A084E(buf1);
    if (res == 1)
    {
        void* p2 = sub_6A0926();
        void* q2 = *(void**)((char*)p2 + 4);
        void* s2 = imp_803EE0(buf2);
        sub_6A0E78(q2, &byte_80F250, &byte_80F260, s2);

        void* a = *(void**)(buf2 + 4);
        void* b = *(void**)(buf2 + 0);
        local10 = b;
        local14 = a;
        if (a != 0)
        {
            _InterlockedExchangeAdd((volatile long*)((char*)a + 4), 1);
        }

        if (b == 0)
        {
            imp_803F04(&local10);
            void* s3 = imp_803EE0(buf2);
            imp_8032C4(&local10, 0x85, s3);
            void* s4 = imp_803EE0(&local10);
            imp_802458(buf3, s4);
            sub_409D50(buf1, buf3);
            sub_6A158C(&byte_8D1BC8, buf1);
        }

        void* vt = *(void**)((char*)b + 0x10);
        void* fn = *(void**)((char*)vt + 4);
        void* result = ((void* (__thiscall*)(void*))fn)((char*)b + 0x10);

        long svc = sub_5726F0(provider, result);
        if (svc == 0)
        {
            imp_803F04(&local10);
            void* s5 = imp_803EE0(buf2);
            imp_8032C4(&local10, 0x89, s5);
            void* s6 = imp_803EE0(&local10);
            imp_802458(buf3, s6);
            sub_409D50(buf1, buf3);
            sub_6A158C(&byte_8D1BC8, buf1);
        }

        sub_600660(&local10);
    }

    sub_41FF40(buf1);
}
