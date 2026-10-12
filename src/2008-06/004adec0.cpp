// from server: 91% by king_originala
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

void S::serialize(void* output)
{
    writeValue(output, value);

    Iterator i;
    Node* n = head->left;
    Proxy* p = proxy;
    i.node = n;
    i.proxy = p;

    for (;;) {
        Node* end = head;
        Proxy* owner = proxy;
        if (!p || p != owner)
            invalid_parameter_noinfo();
        if (n == end)
            break;

        if (!p)
            invalid_parameter_noinfo();
        S* container = p ? p->container : 0;
        if (n == container->head)
            invalid_parameter_noinfo();

        writeValue(output, n->value);

        if (!p)
            invalid_parameter_noinfo();
        container = p ? p->container : reinterpret_cast<S*>(p);
        if (n == container->head)
            invalid_parameter_noinfo();

        {
            String temporary = text(n->key);
            writeString(output, temporary);
        }

        i.advance();
        n = i.node;
        p = i.proxy;
    }
}
