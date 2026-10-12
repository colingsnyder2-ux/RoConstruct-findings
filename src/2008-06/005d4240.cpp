// from server: 85% by king_originala
typedef void (__thiscall *StringCopy)(void *, const void *);
extern StringCopy copyString;

struct Argument;

struct String {
    char storage[28];
    String(const String &);
    String(const String &, Argument *volatile *);
};

inline String::String(const String &other) {
    copyString(this, &other);
}

inline String::String(const String &other, Argument *volatile *slot) {
    *slot = reinterpret_cast<Argument *>(this);
    copyString(this, &other);
}

struct Value {
    String text;
    unsigned int extra;
    Value(const Value &, Argument *volatile *);
};

inline Value::Value(const Value &other, Argument *volatile *slot)
    : text(other.text, slot), extra(other.extra) {
}

struct Receiver {
    void apply(Value value);
};

struct Object {
    Receiver *getReceiver();
};

struct Argument {
    Object *getObject();
};

struct S {
    char padding[0x134];
    Value value;
    void f(Argument *argument);
};

void S::f(Argument *argument) {
    Object *object = argument->getObject();
    if (object) {
        Receiver *receiver = object->getReceiver();
        if (receiver)
            receiver->apply(Value(value, &argument));
    }
}
