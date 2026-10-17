// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
};

struct ContentProvider {
    int value;
    unsigned char flag;
    int count;
    void f();
};

struct Verb {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool v3();
};

struct String {
    void* buf[4];
    String(const char*);
    ~String();
};

extern "C" void* __cdecl sub_6a0926();
extern "C" void* __cdecl sub_4306c0(void*);
extern "C" void __cdecl sub_411b40(void*);
extern "C" void __cdecl sub_5773c0(void*);
extern "C" Verb* __cdecl sub_583380(void*);
extern "C" void* __cdecl mfc_call_1137(void*, const char*);

struct DxUserInput {
    bool check();
};

bool DxUserInput::check()
{
    void* a = sub_6a0926();
    void* b = *(void**)((char*)a + 4);
    void* c = *(void**)((char*)b + 0x20);
    unsigned char flag = *(unsigned char*)((char*)c + 0x104);
    if (!flag)
        return true;

    void* r1 = sub_4306c0(0);
    bool has = *(void**)r1 != 0;

    Shared* s = *(Shared**)((char*)r1 + 4);
    if (s) {
        Control* ctrl = s->ctrl;
        if (_InterlockedExchangeAdd(&ctrl->strong, -1) == 1) {
            ctrl->dispose();
            if (_InterlockedExchangeAdd(&ctrl->weak, -1) == 1)
                ctrl->destroy();
        }
    }

    if (!has)
        return true;

    void* r2 = sub_4306c0(0);
    Shared* s2 = *(Shared**)((char*)r2 + 4);
    if (s2) {
        Control* ctrl = s2->ctrl;
        _InterlockedExchangeAdd(&ctrl->strong, 1);
    }

    sub_411b40(0);

    Shared* s3 = *(Shared**)((char*)r2 + 4);
    if (s3) {
        Control* ctrl = s3->ctrl;
        if (_InterlockedExchangeAdd(&ctrl->strong, -1) == 1) {
            ctrl->dispose();
            if (_InterlockedExchangeAdd(&ctrl->weak, -1) == 1)
                ctrl->destroy();
        }
    }

    String str("ToggleToolbox");
    void* r3 = sub_4306c0(0);
    void* obj = *(void**)r3;
    Verb* v = sub_583380((char*)obj + 0x1c8);

    Shared* s4 = *(Shared**)((char*)r2 + 4);
    if (s4) {
        Control* ctrl = s4->ctrl;
        if (_InterlockedExchangeAdd(&ctrl->strong, -1) == 1) {
            ctrl->dispose();
            if (_InterlockedExchangeAdd(&ctrl->weak, -1) == 1)
                ctrl->destroy();
        }
    }

    if (!v) {
        sub_5773c0(0);
        return true;
    }

    bool result = v->v3();
    sub_5773c0(0);
    return result;
}
