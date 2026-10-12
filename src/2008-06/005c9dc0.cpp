// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern String* (__thiscall *constructString)(String*, const char*);
extern void (__thiscall *destroyString)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct TypedMemItem;

struct Item {
    virtual void reserved();
    virtual void setName(const String&);
    void attach(TypedMemItem*);
};

struct SharedResult {
    Item* object;
    Control* control;
    ~SharedResult();
};

inline SharedResult::~SharedResult()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Shared {
    Item* object;
    Control* control;
    Shared(const SharedResult&);
    ~Shared();
};

inline Shared::Shared(const SharedResult& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

SharedResult __cdecl makeItem(int);

struct TypedMemItem {
    Item* create(int, const char*);
};

Item* TypedMemItem::create(int kind, const char* name)
{
    Shared item(makeItem(kind));
    item.object->setName(String(name));
    item.object->attach(this);
    return item.object;
}
