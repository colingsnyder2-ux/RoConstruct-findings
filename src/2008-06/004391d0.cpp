// from server: 53% by king_originala
struct Object;
struct Iterator {
    void* unused;
    int* current;
};
struct Functor {
    void (__thiscall *method)(Object*, int, int);
    Object* object;
    int adjustment;
    int argument;
};

extern Functor apply(Iterator, Iterator, Functor);
extern Functor applyOther(Iterator, Iterator, Functor);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Lock {
    void acquire();
    void release();
};
extern Lock* getLock();

struct Guard {
    Lock* lock;
    bool held;
    Guard(Lock* p) : lock(p) {
        lock->acquire();
        held = true;
    }
    ~Guard() {
        lock->release();
    }
};

struct S {
    char padding0[8];
    int* firstData;
    char padding1[8];
    int* firstEnd;
    int* firstLimit;
    char padding2[136];
    int* secondData;
    char padding3[8];
    int* secondEnd;
    int* secondLimit;

    void f(S*);
    void g(int, int);
    Iterator beginFirst();
    Iterator endFirst();
    Iterator beginSecond();
    Iterator endSecond();
};

inline Iterator S::beginFirst() {
    int* p = firstEnd;
    if (p > firstLimit)
        _invalid_parameter_noinfo();
    Iterator result = { firstData, p };
    return result;
}

inline Iterator S::endFirst() {
    int* p = firstLimit;
    if (firstEnd > p)
        _invalid_parameter_noinfo();
    Iterator result = { firstData, p };
    return result;
}

inline Iterator S::beginSecond() {
    int* p = secondEnd;
    if (p > secondLimit)
        _invalid_parameter_noinfo();
    Iterator result = { secondData, p };
    return result;
}

inline Iterator S::endSecond() {
    int* p = secondLimit;
    if (secondEnd > p)
        _invalid_parameter_noinfo();
    Iterator result = { secondData, p };
    return result;
}

void S::f(S* source) {
    Guard guard(getLock());

    union {
        void (S::*recursive)(S*);
        void (S::*ordinary)(int, int);
        void (__thiscall *entry)(Object*, int, int);
    } address;

    Functor function;
    address.recursive = &S::f;
    function.method = address.entry;
    function.object = 0;
    function.adjustment = reinterpret_cast<int>(this);

    applyOther(source->beginSecond(), source->endSecond(), function);

    address.ordinary = &S::g;
    function.method = address.entry;
    function.object = 0;
    function.adjustment = reinterpret_cast<int>(this);
    function.argument = reinterpret_cast<int>(source);

    apply(source->beginFirst(), source->endFirst(), function);
}
