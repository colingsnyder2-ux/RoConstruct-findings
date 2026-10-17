// from server: 46% by colin
// Minimal declarations for the target constructor reconstruction.

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void  __cdecl operator_delete(void*);

// Allocation helper (0x6a0920).
extern "C" void* __cdecl alloc_helper(unsigned int size);

// Interlocked decrement (0x49e890).
extern "C" long __cdecl _InterlockedDecrement(volatile long*);

// Global singleton accessor.
struct GlobalSettings {
    char pad0[0x134];
    int  field134;
    int  field138;
};
extern GlobalSettings* __cdecl getGlobalSettings();

// Reference-counted base with virtual destructor at slot 0.
struct RefCounted {
    virtual void destroy(int flags);
};

// std::string-like object.
struct StdString {
    void* rep;
    StdString(const char* s);
    ~StdString();
};

// Sub-object constructors.
extern "C" void __cdecl ctor_4b9ad0(void* self);
extern "C" void __cdecl ctor_49ed30(void* self);
extern "C" double __cdecl get_double_508410();
extern "C" void __cdecl ctor_589190(void* self, void* a, void* b);
extern "C" void __cdecl ctor_4b1570(void* self);
extern "C" void __cdecl ctor_4b1620(void* self);
extern "C" void __cdecl ctor_4b0b90(void* self, void* a, void* b);
extern "C" void __cdecl ctor_4aefe0(void* self);
extern "C" void __cdecl ctor_64b2a0(void* self, void* a, void* b);
extern "C" void __cdecl ctor_4b5e80(void* self, void* owner);
extern "C" void __cdecl ctor_4c99c0(void* self, void* owner);
extern "C" void __cdecl ctor_4ccb10(void* self, void* owner);
extern "C" void __cdecl ctor_5c43a0(void* self, const void* desc);
extern "C" void __cdecl ctor_5c43d0(void* self, const void* desc);
extern "C" void __cdecl ctor_55af90(void* self, void* arg);
extern "C" void __cdecl ctor_4a98b0(void* self, int flag);

// External vtable/descriptor addresses.
extern void* const vtbl_8254fc;
extern void* const vtbl_8254f0;
extern void* const vtbl_8254e8;
extern void* const vtbl_8254e0;
extern void* const vtbl_8254d0;
extern void* const vtbl_8254c0;
extern void* const vtbl_8254b0;
extern void* const vtbl_8254a0;
extern void* const vtbl_825490;
extern void* const vtbl_825480;
extern void* const vtbl_825450;
extern void* const desc_82444c;
extern void* const desc_825698;
extern void* const desc_825690;
extern void* const desc_825684;
extern void* const desc_825678;
extern void* const desc_82566c;
extern void* const desc_825664;
extern void* const desc_82565c;
extern void* const desc_82564c;
extern void* const desc_825640;
extern void* const desc_825628;
extern void* const desc_825614;
extern void* const vtbl_8247d0;

// Imported std::string ctor/dtor (MSVCP90).
extern "C" void __cdecl std_string_ctor(StdString* self, const char* s);
extern "C" void __cdecl std_string_dtor(StdString* self);

// Imported MFC helper.
extern "C" void* __cdecl mfc_helper_798(void* arg);

struct IdSerializer {
    void* vtbl0;
    char  pad04[0x0c];
    void* vtbl10;
    void* vtbl14;
    char  pad18[0x08];
    void* vtbl20;
    void* vtbl24;
    char  pad28[0x1c];
    void* vtbl44;
    char  pad48[0x1c];
    void* vtbl64;
    char  pad68[0x1c];
    void* vtbl84;
    char  pad88[0x1c];
    void* vtblA4;
    char  padA8[0x1c];
    void* vtblC4;
    char  padC8[0x2b74 - 0xc8];

    void* subVtbl;
    double dbl2b78;
    RefCounted* ref2b80;
    RefCounted* ref2b84;
    void* ptr2b88;
    void* ptr2b8c;

