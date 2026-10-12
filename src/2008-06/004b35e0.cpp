// from server: 77% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);

struct String;
extern void (__thiscall* destroyString)(String*);

struct String {
    unsigned char allocator;
    char storage[16];
    unsigned int length;
    unsigned int capacity;
    ~String();
};

inline String::~String() {
    destroyString(this);
}

struct Value {
    virtual ~Value();
};

struct BoolValue : Value {
    bool value;
    BoolValue(bool flag);
    virtual ~BoolValue();
};

inline BoolValue::BoolValue(bool flag) : value(flag) {}

struct Pointer {
    Value* value;

    Pointer(String& text);
    explicit Pointer(Value* p);
    ~Pointer();
    Pointer& operator=(const Pointer& other);
};

inline Pointer::Pointer(Value* p) : value(p) {}

inline Pointer::~Pointer() {
    if (value)
        delete value;
}

inline Pointer& Pointer::operator=(const Pointer& other) {
    if (&other != this) {
        Value* p = value;
        value = other.value;
        const_cast<Pointer&>(other).value = p;
    }
    return *this;
}

struct Arguments {
    unsigned int bookkeeping[3];
    Pointer* first;
    Pointer* last;
    Pointer* limit;

    Arguments(unsigned int count);
    ~Arguments();
    Pointer& operator[](unsigned int index);
};

inline Pointer& Arguments::operator[](unsigned int index) {
    if (static_cast<unsigned int>(last - first) <= index)
        _invalid_parameter_noinfo();
    return first[index];
}

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
    Pointer& first = arguments[0];
    first = Pointer(text);
    Pointer& second = arguments[1];
    second = Pointer(new BoolValue(flag));
    receiver->invoke(arguments);
}
