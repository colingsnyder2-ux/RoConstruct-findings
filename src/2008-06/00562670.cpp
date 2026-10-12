// from server: 97% by king_originala
struct String {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

extern String* (__thiscall *copyString)(String*, const String&);
extern String* (__thiscall *assignString)(String*, const String&);

struct Value {
    String text;
    unsigned int tag;

    Value(const Value& other);
    bool valid() const;
};

inline Value::Value(const Value& other)
{
    Value* volatile destination = this;
    copyString(&text, other.text);
    tag = other.tag;
}

struct Node {
    unsigned int reserved[2];
    String* text;
};

struct S {
    Node* find(Value value, int mode, int flags);
    bool fallback(const char* text);
    bool accept(Node* node);
    void f(const Value& value, int* result, String& output);
};

void S::f(const Value& value, int* result, String& output)
{
    Node* node = find(value, 1, 0);
    if (!node) {
        if (value.valid()) {
            const char* text;
            if (value.text.capacity >= 16)
                text = value.text.storage.pointer;
            else
                text = value.text.storage.buffer;
            if (!fallback(text)) {
                *result = 0;
                return;
            }
        }
        *result = 2;
        return;
    }

    if (!accept(node)) {
        *result = 2;
        return;
    }

    assignString(&output, *node->text);
    *result = 1;
}
