// from server: 95% by colin
// roc 2007-08 0042b460  unit: RBX::Reflection  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b460

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" int __stdcall type_info_equal(const void*, const void*);

struct type_info {
    bool operator==(const type_info& rhs) const;
};

struct Descriptor {
    int a;
    int b;
    int c;
    int d;
};

struct Reflection {
    static void* get(const Descriptor* descriptor, int type);
};

void* Reflection::get(const Descriptor* descriptor, int type)
{
    if (type == 2) {
        const type_info* ti = (const type_info*)0x886780;
        bool eq = (*ti == *(const type_info*)descriptor);
        return eq ? (void*)descriptor : 0;
    }
    if (type == 0) {
        Descriptor* p = (Descriptor*)operator_new(0x10);
        if (p) {
            *p = *descriptor;
        }
        return p;
    }
    operator_delete((void*)descriptor);
    return 0;
}
