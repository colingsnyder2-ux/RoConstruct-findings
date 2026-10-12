// from server: 72% by king_originala
struct S;

struct Proxy {
    S* container;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    unsigned value;
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct String {
    unsigned allocator_data;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned size;
    unsigned capacity;
    ~String();
};

extern void (__thiscall* stringDestroy)(String*);
extern void __cdecl writeValue(void*, unsigned);
extern void __cdecl writeString(void*, const String&);

struct Iterator {
    Proxy* proxy;
    Node* node;
    Node* checked() const;
    void advance();
};

struct S {
    Proxy* proxy;
    unsigned padding[5];
    Node* head;
    unsigned value;

    String text(unsigned);
    void serialize(void*);
};

__forceinline String::~String()
{
    stringDestroy(this);
}

__forceinline Node* Iterator::checked() const
{
    Proxy* p = proxy;
    Node* n = node;
    if (!p)
        invalid_parameter_noinfo();
    S* container = p ? p->container : 0;
    if (n == container->head)
        invalid_parameter_noinfo();
    return n;
}

void S::serialize(void* output)
{
    writeValue(output, value);

    Iterator i;
    i.node = head->left;
    i.proxy = proxy;

    for (;;) {
        Proxy* p = i.proxy;
        Node* n = i.node;
        Node* end = head;
        Proxy* owner = proxy;
        if (!p || p != owner)
            invalid_parameter_noinfo();
        if (n == end)
            break;

        writeValue(output, i.checked()->value);
        {
            String temporary = text(i.checked()->key);
            writeString(output, temporary);
        }
        i.advance();
    }
}
