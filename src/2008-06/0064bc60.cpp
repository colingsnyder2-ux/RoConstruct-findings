// from server: 76% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct State {
    char pad[24];
    int* kind;
};

struct Flags {
    char pad[48];
    unsigned char enabled;
};

struct Primitive {
    char pad[160];
    Flags* flags;
    int f();
};

struct Edge {
    char pad[12];
    Primitive* first;
    Primitive* second;
};

struct Node {
    Node* next;
    char pad[8];
    Edge* edge;
};

struct Container {
    char pad[24];
    Node* head;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* proxy;
    Node* node;
    void advance();
};

struct Queue {
    char pad[32];
    void insert(Edge** edge);
    void clear(int first, int second);
};

struct S {
    char pad0[184];
    Queue queue;
    unsigned char enabled;
    char pad1[223];
    Proxy* proxy;
    char pad2[20];
    Node* head;

    void process(Queue* queue, int mode);
    void f();
};

void S::f()
{
    Iterator it;
    Node* node = *reinterpret_cast<Node* volatile*>(head);
    Proxy* current = proxy;
    it.proxy = current;
    it.node = node;

    for (;;) {
        Node* end = head;
        Proxy* owner = static_cast<volatile S*>(this)->proxy;

        if (!current || current != owner)
            invalid_parameter_noinfo();

        if (node == end)
            break;

        if (current)
            goto valid;
        invalid_parameter_noinfo();

    checked:
        if (node == reinterpret_cast<Container*>(current)->head)
            invalid_parameter_noinfo();

        {
            Edge* edge = node->edge;
            Primitive* first = edge->first;
            Primitive* second = edge->second;

            if (!(enabled && first->flags->enabled && second->flags->enabled)) {
                State* secondState = reinterpret_cast<State*>(second->f());
                State* firstState = reinterpret_cast<State*>(first->f());

                int* kind = firstState->kind;
                if (kind) {
                    int value = *kind;
                    if (value == 3 || value == 1 || value == 2)
                        goto next;
                }

                kind = secondState->kind;
                if (kind) {
                    int value = *kind;
                    if (value == 3 || value == 1 || value == 2)
                        goto next;
                }

                queue.insert(&edge);
            }
        }

    next:
        it.advance();
        node = it.node;
        current = it.proxy;
        continue;

    valid:
        current = reinterpret_cast<Proxy*>(current->container);
        goto checked;
    }

    process(&queue, 2);
    queue.clear(0, 0);
}
