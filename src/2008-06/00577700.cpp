// from server: 88% by king_originala
struct Manager {
    void (__cdecl *manage)(const void *, void *, int);
};

struct Function {
    Manager *manager;
    unsigned int padding;
    char storage[24];

    Function(const Function &other);
    ~Function();
};

__forceinline Function::Function(const Function &other)
    : manager(0)
{
    if (other.manager) {
        manager = other.manager;
        other.manager->manage(other.storage, storage, 0);
    }
}

__forceinline Function::~Function()
{
    if (manager) {
        void (__cdecl *manage)(const void *, void *, int) = manager->manage;
        if (manage)
            manage(storage, storage, 1);
    }
}

struct S {
    char data[40];
    bool flag;

    S *f(Function function, int value, bool enabled);
    void set(Function function, int value);
};

S *S::f(Function function, int value, bool enabled)
{
    set(function, value);
    flag = enabled;
    return this;
}
