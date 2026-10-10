// from server: 42% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Obj {
    char pad0[0x14];
    int field_14;
    char pad1[0x1ac - 0x18];
    void* field_1ac;
    char pad2[0x1c4 - 0x1b0];
    int field_1c4;
    char pad3[0x200 - 0x1c8];
    int field_200;
};

extern "C" void __cdecl func_49d200(void*);
extern "C" void* __cdecl func_56b620(void*);
extern "C" void __cdecl func_4b5950(void*, void*);
extern "C" void __cdecl func_5a2730(void*);

struct Mouse {
    void func_5ff1a0();
    void* func_5ff680(void*);
    void func_5ff750(int);
};

void Mouse::func_5ff750(int arg)
{
    Obj* self = (Obj*)this;
    void* local[2];
    if (self->field_1c4 < 5 && arg >= 5) {
        this->func_5ff1a0();
        void* r = this->func_5ff680(local);
        void* a = *(void**)r;
        void* b = *(void**)((char*)r + 4);
        local[0] = a;
        local[1] = b;
        if (b) {
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        }
        func_49d200(&self->field_14);
        void* p = local[0];
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
                void** vt = *(void***)p;
                void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[1];
                fn(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vt2[2];
                    fn2(p);
                }
            }
        }
    }
    if (arg == 6) {
        void* r = func_56b620(&self->field_14);
        if (r) {
            func_4b5950((char*)r + 0x10, local);
        }
    }
    if (self->field_1c4 == 6) {
        void* r = func_56b620(&self->field_14);
        if (r) {
            func_4b5950((char*)r + 0x10, local);
        }
    }
    if (self->field_1c4 >= 5 && arg < 5) {
        void* r = func_56b620(&self->field_14);
        if (r) {
            func_4b5950((char*)r + 0x10, local);
        }
        if (self->field_200 != 0) {
            void* q = self->field_1ac;
            self->field_200 = 0;
            func_5a2730(q);
            self->field_1ac = 0;
        }
    }
    self->field_1c4 = arg;
}
