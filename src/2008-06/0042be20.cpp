// from server: 58% by king_originala
struct String;

extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_destroy)(String *);
extern String &(__thiscall *string_assign)(String *, const String &);
extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *string_clear)(String *);
extern bool (__cdecl *string_not_equal)(const String &, const String &);
extern void (__cdecl *invalid_parameter)();
extern void (__stdcall *free_string)(unsigned short *);

struct String {
    unsigned char storage[28];
    String();
    ~String();
    String &operator=(const String &);
    const char *c_str() const;
    void clear();
};

inline String::String() { string_construct(this); }
inline String::~String() { string_destroy(this); }
inline String &String::operator=(const String &s) {
    return string_assign(this, s);
}
inline const char *String::c_str() const { return string_c_str(this); }
inline void String::clear() { string_clear(this); }

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

    Iterator(Node *, Proxy *);
    bool operator!=(const Iterator &) const;
    Container *container() const;
    Value *operator*() const;
    Iterator &operator++();
};

inline Iterator::Iterator(Node *n, Proxy *p) : owner(p), node(n) {}

inline bool Iterator::operator!=(const Iterator &other) const {
    if (!owner || owner != other.owner)
        invalid_parameter();
    return node != other.node;
}

inline Container *Iterator::container() const {
    return owner ? owner->container : 0;
}

inline Value *Iterator::operator*() const {
    if (!owner)
        invalid_parameter();
    if (node == container()->head)
        invalid_parameter();
    return node->value;
}

inline Iterator &Iterator::operator++() {
    if (!owner)
        invalid_parameter();
    if (node == container()->head)
        invalid_parameter();
    node = node->next;
    return *this;
}

struct BString {
    unsigned short *value;
    BString(const char *);
    ~BString();
};

inline BString::~BString() {
    free_string(value);
}

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

    Iterator begin();
    Iterator end();
    void f();
};

inline Iterator S::begin() {
    return Iterator(head->next, owner);
}

inline Iterator S::end() {
    return Iterator(head, owner);
}

void S::f() {
    flag = 0;
    String text;
    Iterator current = begin();
    Iterator last = end();

    if (current != last) {
        text = (*current)->get();
        ++current;
    }

    for (; current != last; ++current) {
        if (string_not_equal(text, (*current)->get())) {
            text.clear();
            break;
        }
    }

    Interface *destination = target;
    destination->table->set(destination, BString(text.c_str()).value);
}
