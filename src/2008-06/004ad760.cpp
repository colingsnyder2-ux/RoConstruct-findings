// from server: 95% by king_originala
struct String {
    unsigned int storage[7];
    String(const String&);
    ~String();
};

extern void (__thiscall *copyString)(String*, const String&);

__forceinline String::String(const String& source)
{
    copyString(this, source);
}

struct Receiver {
    void write(String value, unsigned char flag);
};

struct Argument {
    unsigned char padding[16];
    unsigned char* object;
};

struct Value {
    String text;
    unsigned char flag;
};

struct S {
    Value* value;
    void* f(void* result, Argument* argument);
};

void* S::f(void* result, Argument* argument)
{
    Receiver* receiver = reinterpret_cast<Receiver*>(argument->object + 8);
    receiver->write(value->text, value->flag);
    return result;
}
