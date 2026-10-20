// from server: 85% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_bindpayload_c29d08ca0c467191.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Payload;
typedef boost::detail::shared_count CountHandle;
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

}

struct Binder;

struct Payload {
    char storage[32];
    Payload(Shared, int, Binder*);
};

extern "C" void __cdecl prepare(CountHandle*, Payload*, Payload*);

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
