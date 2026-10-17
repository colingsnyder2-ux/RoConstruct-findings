// from server: 44% by colin
// Minimal declarations for the reconstruction of 0x004b9bd0.
// Only the one target function is defined; everything else is declared.

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void  __cdecl operator_delete(void*);

// Allocation helper used throughout the target (0x6a0920).
extern "C" void* __cdecl alloc_helper(unsigned int size);

// Interlocked decrement (0x49e890).
extern "C" long __cdecl _InterlockedDecrement(volatile long*);

// Global singleton accessor (0x49e890 family) returning an object whose
// fields at +0x134 / +0x138 select which sub-object to build.
struct GlobalSettings {
    char pad0[0x134];
    int  field134;
    int  field138;
};
extern GlobalSettings* __cdecl getGlobalSettings();

// A reference-counted base with a virtual destructor (vtable slot 0).
struct RefCounted {
    virtual void destroy(int flags);
    void release() {
        if (_InterlockedDecrement((volatile long*)((char*)this - 4)) == 0)
            destroy(1);
    }
};

// A simple string-like object constructed from a C string.
struct StdString {
    void* rep;
    StdString(const char* s);
    ~StdString();
};

// A small object holding a pointer, used as a temporary in the ctor.
struct TempHolder {
    void* ptr;
    TempHolder(void* p) : ptr(p) {}
};

// The target class.  Layout is reconstructed from the observed offsets.
struct IdSerializer {
    // ---- vtable-bearing sub-objects (offsets from assembly) ----
    void* vtbl0;                 // +0x00
    char  pad04[0x0c];
    void* vtbl10;                // +0x10
    void* vtbl14;                // +0x14
    char  pad18[0x08];
    void* vtbl20;                // +0x20
    void* vtbl24;                // +0x24
    char  pad28[0x1c];
    void* vtbl44;                // +0x44
    char  pad48[0x1c];
    void* vtbl64;                // +0x64
    char  pad68[0x1c];
    void* vtbl84;                // +0x84
    char  pad88[0x1c];
    void* vtblA4;                // +0xa4
    char  padA8[0x1c];
    void* vtblC4;                // +0xc4

    // ---- large embedded region ----
    char  padC8[0x2b74 - 0xc8];

    // +0x2b74 : embedded object with its own vtable
    void* subVtbl;               // +0x2b74
    double dbl2b78;              // +0x2b78
    RefCounted* ref2b80;         // +0x2b80
    RefCounted* ref2b84;         // +0x2b84
    void* ptr2b88;               // +0x2b88
    void* ptr2b8c;               // +0x2b8c

    // +0x2b90 : embedded object (constructed by 0x589190)
    char  obj2b90[0x2bb0 - 0x2b90];

    // +0x2bb0 : embedded object (constructed by 0x4b1570)
    char  obj2bb0[0x2bf4 - 0x2bb0];

    // +0x2bf4 : embedded object (constructed by 0x4b1620)
    char  obj2bf4[0x2c38 - 0x2bf4];

    // +0x2c38 : embedded object (constructed by 0x4b0b90)
    char  obj2c38[0x2c58 - 0x2c38];

    // +0x2c58 : embedded object with a self-pointer at +0
    void* selfPtr2c58;           // +0x2c58
    char  pad2c5c[0x0c];
    void* ptr2c68;               // +0x2c68
    void* ptr2c6c;               // +0x2c6c
    void* ptr2c70;               // +0x2c70

    // +0x2c74 : embedded object (constructed by 0x4aefe0)
    char  obj2c74[0x2c90 - 0x2c74];

    // +0x2c90 : embedded object (constructed by 0x64b2a0)
    char  obj2c90[0x2cb0 - 0x2c90];

    // +0x2cb0 : embedded object (constructed by 0x64b2a0)
    char  obj2cb0[0x2cd0 - 0x2cb0];

    // +0x2cd0
    unsigned char byte2cd0;      // +0x2cd0
    char  pad2cd1[0x03];
    void* ptr2cd4;               // +0x2cd4
    void* ptr2cd8;               // +0x2cd8

    // +0x2cdc : embedded object with a self-pointer at +0
    void* selfPtr2cdc;           // +0x2cdc
    char  pad2ce0[0x10];
    void* ptr2cf0;               // +0x2cf0
    void* ptr2cf4;               // +0x2cf4
    void* ptr2cf8;               // +0x2cf8

    // +0x2cfc : embedded object (constructed by 0x589190)
    char  obj2cfc[0x2d1c - 0x2cfc];

