// from server: 91% by colin
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

extern char sourceType;
extern char targetType;

extern "C" void* __cdecl dynamicCast(
    void*, long, const void*, const void*, int);

struct Counted {
    long reserved;
    volatile long references;
    void release();
};

struct Control {
    Counted* p;

    explicit Control(Counted* value);
    Control(const Control& other);
    ~Control();
    Control& operator=(const Control& other);
};

inline Control::Control(Counted* value) : p(value) {}

inline Control::Control(const Control& other) : p(other.p) {
    if (p)
        _InterlockedIncrement(&p->references);
}

inline Control::~Control() {
    if (p)
        p->release();
}

struct S {
    void* object;
    Control control;

    S(const S& other, int tag);
};

S::S(const S& other, int tag)
    : object(dynamicCast(other.object, 0, &sourceType, &targetType, 0)),
      control(other.control) {
    if (!object)
        control = Control(0);
}
