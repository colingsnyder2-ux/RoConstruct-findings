// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct String {
    char storage[28];
};

typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copy_string;

struct Control {
    long unused;
    volatile long references;
};

struct Value {
    String name;
    unsigned long data;
    void* object;
    Control* control;

    Value(const Value&);
    ~Value();
};

struct Node {
    char links[12];
    Value value;
};

struct Tree {
    char padding[24];
    Node* sentinel;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;

    Iterator& operator++();
};

typedef void (__cdecl *Callback)(const Value&);

inline Value::Value(const Value& other)
{
    copy_string(&name, other.name);
    data = other.data;
    object = other.object;
    control = other.control;
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

Callback __cdecl process(Iterator first, Iterator last, Callback callback)
{
    Iterator current = first;
    Iterator finish = last;
    Owner* owner = current.owner;
    Node* node = current.node;

    for (;;) {
        if (!owner || owner != finish.owner)
            invalid_parameter_noinfo();

        if (node == finish.node)
            break;

        Tree* tree;
        if (!owner) {
            invalid_parameter_noinfo();
            tree = reinterpret_cast<Tree*>(owner);
        } else {
            tree = owner->tree;
        }

        if (node == tree->sentinel)
            invalid_parameter_noinfo();

        {
            Value value(node->value);
            callback(value);
        }

        ++current;
        node = current.node;
        owner = current.owner;
    }

    return callback;
}
