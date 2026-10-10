// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Inner {
    void* vptr;
    int field4;
};

struct Holder {
    char pad[0x1dcc];
    Inner inner;
    int field1dd0;
};

struct StatsItem {
    void* vptr;
    int field4;
};

struct S {
    char pad[0x1dcc];
    void* field1dcc;
    int field1dd0;
    void method(int, int);
};

extern "C" void* __cdecl sub_4aad40(void*, void*);
extern "C" void* __cdecl sub_4a8da0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4b1c60(void*, void*);
extern "C" void* __cdecl sub_42c020(void*, void*, void*);
extern "C" void* __cdecl sub_4ad2c0(void*, void*);
extern "C" void __cdecl sub_7284f0(void*);
extern "C" void __cdecl sub_728460(void*);
extern "C" void __cdecl sub_49a230(void*);

extern unsigned char byte_8beab8;
extern void* dword_8b5188;
extern void* dword_77e6d8;
extern void* dword_4abd60;
extern void* dword_8c1608;

void S::method(int a, int b)
{
    void* saved;
    void* local1c;
    void* local28;
    void* local2c;
    void* local54;
    void* local64;
    void* local68;
    void* local4c;
    int old;

    local64 = 0;
    local68 = 0;

    void* p = sub_4aad40(&this->field1dcc, &local68);
    void* esi = p;

    if (*(void**)esi != 0 && *(void**)esi != &this->field1dcc) {
        _invalid_parameter_noinfo();
    }

    if (*(int*)((char*)esi + 4) == this->field1dd0) {
        unsigned char flag = byte_8beab8;
        void* edi = local64;
        void* esi2 = local68;

        void* tmp = sub_4a8da0(&local54, dword_4abd60, 0, edi, esi2);
        sub_4b1c60(&local2c, tmp);

        void* edi2;
        if (edi != 0) {
            edi2 = (char*)edi + 4;
        } else {
            edi2 = 0;
        }

        void* r = sub_42c020(dword_8c1608, edi2, &local28);
        void* r2 = sub_4ad2c0(&this->field1dcc, r);
        sub_7284f0(r2);
        sub_728460(&local1c);
        sub_49a230(&local28);

        void* ref = local4c;
        if (ref != 0) {
            void* obj = ref;
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
                void* vt = *(void**)obj;
                void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
                fn(obj);
                if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                    void* vt2 = *(void**)obj;
                    void (*fn2)(void*) = *(void (**)(void*))((char*)vt2 + 8);
                    fn2(obj);
                }
            }
        }
    }

    if (esi != 0) {
        void* obj = esi;
        if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 4), -1) == 1) {
            void* vt = *(void**)obj;
            void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
            fn(obj);
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                void* vt2 = *(void**)obj;
                void (*fn2)(void*) = *(void (**)(void*))((char*)vt2 + 8);
                fn2(obj);
            }
        }
    }
}
