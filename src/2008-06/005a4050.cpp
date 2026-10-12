// from server: 96% by king_originala
typedef void (__cdecl *Manager)(void*, void*, int);

extern char table0[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tablea4[], tablec4[];

struct Callback {
    Manager* manager;
    unsigned int reserved;
    unsigned char storage[24];

    __forceinline ~Callback();
};

__forceinline Callback::~Callback() {
    if (manager) {
        Manager function = *manager;
        if (function)
            function(storage, storage, 1);
    }
}

struct Base {
    unsigned int words[0x158 / 4];

    Base();
    ~Base();
};

struct Intermediate : Base {
    __forceinline Intermediate();
};

__forceinline Intermediate::Intermediate() : Base() {
    words[0x00 / 4] = reinterpret_cast<unsigned int>(table0);
    words[0x10 / 4] = reinterpret_cast<unsigned int>(table10);
    words[0x14 / 4] = reinterpret_cast<unsigned int>(table14);
    words[0x20 / 4] = reinterpret_cast<unsigned int>(table20);
    words[0x24 / 4] = reinterpret_cast<unsigned int>(table24);
    words[0x44 / 4] = reinterpret_cast<unsigned int>(table44);
    words[0x64 / 4] = reinterpret_cast<unsigned int>(table64);
    words[0x84 / 4] = reinterpret_cast<unsigned int>(table84);
    words[0xa4 / 4] = reinterpret_cast<unsigned int>(tablea4);
    words[0xc4 / 4] = reinterpret_cast<unsigned int>(tablec4);
}

struct S : Intermediate {
    Manager* manager;
    unsigned int reserved;
    unsigned char storage[24];

    S(Callback callback);
};

S::S(Callback callback) : Intermediate() {
    manager = 0;
    if (callback.manager) {
        manager = callback.manager;
        (*callback.manager)(callback.storage, storage, 0);
    }
}
