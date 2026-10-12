// from server: 47% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Listener {
    char data[0x24];
};

struct FirstListener : Listener {};
struct SecondListener : Listener {};

struct Signal {
    char data[0x20];
    void disconnect(Listener*);
    void connect(Listener*);
};

struct Model {
    char padding[0x64];
    Signal first;
    Signal second;
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ref {
    Control* control;
    Ref& operator=(const Ref&);
};

struct Shared {
    Model* object;
    Ref reference;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = reference.control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

extern Shared* __cdecl acquire(Shared*, void*);

struct FlagGuard {
    bool* address;
    bool previous;
    __forceinline FlagGuard(bool*);
    __forceinline ~FlagGuard();
};

__forceinline FlagGuard::FlagGuard(bool* p)
    : address(p), previous(*p)
{
    *p = true;
}

__forceinline FlagGuard::~FlagGuard()
{
    *address = previous;
}

struct ResetObject {
    void reset();
};

struct View {
    void** table;
    char padding[0xe4];
    ResetObject* resetObject;
};

struct ExplorerPrefix {
    void** table;
    char padding[0x374];
};

struct Explorer : ExplorerPrefix, FirstListener, SecondListener {
    Model* model;
    Ref reference;
    bool changing;
    void set(void*);
};

typedef View* (__thiscall *GetView)(Explorer*);
typedef void (__thiscall *RefreshView)(View*);

void Explorer::set(void* value)
{
    FlagGuard guard(&changing);

    FirstListener* first = this;
    if (model)
        model->first.disconnect(first);

    SecondListener* second = this;
    if (model)
        model->second.disconnect(second);

    View* view = ((GetView)table[0x194 / 4])(this);
    view->resetObject->reset();

    {
        Shared temporary;
        Shared* result = acquire(&temporary, value);
        model = result->object;
        reference = result->reference;
    }

    FirstListener* newFirst = this;
    if (model)
        model->first.connect(newFirst);

    SecondListener* newSecond = this;
    if (model)
        model->second.connect(newSecond);

    view = ((GetView)table[0x194 / 4])(this);
    ((RefreshView)view->table[0x160 / 4])(view);
}