    // +0x2d1c : a set of allocated sub-objects
    void* sub2d1c;               // +0x2d1c
    void* sub2d20;               // +0x2d20
    void* sub2d24;               // +0x2d24
    void* sub2d28;               // +0x2d28
    void* sub2d2c;               // +0x2d2c
    void* sub2d30;               // +0x2d30
    void* sub2d34;               // +0x2d34
    void* sub2d38;               // +0x2d38
    void* sub2d3c;               // +0x2d3c
    void* sub2d40;               // +0x2d40
    void* sub2d44;               // +0x2d44
    void* sub2d48;               // +0x2d48

    // +0x2d4c
    unsigned char byte2d4c;      // +0x2d4c
    unsigned char byte2d4d;      // +0x2d4d
    char  pad2d4e[0x02];
    void* ptr2d50;               // +0x2d50
    void* ptr2d54;               // +0x2d54
    void* ptr2d58;               // +0x2d58
    void* ptr2d5c;               // +0x2d5c
    void* ptr2d60;               // +0x2d60

    IdSerializer(void* a, void* b, void* c);
};

// Sub-object constructors (declared only).
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

// External vtable/descriptor addresses (opaque).
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

// Imported MFC helper (mfc90.dll!#798) used to build a temporary.
extern "C" void* __cdecl mfc_helper_798(void* arg);

// The target constructor.
IdSerializer::IdSerializer(void* a, void* b, void* c)
{
    // Base / early sub-object construction.
    ctor_4b9ad0(this);

    // +0x2b74 embedded object.
    ctor_49ed30(&subVtbl);

    // Install vtables.
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

    // Double field.
    dbl2b78 = get_double_508410();

    // Zero the reference/pointer fields.
    ref2b80 = 0;
    ref2b84 = 0;
    ptr2b88 = 0;
    ptr2b8c = 0;

    // Embedded objects.
    ctor_589190(obj2b90, a, b);
    ctor_4b1570(obj2bb0);
    ctor_4b1620(obj2bf4);
    ctor_4b0b90(obj2c38, a, b);

    // +0x2c58 self-pointer object.
    selfPtr2c58 = alloc_helper(4);
    if (selfPtr2c58)
        *(void**)selfPtr2c58 = &selfPtr2c58;
    else
        selfPtr2c58 = 0;
    ptr2c68 = 0;
    ptr2c6c = 0;
    ptr2c70 = 0;

    // +0x2c74 embedded object.
    ctor_4aefe0(obj2c74);

    // +0x2c90 / +0x2cb0 embedded objects.
    ctor_64b2a0(obj2c90, a, b);
    ctor_64b2a0(obj2cb0, a, b);

    // +0x2cd0 fields.
    byte2cd0 = 0;
    ptr2cd4 = 0;
    ptr2cd8 = 0;

    // +0x2cdc self-pointer object.
    selfPtr2cdc = alloc_helper(4);
    if (selfPtr2cdc)
        *(void**)selfPtr2cdc = &selfPtr2cdc;
    else
        selfPtr2cdc = 0;
    ptr2cf0 = 0;
    ptr2cf4 = 0;
    ptr2cf8 = 0;

    // +0x2cfc embedded object.
    ctor_589190(obj2cfc, a, b);

    // Allocate the sub-objects at +0x2d1c..+0x2d48.
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

    // +0x2d4c fields.
    byte2d4c = 0;
    byte2d4d = 0;
    ptr2d50 = c;
    ptr2d54 = a;
    ptr2d58 = b;
    ptr2d5c = 0;
    ptr2d60 = 0;

    // Build the first reference-counted sub-object based on global settings.
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
            old->release();
    } else if (sel == 1) {
        void* p = alloc_helper(0x18);
        if (p)
            ctor_4c99c0(p, this);
        else
            p = 0;
        RefCounted* old = ref2b80;
        ref2b80 = (RefCounted*)p;
        if (old)
            old->release();
    }

    // Build the second reference-counted sub-object.
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
            old->release();
    } else if (sel2 == 1) {
        void* p = alloc_helper(0x3c);
        if (p)
            ctor_4b5e80(p, this);
        else
            p = 0;
        RefCounted* old = ref2b84;
        ref2b84 = (RefCounted*)p;
        if (old)
            old->release();
    }

    // If a third argument was supplied, invoke its virtual slot 0xE8.
    if (c) {
        void** vt = *(void***)c;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vt[0xE8 / 4];
        fn(c, &subVtbl);
    }

    // Build a temporary string and pass it to a virtual method.
    {
        TempHolder holder(0);
        ctor_4a98b0(&holder, 1);
        StdString str((const char*)mfc_helper_798(holder.ptr));
        ctor_55af90(this, &str);
        std_string_dtor(&str);
    }

    // Wire up the sub-objects at +0x2d1c..+0x2d38.
    *(void**)((char*)sub2d20 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d24 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d28 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d2c + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d30 + 0xc040) = sub2d1c;
    *(void**)((char*)sub2d34 + 0xc040) = sub2d30;
    *(void**)((char*)sub2d38 + 0xc040) = sub2d30;
}
