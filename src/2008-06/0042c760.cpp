// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct CountBase {
    long strong;
    long weak;
    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
};

struct Payload;

struct CountHandle {
    CountBase* value;
    CountHandle(Payload*);
    ~CountHandle();
};

CountHandle::~CountHandle()
{
    CountBase* p = value;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Shared {
    Payload* value;
    CountHandle count;
    Shared(Payload*);
    Shared(const Shared&);
};

Shared::Shared(Payload* p) : value(p), count(p)
{
}

Shared::Shared(const Shared& p) : value(p.value), count(p.count)
{
    if (count.value)
        _InterlockedExchangeAdd(&count.value->strong, 1);
}

struct Binder;

struct Payload {
    char storage[32];
    Payload(Shared, int, Binder*);
};

void __cdecl prepare(CountHandle*, Payload*, Payload*);

struct Node {
    Node* next;
    Node* previous;
};

struct List {
    char storage[20];
    Node* head;
    Node* insert(Node*, Node*, const Shared*);
    void grow(unsigned int);
};

struct Binder {
    char storage[12];
    List list;
    void update();
    void bind(Shared, int);
};

void Binder::bind(Shared source, int argument)
{
    {
        Payload* p = new Payload(source, argument, this);
        Shared item(p);
        prepare(&item.count, p, p);

        Node* head = list.head;
        Node* node = list.insert(head, head->previous, &item);
        list.grow(1);
        head->previous = node;
        node->previous->next = node;
    }
    update();
}
