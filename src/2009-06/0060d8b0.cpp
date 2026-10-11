// from server: 42% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long ref1;
    volatile long ref2;
};

struct Inner {
    int a;
    RefCounted* p;
};

struct Outer {
    char pad0[0x98];
    Inner* begin;
    Inner* end;
};

struct Verb {
    int check();
    int run(Outer* outer);
};

extern "C" void* __stdcall make_value_0060ae10();
extern "C" void* __stdcall func_0060ae10();
extern "C" void __stdcall func_0060c960(void*);
extern "C" void __stdcall func_0060d620();
extern "C" void __stdcall func_0060b480();
extern "C" void __stdcall func_00401710();
extern "C" void __stdcall func_005d1e50();
extern "C" void __stdcall func_00402500();

int Verb::run(Outer* outer) {
    if (this->check() != 0) {
        return 0;
    }
    void* local;
    func_0060c960(&local);
    void* ebx = local;
    func_00401710();
    func_0060ae10();
    void* edi = make_value_0060ae10();
    int count = (int)((outer->end - outer->begin));
    if ((unsigned int)edi >= (unsigned int)count) {
        _invalid_parameter_noinfo();
    }
    Inner* slot = outer->begin + (int)edi;
    slot->a = (int)local;
    func_00402500();
    func_005d1e50();
    RefCounted* r = (RefCounted*)local;
    if (r) {
        if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
            r->unknown1();
            if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                r->unknown2();
            }
        }
    }
    return (int)ebx;
}