    char  obj2b90[0x2bb0 - 0x2b90];
    char  obj2bb0[0x2bf4 - 0x2bb0];
    char  obj2bf4[0x2c38 - 0x2bf4];
    char  obj2c38[0x2c58 - 0x2c38];

    void* selfPtr2c58;
    char  pad2c5c[0x0c];
    void* ptr2c68;
    void* ptr2c6c;
    void* ptr2c70;

    char  obj2c74[0x2c90 - 0x2c74];
    char  obj2c90[0x2cb0 - 0x2c90];
    char  obj2cb0[0x2cd0 - 0x2cb0];

    unsigned char byte2cd0;
    char  pad2cd1[0x03];
    void* ptr2cd4;
    void* ptr2cd8;

    void* selfPtr2cdc;
    char  pad2ce0[0x10];
    void* ptr2cf0;
    void* ptr2cf4;
    void* ptr2cf8;

    char  obj2cfc[0x2d1c - 0x2cfc];

    void* sub2d1c;
    void* sub2d20;
    void* sub2d24;
    void* sub2d28;
    void* sub2d2c;
    void* sub2d30;
    void* sub2d34;
    void* sub2d38;
    void* sub2d3c;
    void* sub2d40;
    void* sub2d44;
    void* sub2d48;

    unsigned char byte2d4c;
    unsigned char byte2d4d;
    char  pad2d4e[0x02];
    void* ptr2d50;
    void* ptr2d54;
    void* ptr2d58;
    void* ptr2d5c;
    void* ptr2d60;

    IdSerializer(void* a, void* b, void* c);
};

