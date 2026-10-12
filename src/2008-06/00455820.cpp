// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Owner {
    void cleanup();
};

struct State {
    unsigned char padding[0x1b4];
    int active;
    void fire(int);
};

struct Model {
    State* state();
    void setOwner(Owner*);
};

struct Result {
    Model* first;
    Control* second;
    Result();
    Result(const Result&);
    ~Result();
    Result* address();
    operator State*() const;
};

inline Result::Result()
{
}

inline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    if (second)
        _InterlockedExchangeAdd(&second->strong, 1);
}

inline Result::~Result()
{
    Control* control = second;
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

inline Result* Result::address()
{
    return this;
}

inline Result::operator State*() const
{
    return first ? first->state() : 0;
}

struct Source {
    Result* get(Result*);
};

struct Guard {
    unsigned int storage[2];
    Guard(Result);
    ~Guard();
};

extern Owner* createOwner();
extern void __cdecl releaseMemory(void*);

struct CRobloxDoc {
    unsigned char padding0[0x74];
    Owner* owner;
    unsigned char padding1[0x1c];
    Source* source;
    Result* get(Result*);
    void f();
};

void CRobloxDoc::f()
{
    Guard guard(*source->get(Result().address()));

    bool missing = get(Result().address())->first->state()->active == 0;
    if (missing) {
        Owner* replacement = createOwner();
        Owner* previous = owner;
        if (replacement != previous && previous) {
            previous->cleanup();
            releaseMemory(previous);
        }
        owner = replacement;
        get(Result().address())->first->setOwner(owner);
    }

    static_cast<State*>(*get(Result().address()))->fire(1);
}
