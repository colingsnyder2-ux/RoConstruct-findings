// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char buf[0x1c];
};

struct ViewBase {
    char pad[0x1c8];
};

struct Game {
    char pad[0x204];
    char pad2[0x2ec - 0x204];
};

struct RobloxView {
    char pad0[0x54];
    Game* game;
    char pad1[0x78 - 0x58];
    char pad2[0xa0 - 0x78];
    char pad3[0xa4 - 0xa0];
    char pad4[0xb0 - 0xa4];
    char pad5[0x170 - 0xb0];
    ViewBase* view;
    char pad6[0x1d8 - 0x174];
    void* field1d8;
    void* field1dc;
    void* field1e0;
    void* field1e4;
    void* field1e8;
    void* field1ec;

    void init();
};

extern "C" void __cdecl func_45a2f0(RobloxView*);
extern "C" void __cdecl func_45f7b0(void*, void*);
extern "C" void __cdecl func_456e80(void*);
extern "C" void __cdecl func_6a0cc2(RobloxView*);
extern "C" void __cdecl func_46a940(void*, void*);
extern "C" void __cdecl func_4025b0(void*, void*);
extern "C" void __cdecl func_4218a0(void*, void*);
extern "C" void __cdecl func_583210(void*, void*);
extern "C" void* __cdecl func_6a0920(unsigned int);
extern "C" void* __cdecl func_458ec0(RobloxView*, ViewBase*);
extern "C" void* __cdecl func_5833e0(void*, void*);
extern "C" void* __cdecl func_458fd0(void*);
extern "C" void* __cdecl func_583380(void*);
extern "C" void* __cdecl func_554270();
extern "C" void* __cdecl func_5644a0(void*, void*);
extern "C" void* __cdecl func_554290(const char*);
extern "C" void __cdecl func_45ead0(void*);
extern "C" void* __cdecl func_452a00(void*);
extern "C" void __cdecl func_58c5e0(void*);
extern "C" void __cdecl func_5773c0(void*);

extern "C" void __cdecl std_string_ctor(String*, const char*);

