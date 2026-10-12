// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x228];
    int value;
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    Control* p = control;
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Entry {
    Object* object;
    Control* control;
    Shared lock();
};

struct Collection {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Output {
    void append(int* const*);
};

extern bool __cdecl accepted(Shared);
extern void* __cdecl getResult(Object*);

void* __cdecl reconstruct(Collection* collection, Output* output)
{
    void* result = 0;
    for (unsigned int i = 0;
         i < static_cast<unsigned int>(collection->last - collection->first);
         ++i) {
        if (i >= static_cast<unsigned int>(collection->last - collection->first))
            _invalid_parameter_noinfo();

        Shared item = collection->first[i].lock();
        Control* control = item.control;
        Object* object = item.object;
        if (accepted(item)) {
            int* value = &object->value;
            output->append(&value);
            if (!result)
                result = getResult(object);
        }
        item.control = control;
    }
    return result;
}
