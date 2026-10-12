// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct StringData {
    char data[28];
    StringData(const StringData&);
    ~StringData();
};

struct Value {
    StringData text;
    int tag;
};

struct Name {
    const Value& get() const;
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct OutputData {
    void assign(const Shared*);
};

struct Output {
    void* type;
    OutputData value;
};

extern void* __cdecl getType();

typedef Shared* (__thiscall *Getter)(void*, Shared*, Value);

struct S {
    char padding[56];
    Getter getter;
    int adjustment;
    int virtualOffset;

    void f(void*, Output*, const Name*);
};

void S::f(void* object, Output* output, const Name* name)
{
    Shared result;
    Shared* value = getter(
        static_cast<char*>(object) + 0x134 + adjustment +
            *reinterpret_cast<int*>(
                reinterpret_cast<char*>(
                    *reinterpret_cast<int**>(
                        static_cast<char*>(object) + 0x134)) +
                virtualOffset),
        &result, name->get());
    output->type = getType();
    output->value.assign(value);
}
