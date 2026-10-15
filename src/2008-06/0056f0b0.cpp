// from server: 16% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
// Minimal reconstruction of 0056f0b0.
// The function is a member of a class whose first member is a pointer to a
// type-info-like object (vtable-ish).  It repeatedly queries a global
// type_info registry, and for each successful match it extracts a value from
// the object at this+4, converts it, and stores the result back into the
// object's first field.  On failure it throws a std::string-based exception.

struct TypeInfoLike;

struct TypeInfoRegistry {
    bool __thiscall matches(const TypeInfoLike* ti) const;
};

struct ValueHolder {
    void* vtable;
    char pad[4];
};

struct StringLike {
    void* vtable;
    char pad[4];
};

struct AnyLike {
    void* vtable;
    char pad[4];
};

struct Converter {
    void* vtable;
    char pad[4];
};

struct Target {
    void* field0;
    char pad[4];
};

// Imported / external helpers (declared with observed calling conventions).
extern "C" {
    void* __cdecl sub_415f60(void*);
    void* __cdecl sub_415ed0(void*);
    float __cdecl sub_415ff0(void*);
    double __cdecl sub_416080(void*);
    void* __cdecl sub_5bde30(void*, void*, void*);
    void* __cdecl sub_5bdef0(void*, void*, void*);
    void* __cdecl sub_5be040(void*, void*, void*);
    void* __cdecl sub_5bdf70(void*, void*, void*);
    void* __cdecl sub_5bea10(void*, void*, void*, void*);
    void* __cdecl sub_56dfe0(void*, void*);
    void* __cdecl sub_417230(void*, void*);
    void* __cdecl sub_56cc30(void);
    void* __cdecl sub_56cbc0(void);
    void* __cdecl sub_56cca0(void);
    void* __cdecl sub_56cd10(void);
    void* __cdecl sub_56ce60(void);
    void* __cdecl sub_409d50(void*, void*);
    void* __cdecl sub_6a158c(void*, void*);
    void* __cdecl sub_802458(void*);
    void* __cdecl sub_802468(void*);
    void* __cdecl sub_802878(void*, void*);
}

// std::string ctor/dtor from MSVCP90.
extern "C" {
    void* __cdecl std_string_ctor(void*, const char*);
    void* __cdecl std_string_dtor(void*);
}

// type_info comparison.
extern "C" {
    bool __cdecl type_info_equal(const void*, const void*);
}

struct G3D_Vector3_TypedPropertyDescriptor {
    void* field0;
    char pad[4];

    void __thiscall convert();
};

void G3D_Vector3_TypedPropertyDescriptor::convert()
{
    void* ti;
    void* tmp;
    void* obj;
    void* conv;
    void* result;
    void* str;
    char buf[0x74];
    int state;
    bool ok;

    state = -1;

    // First type: std::string
    ti = *(void**)this;
    ti = *(void**)((char*)ti + 8);
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x929644, ti);
    if (ok) {
        obj = (char*)this + 4;
        sub_415f60(obj);
        sub_5bde30(buf + 0x17, buf + 0x2c, buf + 0x17);
        sub_417230(buf + 0x18, buf + 0x18);
        if (result != obj) {
            void* a = *(void**)obj;
            void* b = *(void**)result;
            *(void**)result = a;
            *(void**)obj = b;
        }
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)vt;
            ((void (__thiscall*)(void*, int))fn)(conv, 1);
        }
        sub_802468(buf + 0x24);
        result = sub_56cc30();
        *(void**)this = result;
    }

    // Second type: G3D::Vector3
    ti = *(void**)this;
    ti = *(void**)((char*)ti + 8);
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x92bed0, ti);
    if (ok) {
        obj = (char*)this + 4;
        sub_415ed0(obj);
        sub_5bdef0(buf + 0x18, buf + 0x2c, buf + 0x18);
        sub_417230(buf + 0x24, buf + 0x24);
        if (result != obj) {
            void* a = *(void**)obj;
            void* b = *(void**)result;
            *(void**)result = a;
            *(void**)obj = b;
        }
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)vt;
            ((void (__thiscall*)(void*, int))fn)(conv, 1);
        }
        sub_802468(buf + 0x24);
        result = sub_56cbc0();
        *(void**)this = result;
    }

    // Third type: float
    ti = *(void**)this;
    ti = *(void**)((char*)ti + 8);
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x92bedc, ti);
    if (ok) {
        obj = (char*)this + 4;
        float f = sub_415ff0(obj);
        *(float*)(buf + 0x24) = f;
        sub_5be040(buf + 0x24, buf + 0x2c, buf + 0x24);
        sub_417230(buf + 0x18, buf + 0x18);
        if (result != obj) {
            void* a = *(void**)obj;
            void* b = *(void**)result;
            *(void**)result = a;
            *(void**)obj = b;
        }
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)vt;
            ((void (__thiscall*)(void*, int))fn)(conv, 1);
        }
        sub_802468(buf + 0x24);
        result = sub_56cca0();
        *(void**)this = result;
    }

    // Fourth type: double
    ti = *(void**)this;
    ti = *(void**)((char*)ti + 8);
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x92bee8, ti);
    if (ok) {
        obj = (char*)this + 4;
        double d = sub_416080(obj);
        *(double*)(buf + 0x18) = d;
        sub_5bdf70(buf + 0x18, buf + 0x2c, buf + 0x18);
        sub_417230(buf + 0x24, buf + 0x24);
        if (result != obj) {
            void* a = *(void**)obj;
            void* b = *(void**)result;
            *(void**)result = a;
            *(void**)obj = b;
        }
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)vt;
            ((void (__thiscall*)(void*, int))fn)(conv, 1);
        }
        sub_802468(buf + 0x24);
        result = sub_56cd10();
        *(void**)this = result;
    }

    // Fifth type: boost::any placeholder
    ti = *(void**)this;
    ti = *(void**)((char*)ti + 8);
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x946364, ti);
    if (ok) {
        obj = (char*)this + 4;
        sub_56dfe0(buf + 0x14, obj);
        sub_5bea10(buf + 0x30, buf + 0x14, buf + 0x14, buf + 0x14);
        sub_417230(buf + 0x24, buf + 0x24);
        if (result != obj) {
            void* a = *(void**)obj;
            void* b = *(void**)result;
            *(void**)result = a;
            *(void**)obj = b;
        }
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)vt;
            ((void (__thiscall*)(void*, int))fn)(conv, 1);
        }
        sub_802468(buf + 0x24);
        result = sub_56ce60();
        *(void**)this = result;
    }

    // Final check: if the object at this+4 is not a valid placeholder, throw.
    obj = (char*)this + 4;
    if (obj) {
        conv = *(void**)obj;
        if (conv) {
            void* vt = *(void**)conv;
            void* fn = *(void**)((char*)vt + 4);
            ((void (__thiscall*)(void*))fn)(conv);
        } else {
            result = (void*)0x929614;
        }
    }
    ok = ((bool (__thiscall*)(void*, void*))sub_802878)((void*)0x92bef8, result);
    if (ok) {
        void* p = *(void**)obj;
        p = (char*)p + 4;
        if (p) {
            return;
        }
    }

    // Throw path.
    sub_802458((void*)0x82f734);
    sub_409d50(buf + 0x40, buf + 0x40);
    sub_6a158c(buf + 0x60, (void*)0x8d1bc8);
}