void RobloxView::init()
{
    func_45a2f0(this);

    void* ebx = (char*)this + 0xb0;
    func_45f7b0(ebx, 0);

    void* edi = (char*)this + 0x170;
    func_456e80(edi);

    func_6a0cc2(this);

    Game* g = this->game;
    void* p94 = *(void**)((char*)g + 0x94);
    func_45f7b0(ebx, p94);

    g = this->game;
    void* p94b = *(void**)((char*)g + 0x94);
    void* tmp;
    func_46a940(p94b, &tmp);

    void* v = *(void**)tmp;
    void* src = (char*)tmp + 4;
    *(void**)edi = v;
    func_4025b0((char*)edi + 4, src);

    void* ref = *(void**)((char*)this + 0x1d8);
    if (ref) {
        Game* gg = this->game;
        void* p94c = *(void**)((char*)gg + 0x94);
        if (*(void**)((char*)ref + 0xfc) != p94c) {
            if (p94c) {
                void** vt = *(void***)p94c;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(p94c);
            }
            void* old = *(void**)((char*)ref + 0xfc);
            if (old) {
                void** vt2 = *(void***)old;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(old);
            }
            *(void**)((char*)ref + 0xfc) = p94c;
        }
    }

    ViewBase* vb = this->view;
    if (vb) {
        func_4218a0((char*)vb + 0x150, (char*)this + 0xa0);
    }
    vb = this->view;
    if (vb) {
        func_4218a0((char*)vb + 0x170, (char*)this + 0xa4);
    }

    vb = this->view;
    void* p204 = *(void**)((char*)vb + 0x204);
    void* arg;
    if (p204) {
        arg = (char*)p204 + 0x2ec;
    } else {
        arg = 0;
    }
    func_583210((char*)this + 0x78, arg);

    void* mem = func_6a0920(0x20);
    void* obj = 0;
    if (mem) {
        ViewBase* vv = this->view;
        obj = func_458ec0(this, vv);
    }
    void* old1e0 = this->field1e0;
    this->field1e0 = obj;
    if (old1e0) {
        void** vt = *(void***)old1e0;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(old1e0, 1);
    }

    mem = func_6a0920(0x10);
    void* obj2 = 0;
    if (mem) {
        ViewBase* vv = this->view;
        void* arg2;
        if (vv) {
            arg2 = (char*)vv + 0x1c8;
        } else {
            arg2 = 0;
        }
        String s;
        std_string_ctor(&s, (const char*)0x819154);
        func_5833e0(mem, arg2);
        *(void**)mem = (void*)0x819140;
        *(void**)((char*)mem + 0xc) = this;
        obj2 = mem;
    }
    void* old1dc = this->field1dc;
    this->field1dc = obj2;
    if (old1dc) {
        void** vt = *(void***)old1dc;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(old1dc, 1);
    }

    mem = func_6a0920(0xc);
    void* obj3 = 0;
    if (mem) {
        ViewBase* vv = this->view;
        void* arg3;
        if (vv) {
            arg3 = (char*)vv + 0x1c8;
        } else {
            arg3 = 0;
        }
        String s;
        std_string_ctor(&s, (const char*)0x819128);
        func_5833e0(mem, arg3);
        *(void**)mem = (void*)0x819114;
        obj3 = mem;
    }
    void* old1e4 = this->field1e4;
    this->field1e4 = obj3;
    if (old1e4) {
        void** vt = *(void***)old1e4;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(old1e4, 1);
    }

    mem = func_6a0920(0x18);
    void* obj4 = 0;
    if (mem) {
        ViewBase* vv = this->view;
        void* arg4;
        if (vv) {
            arg4 = (char*)vv + 0x1c8;
        } else {
            arg4 = 0;
        }
        obj4 = func_458fd0(arg4);
    }
    void* old1e8 = this->field1e8;
    this->field1e8 = obj4;
    if (old1e8) {
        void** vt = *(void***)old1e8;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(old1e8, 1);
    }

    mem = func_6a0920(0xc);
    void* obj5 = 0;
    if (mem) {
        ViewBase* vv = this->view;
        void* arg5;
        if (vv) {
            arg5 = (char*)vv + 0x1c8;
        } else {
            arg5 = 0;
        }
        String s;
        std_string_ctor(&s, (const char*)0x819100);
        func_5833e0(mem, arg5);
        *(void**)mem = (void*)0x8190ec;
        obj5 = mem;
    }
    void* old1ec = this->field1ec;
    this->field1ec = obj5;
    if (old1ec) {
        void** vt = *(void***)old1ec;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(old1ec, 1);
    }

    String s1;
    std_string_ctor(&s1, (const char*)0x817af8);
    ViewBase* vv = this->view;
    void* p204b = *(void**)((char*)vv + 0x204);
    void* r = func_583380((char*)p204b + 0x2ec);
    void* edi_val;
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    int key = 0x8027;
    void* slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s2;
    std_string_ctor(&s2, (const char*)0x817b20);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x8028;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s3;
    std_string_ctor(&s3, (const char*)0x817aa8);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x8029;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s4;
    std_string_ctor(&s4, (const char*)0x817ad0);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x802a;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s5;
    std_string_ctor(&s5, (const char*)0x817b48);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x802b;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s6;
    std_string_ctor(&s6, (const char*)0x817b70);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x802c;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s7;
    std_string_ctor(&s7, (const char*)0x817bc4);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x80a6;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s8;
    std_string_ctor(&s8, (const char*)0x817b98);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x802d;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    String s9;
    std_string_ctor(&s9, (const char*)0x817bec);
    vv = this->view;
    p204b = *(void**)((char*)vv + 0x204);
    r = func_583380((char*)p204b + 0x2ec);
    if (r) {
        edi_val = *(void**)((char*)r + 4);
    } else {
        edi_val = func_554270();
    }
    key = 0x80d7;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = edi_val;

    void* v1 = func_554290((const char*)0x817c14);
    key = 0x802f;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v1;

    void* v2 = func_554290((const char*)0x819500);
    key = 0x8030;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v2;

    void* v3 = func_554290((const char*)0x8194f4);
    key = 0x80a3;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v3;

    void* v4 = func_554290((const char*)0x8194e4);
    key = 0x8032;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v4;

    void* v5 = func_554290((const char*)0x8194d8);
    key = 0x80a2;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v5;

    void* v6 = func_554290((const char*)0x817e18);
    key = 0x8043;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v6;

    void* v7 = func_554290((const char*)0x817e08);
    key = 0x8044;
    slot = func_5644a0((char*)this + 0x58, &key);
    *(void**)slot = v7;

    func_45ead0((char*)this + 0xb0);

    ViewBase* vv2 = this->view;
    void* res = func_452a00(vv2);
    if (res) {
        func_58c5e0(res);
    }

    func_5773c0((char*)this + 0x170);
}
