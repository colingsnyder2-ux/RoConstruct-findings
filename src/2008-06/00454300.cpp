// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long strong;
    long weak;
};

struct State {
    unsigned char padding[0x1b4];
    int value;
};

struct Object {
    State* query();
};

struct Result {
    Object* object;
    Control* control;
    ~Result();
};

struct Pointer {
    Object* object;
    Control* control;
    Pointer(const Result&);
    ~Pointer();
};

inline Result::~Result()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

inline Pointer::Pointer(const Result& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Pointer::~Pointer()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Source {
    Result get();
};

struct Guard {
    unsigned char storage[12];
    Guard(Pointer);
    ~Guard();
};

struct Command {
    virtual void enable(int) = 0;
};

extern bool __cdecl check(Object*, int);

struct S {
    unsigned char padding[0x94];
    Source* source;
    Result f();
    void update(Command*);
};

void S::update(Command* command)
{
    Guard guard(source->get());
    State* state = f().object->query();
    bool checked = check(f().object, 1);
    int enabled;
    if (checked)
        enabled = 0;
    else {
        enabled = 1;
        if (state->value == enabled)
            enabled = 0;
    }
    command->enable(enabled);
}
