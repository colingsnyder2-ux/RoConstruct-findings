// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other) throw();
    ~Shared();
};

inline Shared::Shared(const Shared& other) throw()
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* references = &control->references;
        _InterlockedExchangeAdd(references, 1);
    }
}

struct Guard {
    unsigned char storage[12];

    Guard(Shared);
    ~Guard();
};

struct Text;
struct Result;

extern const char* (__thiscall* text_c_str)(const Text*);
extern void (__thiscall* result_construct)(Result*, const char*);

struct Text {
    const char* __thiscall c_str() const;
};

inline const char* Text::c_str() const {
    return text_c_str(this);
}

struct Owner {
    unsigned char padding[0x110];
    Text text;
};

struct Result {
    void* storage;

    Result(const char*);
    Result(const Result&);
    ~Result();
};

inline Result::Result(const char* text) {
    result_construct(this, text);
}

struct S {
    unsigned char padding[0x7c];
    Shared shared;
    Owner* owner;

    Result f(int);
};

Result S::f(int) {
    Guard guard(shared);
    Result result(owner->text.c_str());
    return result;
}