IdSerializer::IdSerializer(void* a, void* b, void* c)
{
    ctor_4b9ad0(this);

    ctor_49ed30(&subVtbl);

    vtbl0  = (void*)&vtbl_8254fc;
    vtbl10 = (void*)&vtbl_8254f0;
    vtbl14 = (void*)&vtbl_8254e8;
    vtbl20 = (void*)&vtbl_8254e0;
    vtbl24 = (void*)&vtbl_8254d0;
    vtbl44 = (void*)&vtbl_8254c0;
    vtbl64 = (void*)&vtbl_8254b0;
    vtbl84 = (void*)&vtbl_8254a0;
    vtblA4 = (void*)&vtbl_825490;
    vtblC4 = (void*)&vtbl_825480;
    subVtbl = (void*)&vtbl_825450;

    dbl2b78 = get_double_508410();

    ref2b80 = 0;
    ref2b84 = 0;
    ptr2b88 = 0;
    ptr2b8c = 0;

    ctor_589190(obj2b90, a, b);
    ctor_4b1570(obj2bb0);
    ctor_4b1620(obj2bf4);
    ctor_4b0b90(obj2c38, a, b);

    selfPtr2c58 = alloc_helper(4);
    if (selfPtr2c58)
        *(void**)selfPtr2c58 = &selfPtr2c58;
    else
        selfPtr2c58 = 0;
    ptr2c68 = 0;
    ptr2c6c = 0;
    ptr2c70 = 0;

    ctor_4aefe0(obj2c74);

    ctor_64b2a0(obj2c90, a, b);
    ctor_64b2a0(obj2cb0, a, b);

    byte2cd0 = 0;
    ptr2cd4 = 0;
    ptr2cd8 = 0;

    selfPtr2cdc = alloc_helper(4);
    if (selfPtr2cdc)
        *(void**)selfPtr2cdc = &selfPtr2cdc;
    else
        selfPtr2cdc = 0;
    ptr2cf0 = 0;
    ptr2cf4 = 0;
    ptr2cf8 = 0;

    ctor_589190(obj2cfc, a, b);

    sub2d1c = alloc_helper(0xc048);
    if (sub2d1c)
        ctor_5c43a0(sub2d1c, &desc_82444c);
    else
        sub2d1c = 0;

    sub2d20 = alloc_helper(0xc048);
    if (sub2d20)
        ctor_5c43a0(sub2d20, &desc_825698);
    else
        sub2d20 = 0;

    sub2d24 = alloc_helper(0xc048);
    if (sub2d24)
        ctor_5c43a0(sub2d24, &desc_825690);
    else
        sub2d24 = 0;

    sub2d28 = alloc_helper(0xc048);
    if (sub2d28)
        ctor_5c43a0(sub2d28, &desc_825684);
    else
        sub2d28 = 0;

    sub2d2c = alloc_helper(0xc048);
    if (sub2d2c)
        ctor_5c43a0(sub2d2c, &desc_825678);
    else
        sub2d2c = 0;

    sub2d30 = alloc_helper(0xc048);
    if (sub2d30)
        ctor_5c43a0(sub2d30, &desc_82566c);
    else
        sub2d30 = 0;

    sub2d34 = alloc_helper(0xc048);
    if (sub2d34)
        ctor_5c43a0(sub2d34, &desc_825664);
    else
        sub2d34 = 0;

    sub2d38 = alloc_helper(0xc048);
    if (sub2d38)
        ctor_5c43a0(sub2d38, &desc_82565c);
    else
        sub2d38 = 0;

    sub2d3c = alloc_helper(0xc048);
    if (sub2d3c)
        ctor_5c43d0(sub2d3c, &desc_82564c);
    else
        sub2d3c = 0;

    sub2d40 = alloc_helper(0xc048);
    if (sub2d40)
        ctor_5c43d0(sub2d40, &desc_825640);
    else
        sub2d40 = 0;

    sub2d44 = alloc_helper(0xc048);
    if (sub2d44)
        ctor_5c43d0(sub2d44, &desc_825628);
    else
        sub2d44 = 0;

    sub2d48 = alloc_helper(0xc048);
    if (sub2d48)
        ctor_5c43d0(sub2d48, &desc_825614);
    else
        sub2d48 = 0;

    byte2d4c = 0;
    byte2d4d = 0;
    ptr2d50 = c;
    ptr2d54 = a;
    ptr2d58 = b;
    ptr2d5c = 0;
    ptr2d60 = 0;

    GlobalSettings* gs = getGlobalSettings();
    int sel = gs->field134;
    if (sel == 0) {
        void* p = alloc_helper(0x74);
        if (p)
            ctor_4ccb10(p, this);
        else
            p = 0;
        RefCounted* old = ref2b80;
        ref2b80 = (RefCounted*)p;
        if (old)
            old->destroy(1);
    } else if (sel == 1) {
        void* p = alloc_helper(0x18);
        if (p)
            ctor_4c99c0(p, this);
        else
            p = 0;
        RefCounted* old = ref2b80;
        ref2b80 = (RefCounted*)p;
        if (old)
            old->destroy(1);
    }

    gs = getGlobalSettings();
    int sel2 = gs->field138;
    if (sel2 == 0) {
        void* p = alloc_helper(8);
        if (p) {
            *(void**)p = (void*)&vtbl_8247d0;
            *(void**)((char*)p + 4) = this;
        } else {
            p = 0;
        }
        RefCounted* old = ref2b84;
        ref2b84 = (RefCounted*)p;
        if (old)
            old->destroy(1);
    } else if (sel2 == 1) {
        void* p = alloc_helper(0x3c);
        if (p)
            ctor_4b5e80(p, this);
        else
            p = 0;
        RefCounted* old = ref2b84;
        ref2b84 = (RefCounted*)p;
        if (old)
            old->destroy(1);
    }

    if (c) {
        void** vt = *(void***)c;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vt[0xE8 / 4];
        fn(c, &subVtbl);
    }

    {
        void* holder = 0;
        ctor_4a98b0(&holder, 1);
        StdString str((const char*)mfc_helper_798(holder));
        ctor_55af90(this, &str);
        std_string_dtor(&str);
    }

    *(void**)((char*)sub2d20 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d24 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d28 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d2c + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d30 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d34 + 0xc040) = sub2d30;
    *(void**)((char*)sub2d38 + 0xc040) = sub2d30;
}
