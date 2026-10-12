// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern "C" void (__cdecl *invalidParameter)();

__forceinline String::String(const String& other) {
    stringCopy(this, other);
}

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Object {
    char padding[20];
    char value;
};

struct E {
    char padding[28];
    String text;
    Object* object;
    unsigned unused;
    Shared shared;

    E(const E&);
    ~E();
};

struct Node {
    Node* next;
    Node* previous;
    E value;
};

struct List;

struct Proxy {
    List* owner;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
};

struct List {
    Proxy* proxy;
    char padding[16];
    Node* head;
    unsigned size;

    Node* allocate(Node*, Node*, const E&);
    void grow(unsigned);
    Iterator erase(Iterator);
};

struct Consumer {
    char storage[72];
    void consume(E);
};

struct Configuration {
    char padding[304];
    unsigned limit;
};

extern Configuration* __cdecl configuration();

struct Dispatcher {
    void send(void*, String, Shared);
};

struct S {
    char padding[304];
    Consumer consumer;
    List list;

    void f(const E*);
};

void S::f(const E* value) {
    Node* head = list.head;
    Node* node = list.allocate(head, head->previous, *value);
    list.grow(1);
    head->previous = node;
    node->previous->next = node;

    while (list.size > configuration()->limit) {
        Proxy* proxy = list.proxy;
        Node* first = list.head;

        if (!proxy)
            invalidParameter();

        first = first->previous;
        List* owner = proxy ? proxy->owner : 0;

        if (first == owner->head)
            invalidParameter();

        Iterator position;
        position.proxy = proxy;
        position.node = first;
        list.erase(position);
    }

    consumer.consume(*value);

    void* object = value->object ? &value->object->value : 0;
    reinterpret_cast<Dispatcher*>(0x96fca0)->send(
        object, value->text, value->shared);
}
