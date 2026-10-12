// from server: 100% by king_originala
typedef void (__cdecl *Manager)(void *, void *, int);
extern Manager globalManager;

struct Binder {
    Manager *manager;
    unsigned int reserved;
    unsigned int storage;

    Binder &assign(unsigned int value);
};

Binder &Binder::assign(unsigned int value)
{
    if (manager) {
        Manager callback = *manager;
        unsigned int *destination = &storage;
        if (callback)
            callback(destination, destination, 1);
        manager = 0;
    }

    try {
        Manager callback = globalManager;
        unsigned int *destination = &storage;
        if (callback)
            callback(destination, destination, 1);

        if (value) {
            *destination = value;
            manager = &globalManager;
        } else {
            *destination = 0;
        }
    } catch (...) {
        manager = 0;
        throw;
    }

    return *this;
}
