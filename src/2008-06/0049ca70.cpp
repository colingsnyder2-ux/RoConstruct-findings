// from server: 83% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
typedef void (__thiscall *StringCopy)(String*, const String&);
typedef void (__thiscall *StringDestroy)(String*);

extern StringCopy copyString;
extern StringDestroy destroyString;

struct String {
    char storage[28];

    __declspec(dllimport) String(const String&);
    ~String();
};



__forceinline String::~String()
{
    destroyString(this);
}

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    void* object;
    Control* control;

    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->references) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weakReferences) == 0)
                p->destroy();
        }
    }
}

struct Player;

extern unsigned char instanceType;
extern unsigned char playerType;

void* __cdecl castObject(void*, long, void*, void*, int);

struct S {
    void invoke(Player*, String);
    void f(Shared, String);
};

void S::f(Shared instance, String text)
{
    invoke(static_cast<Player*>(
        castObject(instance.object, 0, &instanceType, &playerType, 0)),
        text);
}
