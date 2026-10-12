// from server: 72% by king_originala
void* __cdecl operator new(size_t);
extern "C" bool __cdecl stackAvailable(size_t);
extern "C" void* __cdecl _alloca(size_t);
#pragma intrinsic(_alloca)

struct Module {
    virtual void reserved() = 0;
    virtual void addReference() = 0;
};

extern Module* module;
extern void* objectTable[];
extern unsigned long lockFlags;

struct LockData {
    long size;
    long value;
};

extern LockData lockData;

struct Object {
    void* table;
    long references;
    void* first;
    void* second;
    void* third;
    void* fourth;
    void* fifth;

    void initialize();
};

__forceinline void Object::initialize()
{
    references = 0;
    third = 0;
    second = 0;
    first = 0;
    fourth = 0;
    fifth = 0;
    table = objectTable;
    module->addReference();
}

struct Guard {
    LockData* data;
    long status;

    Guard(LockData* p);
    ~Guard();
};

__forceinline Guard::Guard(LockData* p)
{
    data = p;
    status = 0;
}

long __stdcall createObject(void* context, Object** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    Object* object;

    try {
        Object* allocated = static_cast<Object*>(operator new(28));
        if (allocated) {
            allocated->initialize();
            object = allocated;
        } else {
            object = 0;
        }
    }
    catch (...) {
        return (long)0x8007000E;
    }

    if (!object)
        return (long)0x8007000E;

    if (!(lockFlags & 1)) {
        lockFlags |= 1;
        lockData.size = 4;
        lockData.value = -1;
    }

    Guard guard(&lockData);
    try {
        void* volatile storage = 0;
        if (stackAvailable(4))
            storage = _alloca(4);

        if (storage)
            *static_cast<long*>(storage) = 0;

        *result = object;
        return 0;
    }
    catch (...) {
        return (long)0x8007000E;
    }
}
