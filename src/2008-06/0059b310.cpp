// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

inline void* __cdecl operator new(unsigned int, void*);
inline void __cdecl operator delete(void*, void*);

inline void* __cdecl operator new(unsigned int, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;

    __forceinline Shared(const Shared&);
    __forceinline ~Shared();
    Shared& operator=(const Shared&);
};

__forceinline Shared::Shared(const Shared& other) : control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Shared::~Shared() {
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

struct Element {
    void* object;
    Shared owner;

    __forceinline ~Element();
};

__forceinline Element::~Element() {}

struct Vector {
    Element* data;
    int size;
    int capacity;

    void resize(int, bool);
    void append(const Element&);
};

void Vector::append(const Element& value) {
    if (size < capacity) {
        new (data + size) Element(value);
        ++size;
    } else if (&value >= data && &value < data + size) {
        Element temporary(value);
        append(temporary);
    } else {
        resize(size + 1, false);
        Element* last = data + size - 1;
        last->object = value.object;
        last->owner = value.owner;
    }
}
