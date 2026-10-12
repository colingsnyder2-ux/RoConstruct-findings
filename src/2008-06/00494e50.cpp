// from server: 55% by king_originala
typedef void (__cdecl *Manager)(void *, void *, int);

struct Function {
    Manager *manager;
    unsigned long reserved;
    unsigned char storage[72];

    Function(const Function &);
    ~Function();
};

inline Function::~Function()
{
    if (manager) {
        Manager callback = *manager;
        if (callback)
            callback(storage, storage, 1);
        manager = 0;
    }
}

struct S {
    Function first;
    Function second;

    S(Function a, Function b);
    void finish();
};

S::S(Function a, Function b)
    : first(a), second(b)
{
    finish();
}
