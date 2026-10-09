// from server: 53% by colin
// roc 2007-08 005afd60  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afd60

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl std_exception_ctor(void* self, const char** msg);

struct S {
    void* f(unsigned int count);
};

void* S::f(unsigned int count)
{
    if (count <= 0) {
        count = 0;
    } else {
        unsigned int max = 0xffffffffu / count;
        if (max >= 4) {
            goto alloc;
        }
    }
    {
        void* p = operator_new(count * 4);
        return p;
    }
alloc:
    {
        const char* msg = "V8World/EdgeBuffer.h";
        void* ex = operator_new(0x10);
        std_exception_ctor(ex, &msg);
        return 0;
    }
}
