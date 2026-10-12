// from server: 70% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();
void* __cdecl operator new(unsigned int);

struct String {
    unsigned char allocator;
    char storage[16];
    unsigned int length;
    unsigned int capacity;
    ~String();
};

struct Value {
    virtual ~Value();
};

struct BoolValue {
    void* table;
    bool value;
};

struct Pointer {
    Value* value;

    Pointer(String& text);
    explicit Pointer(Value* p) : value(p) {}
    ~Pointer() {
        if (value)
            delete value;
    }

    Pointer& operator=(Pointer& other) {
        if (&other != this) {
            Value* p = value;
            value = other.value;
            other.value = p;
        }
        return *this;
    }
};

struct Arguments {
    unsigned int bookkeeping[3];
    Pointer* first;
    Pointer* last;
    Pointer* limit;

    Arguments(unsigned int count);
    ~Arguments();

    Pointer& operator[](unsigned int index) {
        if (static_cast<unsigned int>(last - first) <= index)
            _invalid_parameter_noinfo();
        return first[index];
    }
};

struct Receiver {
    virtual ~Receiver();
    virtual void invoke(Arguments&);
};

struct S {
    Receiver* receiver;
    void f(String text, bool flag);
};

void S::f(String text, bool flag) {
    Arguments arguments(2);
    {
        Pointer& destination = arguments[0];
        Pointer temporary(text);
        destination = temporary;
    }
    {
        Pointer& destination = arguments[1];
        BoolValue* p = static_cast<BoolValue*>(operator new(8));
        if (p) {
            p->table = reinterpret_cast<void*>(0x80ba84);
            p->value = flag;
        }
        Pointer temporary(reinterpret_cast<Value*>(p));
        destination = temporary;
    }
    receiver->invoke(arguments);
}
