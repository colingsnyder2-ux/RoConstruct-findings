// from server: 91% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

namespace std {
struct string {
    char storage[28];
    string(const char*);
    ~string();
};

struct runtime_error {
    void* table;
    void* exception_data;
    string text;
    runtime_error(const string&);
    runtime_error(const runtime_error&);
    ~runtime_error();
};
}

struct Node {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void connect(Node*);
    char storage[88];
    Node(void*, int, int);
};

struct Client {
    virtual void slot0();
    virtual void changed();
};

struct Link {
    Link* next;
    Link* previous;
    Node* value;
};

struct Chain {
    char storage[20];
    Link* head;
    unsigned int count;
    Client* client;
    char reserved[8];
    int default_size;
    unsigned int flags;

    Node** last();
    Link* insert(Link*, Link*, Node**);
    void grow(int);
};

struct Owner {
    Node* pointer;
    Owner(Node*);
    ~Owner();
};

inline Owner::Owner(Node* value) : pointer(value)
{
}

inline Owner::~Owner()
{
    if (pointer)
        operator delete(pointer);
}

struct Stream {
    Chain* chain;
    void append(void*, int, int);
};

void Stream::append(void* source, int buffer_size, int putback_size)
{
    if (chain->flags & 1) {
        std::string message("chain complete");
        throw std::runtime_error(message);
    }

    Node* previous;
    if (chain->count)
        previous = *chain->last();
    else
        previous = 0;

    if (buffer_size == -1)
        buffer_size = 4096;
    if (putback_size == -1)
        putback_size = chain->default_size;

    Owner owner(new Node(source, buffer_size, putback_size));

    Chain* current = chain;
    Link* head = current->head;
    Node* value = owner.pointer;
    Link* inserted = current->insert(head, head->previous, &value);
    current->grow(1);
    head->previous = inserted;
    inserted->previous->next = inserted;
    chain->flags |= 3;
    owner.pointer = 0;

    if (previous)
        previous->connect(*chain->last());

    current = chain;
    if (current->client)
        current->client->changed();
}
