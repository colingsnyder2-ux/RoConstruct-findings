// from server: 50% by king_originala
struct String;

extern String* (__thiscall* stringCopy)(String*, const String&);
extern void (__thiscall* stringDestroy)(String*);

struct String
{
    unsigned char data[28];

    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    stringCopy(this, other);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Names
{
    String first();
    String second();
};

struct Arguments
{
    String first;
    int value;
    String second;

    Arguments(String, int, String);
    ~Arguments();
};

__forceinline Arguments::~Arguments()
{
}

struct Operation
{
    unsigned char data[64];

    Operation(String, String, Arguments*, bool*);
};

struct Service
{
    void invoke(void*, Operation, Operation);
};

struct ServiceHolder
{
    unsigned int reserved;
    Service service;
};

struct Object
{
    unsigned int reserved[2];
    Names names;
    unsigned char padding[79];
    ServiceHolder* service;
};

struct S;

struct Guard
{
    Object* object;
    void* control;

    Guard(S*);
    ~Guard();
};

struct S
{
    Object* object;

    void* func_004a0c90(void*, String, int, String);
};

void* S::func_004a0c90(void* result, String a, int value, String b)
{
    Guard guard(this);
    Arguments arguments(a, value, b);
    bool active = false;

    Object* source = object;
    Service* service = &source->service->service;
    Object* destination = guard.object;

    service->invoke(
        result,
        Operation(destination->names.second(), source->names.first(),
                  &arguments, &active),
        Operation(destination->names.first(), source->names.first(),
                  &arguments, &active));

    if (active)
        active = false;

    return result;
}
