// from server: 98% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Service {
    bool active();
};

struct Object {
    Service* service();
};

struct Shared {
    Object* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
    Service* service() const;
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

inline Service* Shared::service() const
{
    return pointer ? pointer->service() : 0;
}

struct Guard {
    char storage[12];
    Guard(Shared);
    ~Guard();
};

struct View;
struct Pane;

struct PaneTable {
    void* unused[26];
    void (__thiscall* close)(Pane*);
};

struct Pane {
    PaneTable* table;
    char storage[28];
    void configure(View*, Object*);
};

extern bool __cdecl eligible(Object*, int);

struct View {
    char prefix[32];
    int enabled;
    char padding[332];
    Shared shared;
    char gap[8];
    Pane pane;
    int state;

    Shared getObject();
    void update();
    int refresh(int, int);
};

int View::refresh(int, int)
{
    if (enabled) {
        Guard guard(shared);
        bool desired = false;
        Service* service = getObject().service();

        if (service) {
            if (eligible(getObject().pointer, 1) && !service->active())
                desired = true;
        }

        bool current = (state != 0);
        if (desired != current) {
            if (desired)
                pane.configure(this, getObject().pointer);
            else
                pane.table->close(&pane);
            update();
        }
    }
    return 0;
}
