// from server: 84% by colin
// roc 2007-08 0042b3a0  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b3a0

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);
extern "C" bool __stdcall type_info_equal(const void*, const void*);

struct Descriptor {
    int a;
    int b;
    int c;
    int d;
};

struct Reflection {
    void* get(const Descriptor& descriptor, int mode);
};

void* Reflection::get(const Descriptor& descriptor, int mode)
{
    if (mode == 2) {
        if (type_info_equal(&descriptor, (void*)0x8866f0))
            return (void*)&descriptor;
        return 0;
    }
    if (mode == 0) {
        Descriptor* p = (Descriptor*)malloc(0x10);
        if (p) {
            p->a = descriptor.a;
            p->b = descriptor.b;
            p->c = descriptor.c;
            p->d = descriptor.d;
            return p;
        }
        return 0;
    }
    free((void*)&descriptor);
    return 0;
}
