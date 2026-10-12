// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstructor)(String*, const char*);

__forceinline String::String(const char* text) {
    stringConstructor(this, text);
}

struct Error {
    char storage[40];
    Error(const String&);
    ~Error();
};

extern "C" __declspec(noreturn) void __stdcall ThrowObject(void*, void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Owner {
    Control* control;
    Owner& operator=(const Owner&);
};

struct Player {
    char storage[20];
    void initialize(int);
    void attach(void*);
};

struct Shared {
    Player* object;
    Owner owner;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other) {
    object = other.object;
    owner.control = other.owner.control;
    if (owner.control)
        _InterlockedExchangeAdd(&owner.control->strong, 1);
}

__forceinline Shared::~Shared() {
    Control* p = owner.control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

extern Shared __cdecl createPlayer();

struct Context {
    int get();
    void set(int);
    void restore(int);
};

extern Context* __cdecl currentContext();

struct Scope {
    int saved;
    Scope(int);
    ~Scope();
};

__forceinline Scope::~Scope() {
    Context* context = currentContext();
    int previous = context->get();
    if (previous != saved) {
        context->set(saved);
        if (previous)
            context->restore(previous);
    }
}

struct Property {
    void set(bool);
};

struct Registry {
    virtual void unused0();
    virtual void unused1();
    virtual bool contains(void*);
};

extern Registry* registry;

struct S {
    char padding[0x150];
    Property property;
    char gap[0x4f];
    Player* player;
    Owner owner;

    void notify(void*);
    void assign(const Shared&);
    Shared f(int);
};

__forceinline void S::assign(const Shared& value) {
    player = value.object;
    owner = value.owner;
}

Shared S::f(int argument) {
    if (player) {
        String message("Local player already exists");
        Error error(message);
        ThrowObject(&error, reinterpret_cast<void*>(0x8d1bc8));
    }

    {
        Scope scope(6);
        assign(createPlayer());
    }

    player->initialize(argument);
    player->attach(this);
    notify(reinterpret_cast<void*>(0x970388));

    bool present;
    if (player)
        present = registry->contains(reinterpret_cast<char*>(player) + 20);
    else
        present = false;
    property.set(present);

    return *reinterpret_cast<Shared*>(&player);
}
