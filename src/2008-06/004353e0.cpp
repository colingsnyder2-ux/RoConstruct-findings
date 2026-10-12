// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Item {
    char padding[0x130];
    unsigned char enabled;
    unsigned char requiresFirst;
    unsigned char requiresSecond;
};

struct Settings {
    char padding[0x130];
    unsigned char first;
    unsigned char second;
};

struct String {};

extern const char* (__thiscall *string_c_str)(const String*);

struct Text {
    char padding[4];
    String value;
};

struct Argument {
    int unused;
    Text* text;
    int reserved;
    int identifier;
};

struct Service {
    Item* __thiscall lookup(Argument*);
};

struct Shared {
    Service* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

Shared __cdecl getService();
Settings* __cdecl getSettings();

struct CDeclarationView {
    char padding[0xa8];
    unsigned char acceptAll;
    char alignment[3];
    int identifier;

    void __thiscall f(Argument*);
    void* __thiscall insert(int, const char*, int, int, int, int, int,
                           unsigned long, unsigned long);
    void __thiscall configure(void*, int, int, int, int, int, int, Argument*);
    void __thiscall finish(void*, Item*);
};

void CDeclarationView::f(Argument* argument)
{
    if (!acceptAll && argument->identifier != identifier)
        return;

    Item* item = getService().pointer->lookup(argument);

    if (item) {
        Settings* settings = getSettings();
        if (item->requiresFirst && !settings->first)
            return;
        if (item->requiresSecond && !settings->second)
            return;
        if (!item->enabled)
            return;
    }

    const char* text = string_c_str(&argument->text->value);
    void* entry = insert(0x23, text, 8, 8, 0, 0, 0,
                         0xffff0000UL, 0xffff0002UL);
    configure(entry, 4, 0, 0, 0, 0, 0, argument);
    finish(entry, item);
}
