// from server: 94% by king_originala
extern long (__stdcall *InterlockedDecrement)(volatile long*);

struct String {
    char data[28];
};

extern String& (__thiscall *assignText)(String*, const char*);
extern String& (__thiscall *assignString)(String*, const String&);

struct Object;

struct Reference {
    Object* pointer;
    ~Reference();
};

struct Object {
    virtual ~Object();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual Reference invoke(void*);

    volatile long count;
    void* resource;
    String name;

    void release();
};

Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->count) == 0) {
            pointer->release();
            delete pointer;
        }
        pointer = 0;
    }
}

struct S {
    void* unused;
    void* context;
    String name;

    void f(int unusedArgument, Reference value);
};

void S::f(int unusedArgument, Reference value)
{
    if (!value.pointer) {
        assignText(&name, ">Authoring");
        return;
    }

    assignString(&name, value.pointer->name);
    value.pointer->invoke(context);
}
