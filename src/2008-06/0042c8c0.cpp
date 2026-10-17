// from server: 12% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_6A0F80();
extern "C" void __stdcall sub_6A158C(void*, void*);
extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_509B10(char*, const char*, ...);
extern "C" void __stdcall sub_409D50(void*, void*);
extern "C" void __stdcall sub_415D70(void*, void*);
extern "C" void __stdcall sub_8028F4(void*);
extern "C" void __stdcall sub_80291C(void*);
extern "C" void* __stdcall sub_42A8F0(void*);
extern "C" char __stdcall sub_42A930(void*, void*);
extern "C" void* __stdcall sub_42AAF0(void*);
extern "C" void* __stdcall sub_42C0D0(void*, void*);
extern "C" void __stdcall sub_4AF080(void*, void*);
extern "C" void __stdcall sub_600660(void*);
extern "C" void __stdcall sub_5773C0(void*);
extern "C" void __stdcall sub_42C760(void*, void*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Binder {
    char pad[0x100];
    char field100[0x10];
    char field110[0x14];
    void* field124;
    void invoke(void*, void*, void*, void*);
};

void Binder::invoke(void* a, void* b, void* c, void* d)
{
    void* v = sub_6A0F80();
    void* p = 0;
    if (v) {
        void** vt = *(void***)v;
        ((void (__stdcall*)(void*, const char*, void**))vt[0])(v, (const char*)0x81056c, &p);
    }
    if (!p) {
        String s((const char*)0x8105e0);
        void* tmp = 0;
        sub_409D50(&tmp, &s);
        sub_6A158C((void*)0x8d1bc8, &s);
    }
    void* q = 0;
    void** vt2 = *(void***)p;
    ((void (__stdcall*)(void*, void**))vt2[8])(p, &q);
    void* r = 0;
    sub_8028F4(&r);
    void* s1 = 0;
    sub_415D70(&s1, a);
    void** vt3 = *(void***)q;
    ((void (__stdcall*)(void*, void*, void*, void*, void*, void*, void*))vt3[11])(q, &r, b, c, d, s1, 0);
    sub_80291C(&s1);
    sub_80291C(&r);
    if (!q) {
        String s2((const char*)0x81067c);
        sub_409D50(&s2, &s2);
        sub_6A158C((void*)0x8d1bc8, &s2);
    }
    void* t = 0;
    void** vt4 = *(void***)q;
    ((void (__stdcall*)(void*, const char*, void**))vt4[0])(q, (const char*)0x81057c, &t);
    if (!t) {
        String s3((const char*)0x810660);
        sub_409D50(&s3, &s3);
        sub_6A158C((void*)0x8d1bc8, &s3);
    }
    void* u = field124;
    void* w = field110;
    void* x = *(void**)u;
    while (x != u) {
        void* z = *(void**)((char*)x + 8);
        void* aa = *(void**)((char*)z + 0x30);
        if (sub_42A930(aa, t)) {
            void* bb = sub_42A8F0(&w);
            void* cc = *(void**)bb;
            if (cc) {
                void* dd = sub_42C0D0(cc, t);
                void* ee = sub_42AAF0(&dd);
                sub_4AF080(&field100, ee);
                sub_600660(&dd);
                sub_5773C0(&w);
                break;
            }
        }
        x = *(void**)x;
    }
    void* ff = *(void**)&field100;
    void* gg = *(void**)&field100;
    if (gg) {
        _InterlockedExchangeAdd((volatile long*)((char*)gg + 4), 1);
    }
    sub_42C760(ff, &field100);
    if (t) {
        void** vt5 = *(void***)t;
        ((void (__stdcall*)(void*))vt5[2])(t);
    }
    if (q) {
        void** vt6 = *(void***)q;
        ((void (__stdcall*)(void*))vt6[2])(q);
    }
    if (p) {
        void** vt7 = *(void***)p;
        ((void (__stdcall*)(void*))vt7[2])(p);
    }
    if (v) {
        void** vt8 = *(void***)v;
        ((void (__stdcall*)(void*))vt8[2])(v);
    }
    sub_600660(&field100);
}
