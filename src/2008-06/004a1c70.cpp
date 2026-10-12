// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual ~Instance();
};

struct Player : Instance {
};

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
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
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Count::~Count() {
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Source {
    Instance* pointer;
    Count count;
};

struct CastTag {};

struct S {
    Player* pointer;
    Count count;
    S(const Source&, const CastTag&);
};

S::S(const Source& source, const CastTag&)
    : pointer(dynamic_cast<Player*>(source.pointer)), count(source.count) {
    if (!pointer) {
        Count empty;
        count = empty;
    }
}
