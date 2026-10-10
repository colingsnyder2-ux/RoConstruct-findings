// from server: 38% by colin
struct CallbackDescriptor;

struct Holder {
    void construct(CallbackDescriptor* descriptor);
};

struct CallbackDescriptor {
    void* vtable;
    Holder holder;
};

struct Allocator {
    void* allocate(unsigned int size);
};

extern Allocator g_allocator;

void* __cdecl operator_new(unsigned int size);

struct S {
    CallbackDescriptor* field;
    void init(CallbackDescriptor* descriptor);
};

void S::init(CallbackDescriptor* descriptor) {
    CallbackDescriptor* p = (CallbackDescriptor*)operator_new(0x10);
    if (p) {
        p->vtable = 0;
        p->holder.construct(descriptor);
        field = p;
    } else {
        field = 0;
    }
}
