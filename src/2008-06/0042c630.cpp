// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ProductPart {
    void finish();
};

struct Product {
    unsigned char padding[20];
    ProductPart part;
};

struct Shared {
    Product* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    unsigned char flag;

    ~Result();
};

struct Connection : Result {
    unsigned char extra;

    Connection();
    Connection& operator=(const Result&);
};

inline Connection::Connection() {
    first = 0;
    second = 0;
    flag = 0;
    extra = 0;
}

extern "C" void __cdecl callback();

struct Functor {
    void (__cdecl* function)();
    void* first;
    void* second;

    Functor(void (__cdecl*)(), void*, void*);
};

inline Functor::Functor(void (__cdecl* f)(), void* a, void* b)
    : function(f), first(a), second(b) {
}

struct Function {
    unsigned char storage[40];

    Function(const Functor&);
    ~Function();
};

struct Manager {
    Result connect(ProductPart*, const Function&, int);
};

extern Manager manager;

struct Binder {
    Shared owner;
    void* context;
    Connection connection;

    Binder(Shared, void*, void*);
};

Binder::Binder(Shared value, void* first, void* second)
    : owner(value), context(first) {
    Function function(Functor(callback, first, second));
    connection = manager.connect(
        value.pointer ? &value.pointer->part : 0, function, 10);
}
