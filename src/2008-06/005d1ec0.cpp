// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x104];
    void* instance;
};

struct Shared {
    Object* object;
    Control* control;

    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct BrickColor {
    int value;
};

struct Player {
    void setTeamColor(BrickColor color);
    void setNeutral(bool neutral);
};

int __cdecl checkInstance(void* instance);
Player* __cdecl getPlayer(void* instance);

struct S {
    char padding0[0x3e8];
    BrickColor color;
    char padding1[0x14];
    bool neutral;
    bool enabled;

    void f(Shared object);
};

void S::f(Shared object)
{
    if (!enabled)
        return;

    void* instance = object.object->instance;
    if (instance && checkInstance(instance)) {
        Player* player = getPlayer(instance);
        if (player) {
            player->setTeamColor(color);
            player->setNeutral(neutral);
        }
    }
}
