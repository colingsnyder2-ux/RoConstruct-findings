// from server: 42% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_func_005a3380();
extern "C" int __cdecl func_00422ae0(void*);
extern "C" void __fastcall func_0045ad90(void*);

extern "C" void* __stdcall func_008021b0(void*);
extern "C" int __stdcall func_008021ac(void*);

struct S_func_004e6520 {
    void f(int, int);
};

void S_func_004e6520::f(int, int)
{
    void* p = *(void**)((char*)this + 0xbc);
    G1_func_005a3380();
    void* q = *(void**)((char*)this + 0xbc);
    void* r = *(void**)((char*)q + 0x104);
    if (r != 0 && func_00422ae0(r) == 0) {
        void* s = (char*)this + 4;
        func_008021b0(s);
        void* t = *(void**)((char*)this + 0xd0);
        void* u = *(void**)((char*)t + 4);
        void* v = *(void**)u;
        void* (*w)(void*, void*) = *(void*(**)(void*, void*))((char*)v + 8);
        void* x = 0;
        w(u, &x);
        if (x != 0) {
            if (func_008021ac((char*)x + 4) == 0) {
                func_0045ad90(x);
                if (x != 0) {
                    void* y = *(void**)x;
                    void (*z)(void*, int) = *(void(**)(void*, int))y;
                    z(x, 1);
                }
            }
        }
    }
    void* aa = *(void**)((char*)this + 0x1c);
    if (aa != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)aa + 4), -1) == 1) {
            void* ab = *(void**)aa;
            void (*ac)(void*) = *(void(**)(void*))((char*)ab + 4);
            ac(aa);
            if (_InterlockedExchangeAdd((volatile long*)((char*)aa + 8), -1) == 1) {
                void* ad = *(void**)aa;
                void (*ae)(void*) = *(void(**)(void*))((char*)ad + 8);
                ae(aa);
            }
        }
    }
}
