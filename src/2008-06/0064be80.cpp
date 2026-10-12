// from server: 89% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Item;

struct Node {
    Node* next;
    char padding[8];
    Item* value;
};

struct Container {
    char padding[24];
    Node* head;
};

struct Owner {
    Container* container;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void increment();
};

struct Buffer {
    char data[24];
    void insert(Item* const*);
    void clear(int, int);
};

struct Stage {
    char padding0[16];
    Buffer first;
    Buffer second;
    char padding1[256];
    Owner* volatile owner;
    char padding2[20];
    Node* head;

    int classify(Item*);
    void process(Buffer*, int);
    void run();
};

void Stage::run()
{
    Iterator iterator;
    Node* current = head->next;
    Owner* currentOwner = owner;
    iterator.node = current;
    iterator.owner = currentOwner;

    for (;;) {
        Node* end = head;
        Owner* expected = owner;

        if (!currentOwner || currentOwner != expected)
            _invalid_parameter_noinfo();

        if (current == end)
            break;

        Container* container = reinterpret_cast<Container*>(currentOwner);
        if (currentOwner)
            container = currentOwner->container;
        else
            _invalid_parameter_noinfo();

        if (current == container->head)
            _invalid_parameter_noinfo();

        Item* value = current->value;
        switch (classify(value)) {
        case 3:
            second.insert(&value);
            break;
        case 5:
            first.insert(&value);
            break;
        }

        iterator.increment();
        current = iterator.node;
        currentOwner = iterator.owner;
    }

    process(&second, 2);
    process(&first, 5);
    second.clear(0, 0);
    first.clear(0, 0);
}
