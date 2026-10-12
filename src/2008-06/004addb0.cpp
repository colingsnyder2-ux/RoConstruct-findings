// from server: 58% by king_originala
extern "C" void (__cdecl* invalidParameter)();

struct String;
extern void (__thiscall* destroyString)(String*);

struct String {
    void* proxy;
    char storage[16];
    unsigned int length;
    unsigned int capacity;
    ~String();
};

inline String::~String()
{
    destroyString(this);
}

struct S;

struct Proxy {
    S* container;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    unsigned int value;
};

struct Iterator {
    Proxy* owner;
    Node* node;
    void increment();
};

struct S {
    Proxy* proxy;
    unsigned char padding[20];
    Node* head;
    unsigned int value;

    String get(unsigned int key);
    void f(void* output);
};

extern void __cdecl writeValue(void* output, unsigned int value);
extern void __cdecl writeString(void* output, const String& value);

void S::f(void* output)
{
    writeValue(output, value);

    Iterator it;
    it.node = head->left;
    it.owner = proxy;

    for (;;) {
        Node* node = it.node;
        Proxy* owner = it.owner;
        Node* finish = head;
        Proxy* currentOwner = proxy;

        if (!owner || owner != currentOwner)
            invalidParameter();

        if (node == finish)
            break;

        S* container;
        if (owner) {
            container = owner->container;
        } else {
            invalidParameter();
            container = 0;
        }

        if (node == container->head)
            invalidParameter();

        writeValue(output, node->value);

        if (owner) {
            container = owner->container;
        } else {
            invalidParameter();
            container = 0;
        }

        if (node == container->head)
            invalidParameter();

        {
            String text = get(node->key);
            writeString(output, text);
        }

        it.increment();
    }
}
