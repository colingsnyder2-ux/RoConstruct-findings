// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct CountPtr {
    Control* p;
    CountPtr(const CountPtr&);
    ~CountPtr();
    CountPtr& operator=(const CountPtr&);
};

__forceinline CountPtr::CountPtr(const CountPtr& other) : p(other.p) {
    if (p)
        _InterlockedIncrement(&p->strong);
}

__forceinline CountPtr::~CountPtr() {
    if (p) {
        Control* q = p;
        if (_InterlockedDecrement(&q->strong) == 0) {
            q->dispose();
            if (_InterlockedDecrement(&q->weak) == 0)
                q->destroy();
        }
    }
}

struct Value {
    volatile int value;
    CountPtr count;
};

extern Value __cdecl makeValue(int);

struct Descriptor {
    void emit(void*, Value);
};

extern Descriptor changedDescriptor;
extern char propertyDescriptor;

struct S {
    char prefix[0x130];
    Value current;
    void notify(const void*);
    void set(int);
};

void S::set(int value) {
    if (current.value != value) {
        current = makeValue(value);
        notify(&propertyDescriptor);
        void* object = prefix + 0x14;
        changedDescriptor.emit(object, current);
    }
}
