// from server: 93% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Error {
    char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Stream {
    virtual ~Stream();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void connect(Stream*);

    char storage[88];
    Stream(void*, int, int);
};

struct Node {
    Node* next;
    Node* previous;
    Stream* value;
};

struct Notification {
    virtual void v0();
    virtual void changed();
};

struct Chain {
    char padding[20];
    Node* head;
    unsigned int count;
    Notification* notification;
    char reserved[8];
    int default_buffer;
    unsigned int flags;

    Stream** last();
    Node* insert(Node*, Node*, Stream* const*);
    void adjust(int);
};

struct Owner {
    Stream* value;
    explicit Owner(Stream* p) : value(p) {}
    ~Owner() { if (value) delete value; }
    void release() { value = 0; }
};

struct S {
    Chain* chain;
    void f(void*, int, int);
};

void S::f(void* source, int buffer_size, int putback_size)
{
    if (chain->flags & 1) {
        String message("chain complete");
        throw Error(message);
    }

    Stream* previous = chain->count ? *chain->last() : 0;

    if (buffer_size == -1)
        buffer_size = 4096;
    if (putback_size == -1)
        putback_size = chain->default_buffer;

    Owner pending(new Stream(source, buffer_size, putback_size));
    {
        Chain* current = chain;
        Node* head = current->head;
        Stream* value = pending.value;
        Node* node = current->insert(head, head->previous, &value);
        current->adjust(1);
        head->previous = node;
        node->previous->next = node;
        chain->flags |= 3;
        pending.release();
    }

    if (previous)
        previous->connect(*chain->last());

    Chain* current = chain;
    if (current->notification)
        current->notification->changed();
}
