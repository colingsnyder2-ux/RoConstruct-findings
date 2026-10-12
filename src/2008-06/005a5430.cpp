// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Function {
    typedef void (__cdecl *Manager)(const void*, void*, int);
    struct Table {
        Manager manage;
    };

    const Table* table;
    unsigned int reserved;
    unsigned char storage[24];

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : table(0) {
    if (other.table) {
        table = other.table;
        other.table->manage(other.storage, storage, 0);
    }
}

inline Function::~Function() {
    if (table) {
        Manager manager = table->manage;
        if (manager)
            manager(storage, storage, 1);
    }
}

struct String {
    unsigned char storage[28];

    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Owner;

struct Object {
    virtual void slot0();
    virtual void setName(const String&);
    void attach(Owner*);
};

struct Control {
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release() {
    if (_InterlockedExchangeAdd(&strong, -1) == 0) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 0)
            destroy();
    }
}

struct FactoryResult {
    Object* pointer;
    Control* control;

    ~FactoryResult();
};

inline FactoryResult::~FactoryResult() {
    if (control)
        control->release();
}

struct Shared {
    Object* pointer;
    Control* control;

    Shared(const FactoryResult&);
    ~Shared();
};

inline Shared::Shared(const FactoryResult& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    if (control)
        control->release();
}

FactoryResult __cdecl createObject(Function);

struct Owner {
    Object* create(const char*, Function);
};

Object* Owner::create(const char* name, Function function) {
    Shared object(createObject(function));
    object.pointer->setName(String(name));
    object.pointer->attach(this);
    return object.pointer;
}
