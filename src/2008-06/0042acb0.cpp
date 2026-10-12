// from server: 97% by king_originala
typedef void (__cdecl *Manager)(void*, void*, int);

struct Function
{
    Manager* manager;
    unsigned char padding[4];
    unsigned char storage[24];

    ~Function();
};

inline Function::~Function()
{
    if (manager)
    {
        Manager callback = *manager;
        if (callback)
            callback(storage, storage, 1);
    }
}

struct Holder
{
    unsigned char padding0[4];
    Manager* manager;
    unsigned char padding1[4];
    unsigned char storage[24];
    unsigned long trailing;

    Holder(Function function);
    virtual ~Holder();
};

Holder::Holder(Function function)
{
    manager = 0;
    if (function.manager)
    {
        manager = function.manager;
        (*function.manager)(function.storage, storage, 0);
    }
    trailing = 0;
}
