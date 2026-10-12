// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Actor;

struct Child {
    Actor *getActor();
};

struct Object {
    unsigned char padding[0x104];
    Child *child;
};

struct Shared {
    Object *object;
    Control *control;
    Shared(const Shared &);
    ~Shared();
};

inline Shared::~Shared()
{
    Control *p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Flag {
    unsigned char padding[0x178];
    int team;
    bool inactive;
};

struct Actor {
    int *getTeam(int *);
};

struct Receiver {
    void accept(Actor *);
};

struct Context {
    Receiver *find(Actor *);
};

struct Signal {
    void invoke(void *, Shared);
};

extern int __cdecl checkChild(Child *);
extern Flag *__cdecl getFlag(Child *);
extern Shared __cdecl makeShared(Flag *);
extern Context *__cdecl getContext(void *);

struct Stand {
    unsigned char padding[0x3fc];
    int team;
    void touch(Shared);
};

void Stand::touch(Shared object)
{
    Child *child = object.object->child;
    if (!checkChild(child))
        return;

    Actor *actor = child->getActor();
    if (!actor)
        return;

    Flag *flag = getFlag(child);
    if (flag && !flag->inactive) {
        int currentTeam = team;
        if (flag->team == currentTeam) {
            int actorTeam;
            if (*actor->getTeam(&actorTeam) != currentTeam) {
                reinterpret_cast<Signal *>(0x97c060)->invoke(
                    reinterpret_cast<unsigned char *>(this) + 0x14,
                    makeShared(flag));
                Receiver *receiver = getContext(this)->find(actor);
                if (receiver)
                    receiver->accept(actor);
            }
        }
    }
}
