// from server: 93% by king_originala
struct Functor28 {
    unsigned char data[28];
    Functor28(const Functor28 &);
};

struct Functor32 {
    unsigned char data[32];
    Functor32(const Functor32 &);
};

extern "C" Functor28 __cdecl makeFunctor();
extern "C" void __cdecl callback();
extern "C" Functor32 __cdecl bindFunctor(void (__cdecl *)(), Functor28);
extern const char taskName[];

struct Function {
    typedef void (__cdecl *Manager)(void *, void *, int);
    Manager *manager;
    unsigned int reserved;
    unsigned char storage[24];

    Function(Functor32, int);
    ~Function();
};

inline Function::~Function()
{
    if (manager) {
        Manager destroy = *manager;
        if (destroy)
            destroy(storage, storage, 1);
    }
}

struct Base {
    Base(const Function &, const char *);
    ~Base();
};

struct S : Base {
    S();
};

S::S()
    : Base(Function(bindFunctor(callback, makeFunctor()), 0), taskName)
{
}
