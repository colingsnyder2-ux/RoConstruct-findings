// from server: 71% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void* __cdecl _alloca(size_t);
extern bool __cdecl verifyStack(size_t);

struct Module {
    virtual void reserved() = 0;
    virtual long lock() = 0;
};

extern Module* module;

struct ObjectData {
    long references;
    long field8;
    long field12;
    long field16;
    long field20;
    long field24;

    ObjectData() throw();
};

__forceinline ObjectData::ObjectData() throw() {
    references = 0;
    field16 = 0;
    field12 = 0;
    field8 = 0;
    field20 = 0;
    field24 = 0;
}

struct Object : ObjectData {
    Object() throw();
    virtual ~Object() throw();
};

__forceinline Object::Object() throw() {
    module->lock();
}

struct Allocation {
    unsigned size;
    int limit;

    Allocation() throw();
};

__forceinline Allocation::Allocation() throw() {
    size = 4;
    limit = -1;
}

struct HeapGuard {
    Allocation* allocator;
    void* memory;

    HeapGuard(Allocation* value) throw();
    ~HeapGuard() throw();
};

__forceinline HeapGuard::HeapGuard(Allocation* value) throw() {
    allocator = value;
    memory = 0;
}

__forceinline HeapGuard::~HeapGuard() throw() {
    if (memory)
        operator delete(memory);
}

struct Factory {
    static long __stdcall create(void* argument, Object** result);
};

long __stdcall Factory::create(void* argument, Object** result) {
    if (!result)
        return (long)0x80004003UL;

    *result = 0;
    Object* object;

    try {
        Object* created = new Object;
        object = created;
    } catch (...) {
        object = 0;
    }

    if (object) {
        static Allocation allocation;
        HeapGuard guard(&allocation);
        void* storage;

        if (verifyStack(4))
            storage = _alloca(4);
        else {
            guard.memory = operator new(guard.allocator->size);
            storage = guard.memory;
        }

        if (!storage) {
            delete object;
            return (long)0x8007000EUL;
        }

        *(void**)storage = argument;
        *result = object;
        return 0;
    }

    return (long)0x8007000EUL;
}
