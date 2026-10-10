// from server: 71% by colin
struct type_info;

extern "C" {
    int __cdecl _strcmp_placeholder();
}

namespace MSVCR80 {
    bool __stdcall type_info_equal(const type_info* a, const type_info* b);
}

struct type_info {
    bool __stdcall operator==(const type_info& rhs) const;
};

struct GenericSlotAdapter {
    int field0;
    int field4;
};

struct SignalDescImpl {
    static type_info* type();
};

struct Reflection {
    struct RBX {
        struct GenericSlotAdapter {
            static type_info* type();
        };
    };
};

extern "C" {
    bool __stdcall type_info_compare(const type_info* a, const type_info* b);
}

struct G3D {
    struct Vector3 {
        float x;
        float y;
        float z;
    };
};

struct SlotAdapter {
    int field0;
    int field4;
};

extern "C" {
    int __cdecl sub_5f20f0(int a, int b, int c);
}

struct S {
    int __cdecl f(int a, int b, int c);
};

int S::f(int a, int b, int c) {
    if (c == 2) {
        int v = a;
        if (type_info_compare((const type_info*)0x8b1858, (const type_info*)v)) {
            return v;
        }
        return 0;
    }
    return sub_5f20f0(a, b, c);
}
