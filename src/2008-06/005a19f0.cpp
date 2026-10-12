// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference();
    ~Reference();
    Reference& operator=(const Reference&);
};

inline Reference::Reference() : control(0) {}

inline Reference::~Reference()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Pair {
    void* object;
    Reference reference;
    Pair();
    ~Pair();
    Pair& operator=(const Pair&);
};

inline Pair::Pair() : object(0), reference() {}
inline Pair::~Pair() {}

inline Pair& Pair::operator=(const Pair& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

extern Pair __cdecl makePair(void*);

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char storage[64];
    Base(void*);
    virtual ~Base();
    void activate();
};

struct ArrowTool : Base {
    Pair value;
    ArrowTool(void*, void*);
    virtual ~ArrowTool();
};

ArrowTool::ArrowTool(void* first, void* second)
    : Base(first), value()
{
    value = makePair(second);
    activate();
}
