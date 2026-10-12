// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

struct Object {
    char padding[164];
    char* base;
};

struct ObjectList {
    Object** objects;
    int count;
};

struct Receiver {
    void consume(const Shared&);
};

Shared __cdecl makeShared(void*);

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void __cdecl process(ObjectList* list, Receiver* volatile receiver)
{
    for (int i = 0; i < list->count; ++i) {
        Object* object = list->objects[i];
        void* base;
        if (object && object->base)
            base = object->base - 448;
        else
            base = 0;
        receiver->consume(makeShared(base));
    }
}
