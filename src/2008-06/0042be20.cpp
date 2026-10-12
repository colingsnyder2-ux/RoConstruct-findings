// from server: 57% by king_originala
struct String;

extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_destroy)(String *);
extern String &(__thiscall *string_assign)(String *, const String &);
extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *string_clear)(String *);
extern bool (__cdecl *string_not_equal)(const String &, const String &);
extern void (__cdecl *invalid_parameter)();

extern "C" void __stdcall SysFreeString(unsigned short *);

struct String {
    unsigned char storage[28];

    String() { string_construct(this); }
    ~String() { string_destroy(this); }

    String &operator=(const String &other) {
        return string_assign(this, other);
    }

    const char *c_str() const {
        return string_c_str(this);
    }

    void clear() {
        string_clear(this);
    }
};

struct Value {
    String get();
};

struct Node {
    Node *next;
    Node *previous;
    Value *value;
};

struct Container {
    unsigned char padding[20];
    Node *head;
};

struct Proxy {
    Container *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;

    bool operator!=(const Iterator &other) const {
        if (!owner || owner != other.owner)
            invalid_parameter();
        return node != other.node;
    }

    Value *operator*() const {
        if (!owner)
            invalid_parameter();
        if (node == (owner ? owner->container : 0)->head)
            invalid_parameter();
        return node->value;
    }

    Iterator &operator++() {
        if (!owner)
            invalid_parameter();
        if (node == (owner ? owner->container : 0)->head)
            invalid_parameter();
        node = node->next;
        return *this;
    }
};

struct BString {
    unsigned short *value;
    BString(const char *);
    ~BString() {
        SysFreeString(value);
    }
};

struct Interface {
    typedef long (__stdcall *Setter)(Interface *, unsigned short *);
    struct Table {
        void *slots[9];
        Setter set;
    };
    Table *table;
};

struct S {
    unsigned char padding0[12];
    Proxy *owner;
    unsigned char padding1[16];
    Node *head;
    unsigned char padding2[4];
    unsigned char flag;
    unsigned char padding3[7];
    Interface *target;

    void f();
};

void S::f() {
    flag = 0;
    String text;

    Iterator current;
    current.owner = owner;
    current.node = head->next;

    Iterator end;
    end.owner = owner;
    end.node = head;

    if (current != end) {
        text = (*current)->get();
        ++current;
    }

    for (; current != end; ++current) {
        if (string_not_equal(text, (*current)->get())) {
            text.clear();
            break;
        }
    }

    Interface *destination = target;
    destination->table->set(destination, BString(text.c_str()).value);
}
