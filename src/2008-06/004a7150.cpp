// from server: 95% by king_originala
extern "C" {
    extern void (__thiscall *string_construct)(void *);
    extern void (__thiscall *string_destroy)(void *);
}

struct String {
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    string_construct(this);
}

inline String::~String()
{
    string_destroy(this);
}

struct Base {
    int data;
};

struct Prefix {
    char data[20];
};

struct Derived : Prefix, Base {
};

struct Receiver;

struct ReceiverTable {
    void *slots[8];
    void (__thiscall *invoke)(Receiver *, Base *, String *);
};

struct Receiver {
    ReceiverTable *table;
};

struct Argument {
    Receiver *receiver;
    Base *object;
};

struct S {
    void prepare(int value, String *text);
    void f(Argument *argument, int value);
};

void S::f(Argument *argument, int value)
{
    String text;
    prepare(value, &text);
    if (argument->object) {
        Derived *object = static_cast<Derived *>(argument->object);
        argument->receiver->table->invoke(
            argument->receiver, static_cast<Base *>(object), &text);
    }
}
