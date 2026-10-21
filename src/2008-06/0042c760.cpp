// from server: 87% by EspClaude
// from server: 85% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espclaude_8fda9c6852c9301e.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Payload;
typedef boost::detail::shared_count CountHandle;
struct Shared {
    Payload* value;
    CountHandle count;
    Shared(Payload*);
};

extern "C" void __cdecl prepare(CountHandle*, Payload*, Payload*);

Shared::Shared(Payload* p) : value(p), count(p)
{
    prepare(&count, p, p);
}



struct Binder;

struct Payload {
    char storage[32];
    Payload(Shared, int, Binder*);
};

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
        Shared item(new Payload(source, argument, this));

        Node* head = list.head;
        Node* node = list.insert(head, head->previous, &item);
        list.grow(1);
        head->previous = node;
        node->previous->next = node;
    }
    update();
}

