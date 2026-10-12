// from server: 85% by king_originala




typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;
template<class C, class T, class A>
class basic_string {
    unsigned char storage[28];
public:
    basic_string(const C*);
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Error {
    unsigned char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Component;
struct ComponentTable {
    void* unused[14];
    void (__thiscall* connect)(Component*, Component*);
};
struct Component {
    ComponentTable* table;
};

struct Notification;
struct NotificationTable {
    void* unused;
    void (__thiscall* notify)(Notification*);
};
struct Notification {
    NotificationTable* table;
};

struct Filter {
    unsigned char storage[160];
    Filter(void*, int, int);
    ~Filter();
};

struct Node {
    Node* next;
    Node* previous;
};

struct Chain {
    unsigned char reserved[20];
    Node* head;
    unsigned int count;
    Notification* notification;
    unsigned char reserved2[8];
    int bufferSize;
    unsigned char flags;

    Component** current();
    Node* insert(Node*, Node*, Filter* const*);
    void update(int);
};

struct Owner {
    Filter* value;
    explicit Owner(Filter* p) : value(p) {}
    ~Owner() { if (value) delete value; }
};

struct S {
    Chain* chain;
    void f(void*, int, int);
};

void S::f(void* source, int size, int bufferSize)
{
    if (chain->flags & 1) {
        String message("chain complete");
        throw Error(message);
    }

    Component* previous = chain->count ? *chain->current() : 0;

    if (size == -1)
        size = 128;
    if (bufferSize == -1)
        bufferSize = chain->bufferSize;

    Owner owner(new Filter(source, size, bufferSize));

    Chain* c = chain;
    Node* head = c->head;
    size = reinterpret_cast<int>(owner.value);
    Node* node = c->insert(head, head->previous,
                         reinterpret_cast<Filter* const*>(&size));
    c->update(1);
    head->previous = node;
    node->previous->next = node;
    owner.value = 0;

    if (previous)
        previous->table->connect(previous, *chain->current());

    if (chain->notification)
        chain->notification->table->notify(chain->notification);
}
