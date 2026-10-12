// from server: 71% by king_originala
typedef unsigned int size_t;

inline void* __cdecl operator new(size_t, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct Storage {
    unsigned char data[16];
};

struct Manager {
    void (__cdecl *copy)(const Storage*, Storage*, int);
};

struct S {
    unsigned int tag;
    unsigned int reserved;
    Manager* manager;
    unsigned int padding;
    Storage storage;

    S(const S& other);
};

inline S::S(const S& other) : tag(other.tag), manager(0)
{
    if (other.manager) {
        manager = other.manager;
        other.manager->copy(&other.storage, &storage, 0);
    }
}

void __cdecl construct(S* destination, const S& source)
{
    new (destination) S(source);
}
