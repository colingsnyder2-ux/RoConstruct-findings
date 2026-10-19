// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);
extern "C" int (__thiscall *compareName)(const void*, const char*);

struct NameObject {
    unsigned int reserved;
    char name[28];
};

struct Property {
    virtual void unused();
    virtual NameObject* get();
};

struct Connection {
    void attach(void*);
};

struct Object {
    char reserved[16];
    Property property;
    char padding[0x150 - 16 - sizeof(Property)];
    Connection connection;
};

struct Reference {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Object* object;
    Reference* reference;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Reference* p = reference;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct CRobloxView {
    void notify(int, Shared);
};

void CRobloxView::notify(int, Shared value)
{
    NameObject* name = value.object->property.get();
    int result = compareName(reinterpret_cast<char*>(name) + 4, "NetworkClient");
    int (__stdcall *post)(void*, unsigned int, unsigned int, long) = PostMessageA;

    if (result == 0) {
        void* window = *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) - 0x84);
        post(window, 0x46C, 0, 0);
    }

    name = value.object->property.get();
    result = compareName(reinterpret_cast<char*>(name) + 4, "NetworkClient");
    if (result != 0) {
        name = value.object->property.get();
        result = compareName(reinterpret_cast<char*>(name) + 4, "Players");
    }
    if (result == 0)
        post(*reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) - 0x84), 0x46B, 0, 0);

    name = value.object->property.get();
    if (compareName(reinterpret_cast<char*>(name) + 4, "Players") == 0) {
        void* listener = reinterpret_cast<char*>(this) - 0xA4
            ? reinterpret_cast<char*>(this) + 4 : 0;
        if (value.object)
            value.object->connection.attach(listener);
    }
}
