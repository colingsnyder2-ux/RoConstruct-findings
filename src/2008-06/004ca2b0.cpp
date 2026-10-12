// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char partInstanceType;

struct Control {
    void* vtable;
    volatile long references;
    void release();
};

struct Count {
    Control* control;

    Count();
    Count(const Count&);
    ~Count();
    Count& operator=(const Count&);
};

inline Count::Count() : control(0) {}

inline Count::Count(const Count& other) : control(other.control) {
    if (control) {
        volatile long* references = &control->references;
        _InterlockedExchangeAdd(references, 1);
    }
}

inline Count::~Count() {
    if (control)
        control->release();
}

struct Source {
    void* object;
    Count count;
};

struct S {
    void* object;
    Count count;

    S(const Source&, int);
};

S::S(const Source& source, int)
    : object(__RTDynamicCast(source.object, 0,
                            &instanceType, &partInstanceType, 0)),
      count(source.count) {
    if (!object) {
        const Count empty;
        count = empty;
    }
}
