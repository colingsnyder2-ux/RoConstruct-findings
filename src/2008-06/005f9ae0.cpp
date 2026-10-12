// from server: 96% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern void (__thiscall *string_constructor)(void*, const char*);

namespace std {
template<class C> struct char_traits;
template<class C> class allocator;

template<class C, class T, class A>
class basic_string {
    char data[28];
public:
    basic_string(const C*);
    ~basic_string();
};

template<class C, class T, class A>
inline basic_string<C, T, A>::basic_string(const C* text)
{
    string_constructor(this, text);
}

typedef basic_string<char, char_traits<char>, allocator<char> > string;

class logic_error {
    char data[40];
public:
    logic_error(const string&);
    logic_error(const logic_error&);
    ~logic_error();
};
}

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
    virtual void notify(Stream*);
    char storage[88];

    Stream(void*, int, int);
};

struct Callback {
    virtual void v0();
    virtual void notify();
};

struct Node {
    Node* next;
    Node* previous;
    Stream* value;
};

struct Chain {
    char padding[20];
    Node* head;
    int count;
    Callback* callback;
    char padding2[8];
    int defaultSize;
    unsigned int flags;

    Stream** current();
    Node* insert(Node*, Node*, Stream**);
    void grow(int);
};

struct Owner {
    Stream* pointer;
    Owner(Stream*);
    ~Owner();
};

inline Owner::Owner(Stream* p) : pointer(p) {}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct S {
    Chain* chain;
    void f(void*, int, int);
};

void S::f(void* source, int bufferSize, int putbackSize)
{
    if (chain->flags & 1)
        throw std::logic_error(std::string("chain complete"));

    Stream* previous;
    if (chain->count)
        previous = *chain->current();
    else
        previous = 0;

    if (bufferSize == -1)
        bufferSize = 4096;

    int putback = putbackSize;
    if (putback == -1)
        putback = chain->defaultSize;

    Owner owner(new Stream(source, bufferSize, putback));
    Chain* c = chain;
    Node* head = c->head;
    putbackSize = reinterpret_cast<int>(owner.pointer);
    Node* node = c->insert(head, head->previous,
                          reinterpret_cast<Stream**>(&putbackSize));
    c->grow(1);
    head->previous = node;
    node->previous->next = node;
    chain->flags |= 3;
    owner.pointer = 0;

    if (previous)
        previous->notify(*chain->current());

    c = chain;
    if (c->callback)
        c->callback->notify();
}
