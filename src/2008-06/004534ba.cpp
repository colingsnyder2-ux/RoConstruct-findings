// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ifstream {
    char pad[0x40];
};

extern "C" void __stdcall ifstream_ctor(Ifstream*, const char*, int, int);
extern "C" void __stdcall ifstream_dtor(Ifstream*);

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(int);
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    char pad[0x94 - 4];
    void* field94;
};

struct Doc : Obj {
    int load(const char* name);
};

struct SharedPtr {
    Control* ctrl;
    void* ptr;
    SharedPtr();
    ~SharedPtr();
};

struct Holder {
    char pad[0x34];
    Holder();
    ~Holder();
};

extern "C" void __stdcall sub_46aa70(void*, SharedPtr*);
extern "C" void __stdcall sub_46a940(void*, SharedPtr*);
extern "C" void __stdcall sub_451b60(Obj*);
extern "C" void __stdcall sub_58c8b0(void*, int);
extern "C" void __stdcall sub_5773c0(Holder*);
extern "C" void* __cdecl sub_453000(void*);

int Doc::load(const char* name)
{
    SharedPtr sp1;
    SharedPtr sp2;
    Holder h;
    Ifstream fs;
    void* p;

    v25(0);
    sub_451b60(this);
    v25(1);

    ifstream_ctor(&fs, name, 0x21, 0x40);
    sub_46aa70(field94, &sp1);
    v25(0);
    sub_46a940(field94, &sp2);

    if (sp2.ctrl) {
        if (_InterlockedExchangeAdd(&sp2.ctrl->strong, -1) == 1) {
            sp2.ctrl->dispose();
            if (_InterlockedExchangeAdd(&sp2.ctrl->weak, -1) == 1) {
                sp2.ctrl->destroy();
            }
        }
    }

    sub_46a940(field94, &sp2);
    p = sub_453000(sp2.ctrl);

    if (sp1.ctrl) {
        if (_InterlockedExchangeAdd(&sp1.ctrl->strong, -1) == 1) {
            sp1.ctrl->dispose();
            if (_InterlockedExchangeAdd(&sp1.ctrl->weak, -1) == 1) {
                sp1.ctrl->destroy();
            }
        }
    }

    sub_58c8b0(p, 1);
    sub_5773c0(&h);
    ifstream_dtor(&fs);
    return 1;
}
