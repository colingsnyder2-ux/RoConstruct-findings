// from server: 17% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct String {
    char buf[16];
    unsigned int size;
    unsigned int cap;
};

extern "C" {
    void __stdcall sub_6021E0(void* out, int a, int b, int c);
    void __stdcall sub_602280(void* out, const char* s, void* src);
    void __stdcall sub_6034D0(void* self, void* arg);
    void* __stdcall sub_658880();
    void __stdcall sub_600F10(void* p);
    void __stdcall string_ctor_copy(void* self, const void* other);
    void __stdcall string_ctor_cstr(void* self, const char* s);
    void __stdcall string_dtor(void* self);
}

extern float g_81c434;
extern float g_842428;
extern char g_842418;
extern char g_822ba4;
extern char g_80b716;

struct UnifiedImageWidget {
    void* vptr;
    void method(int a, int b);
};

void UnifiedImageWidget::method(int a, int b) {
    void* local1c = 0;
    String s1;
    String s2;
    String s3;
    void* local18 = 0;
    void* local20 = 0;
    void* local24 = 0;
    void* local40 = 0;
    void* local44 = 0;
    void* local6c = 0;
    void* local70 = 0;

    float f1 = g_81c434;
    float f2 = g_842428;

    sub_6021E0(&s1, 2, (int)&f1, 1);

    string_ctor_cstr(&s2, &g_842418);

    void* p1 = local1c;
    void* vt = *(void**)p1;
    void (*fn)(void*, void*) = *(void(**)(void*, void*))((char*)vt + 4);
    fn(p1, &local24);

    string_dtor(&local24);

    sub_602280(&s3, &g_822ba4, &local1c);

    void* tmp = local20;
    local18 = tmp;
    local20 = local18;

    if (local20) {
        _InterlockedExchangeAdd((volatile long*)((char*)local20 + 4), 1);
    }

    sub_600F10(local24);

    void* edi = *(void**)sub_658880();

    string_ctor_cstr(&local44, &g_80b716);

    void* tmp2 = local18;
    void* tmp3 = local20;
    if (tmp3) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp3 + 4), 1);
    }

    string_ctor_copy(&local40, &local44);

    sub_6034D0(this, edi);

    void* dst = local6c;
    *(void**)dst = local1c;
    *(void**)((char*)dst + 4) = local20;
    if (local20) {
        _InterlockedExchangeAdd((volatile long*)((char*)local20 + 4), 1);
    }

    string_dtor(&local40);

    if (local18) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local18 + 4), -1) == 1) {
            void* vt2 = *(void**)local18;
            void (*fn2)(void*) = *(void(**)(void*))((char*)vt2 + 4);
            fn2(local18);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local18 + 8), -1) == 1) {
                void* vt3 = *(void**)local18;
                void (*fn3)(void*) = *(void(**)(void*))((char*)vt3 + 8);
                fn3(local18);
            }
        }
    }

    if (local20) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local20 + 4), -1) == 1) {
            void* vt4 = *(void**)local20;
            void (*fn4)(void*) = *(void(**)(void*))((char*)vt4 + 4);
            fn4(local20);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local20 + 8), -1) == 1) {
                void* vt5 = *(void**)local20;
                void (*fn5)(void*) = *(void(**)(void*))((char*)vt5 + 8);
                fn5(local20);
            }
        }
    }
}
