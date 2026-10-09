// from server: 94% by colin
// roc 2007-08 0042b460  unit: RBX::Reflection  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b460

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

struct Descriptor {
    int a;
    int b;
    int c;
    int d;
};

struct Reflection {
    static void* get(const Descriptor* desc, int mode);
};

void* Reflection::get(const Descriptor* desc, int mode) {
    if (mode == 2) {
        const type_info* p = (const type_info*)desc;
        if (*(const type_info*)0x886780 == *p) {
            return (void*)desc;
        }
        return 0;
    }
    if (mode == 0) {
        Descriptor* n = (Descriptor*)operator_new(0x10);
        if (n != 0) {
            n->a = desc->a;
            n->b = desc->b;
            n->c = desc->c;
            n->d = desc->d;
        }
        return n;
    }
    operator_delete((void*)desc);
    return 0;
}
