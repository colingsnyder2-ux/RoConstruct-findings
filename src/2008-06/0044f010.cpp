// from server: 84% by king_originala
typedef void (__thiscall *StringConstruct)(void*, void*);
typedef void* (__thiscall *StringAccess)(void*);
typedef void (__thiscall *StringDestroy)(void*);

extern StringConstruct stringConstruct;
extern StringAccess stringAccess;
extern StringDestroy stringDestroy;
extern long __cdecl function(void*);

struct String
{
    void* data;
    String(void*);
    ~String() throw();
    void* value();
};

__forceinline String::String(void* value)
{
    stringConstruct(this, value);
}

__forceinline String::~String() throw()
{
    stringDestroy(this);
}

__forceinline void* String::value()
{
    return stringAccess(this);
}

struct Argument
{
    unsigned char padding[8];
    void* value;
};

struct Dialog;
typedef void (__thiscall *Dispatch)(Dialog*, void*, void*);

struct DialogTable
{
    void* padding[92];
    Dispatch dispatch;
};

struct Dialog
{
    DialogTable* table;
    void invoke(void*, Argument*, unsigned long, unsigned long,
                void*, void*, int*);
};

void Dialog::invoke(void* context, Argument* argument,
                    unsigned long, unsigned long,
                    void*, void*, int* handled)
{
    String text(argument->value);
    if (function(text.value()))
        *handled = 1;
    else
    {
        DialogTable* savedTable = table;
        void* value = text.value();
        savedTable->dispatch(this, context, value);
    }
}
