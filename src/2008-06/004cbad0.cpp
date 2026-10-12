// from server: 68% by king_originala
struct Node {
    unsigned char reserved[8];
    void* object;
};

struct Owner {
    unsigned char reserved[20];
    Node* sentinel;
};

struct Tracker {
    bool tracking();
    void setObject(void* value);
    Node* current();
};

struct Predicate {
    bool accepts(Node* value);
};

extern "C" void (__cdecl *invalid_parameter_handler)();

struct S {
    unsigned char reserved0[16];
    Owner** owner;
    unsigned char reserved1[16];
    Node** first;
    unsigned int count;

    Node* next(Node* value);
    void process(Predicate* predicate, Tracker* tracker, Node* exempt);
};

void S::process(Predicate* predicate, Tracker* tracker, Node* exempt)
{
    if (count) {
        if (!tracker->tracking()) {
            Node* node = *first;
            Owner** proxy = owner;
            void (__cdecl *handler)() = invalid_parameter_handler;
            Owner* container = proxy ? *proxy : (handler(), (Owner*)0);
            if (node == container->sentinel)
                handler();
            tracker->setObject(node->object);
        }

        unsigned int index = 0;
        Node* node = tracker->current();
        while (index < count) {
            Node* previous = node;
            ++index;
            node = next(node);
            if (previous != exempt && !predicate->accepts(previous))
                break;
        }
        tracker->setObject(node);
    }
}
