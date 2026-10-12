// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);

struct ControlBlock {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    ControlBlock* control;
    typedef void* Shared::*BoolType;

    Shared();
    Shared(const Shared&);
    ~Shared();
    operator BoolType() const;
};

inline Shared::Shared() : object(0), control(0) {}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control) {
        ControlBlock* p = control;
        volatile long* count = &p->strong;
        if (_InterlockedExchangeAdd(count, -1) == 1) {
            p->dispose();
            count = &p->weak;
            if (_InterlockedExchangeAdd(count, -1) == 1)
                p->destroy();
        }
    }
}

inline Shared::operator BoolType() const
{
    return object ? &Shared::object : 0;
}

struct DialogBase {
    char storage[112];
    DialogBase(unsigned int, void*);
    virtual ~DialogBase();
};

struct ObjectList;

struct ListOwner {
    ObjectList** pointer;
    ListOwner(ObjectList*);
    ~ListOwner();
};

inline ListOwner::ListOwner(ObjectList* list)
{
    ObjectList** p = static_cast<ObjectList**>(operator new(4));
    if (p)
        *p = list;
    else
        p = 0;
    pointer = p;
}

struct ObjectList {
    ListOwner owner;
    unsigned int unused[2];
    void* first;
    void* last;
    void* limit;

    ObjectList();
    ~ObjectList();
};

inline ObjectList::ObjectList()
    : owner(this), first(0), last(0), limit(0)
{
}

typedef void (__thiscall *StringConstructor)(void*, const char*);
extern StringConstructor constructString;

struct StringStorage {
    void* data;
    ~StringStorage();
};

struct String : StringStorage {
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    constructString(this, text);
}

struct Auxiliary {
    unsigned int storage[2];
    Auxiliary();
    ~Auxiliary();
};

struct WindowBase {
    WindowBase();
    virtual ~WindowBase();
};

struct DialogWindow : WindowBase {
    DialogWindow();
    virtual ~DialogWindow();
};

inline DialogWindow::DialogWindow() : WindowBase() {}

struct CInsertObjectDialog : DialogBase {
    Shared selected;
    ObjectList objects;
    String title;
    Shared temporary;
    Auxiliary auxiliary;
    DialogWindow window;

    CInsertObjectDialog(Shared, void*);
    virtual ~CInsertObjectDialog();
};

CInsertObjectDialog::CInsertObjectDialog(Shared value, void* parent)
    : DialogBase(value ? 107 : 214, parent),
      selected(value),
      objects(),
      title(">Authoring"),
      temporary(),
      auxiliary(),
      window()
{
}
