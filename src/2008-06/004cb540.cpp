// from server: 97% by king_originala
extern int bounds[30];

extern "C" int* __cdecl selectCount(const int*, const int*, const int*, int);

struct Node {
    Node* next;
};

extern "C" Node** __cdecl allocateSlots(unsigned int, int);

struct S {
    int count;
    int unused;
    unsigned int capacity;
    Node** slots;

    S(void*, Node*, int);
};

S::S(void*, Node* node, int requested)
{
    int key = requested;
    int* selected = selectCount(bounds + 1, bounds + 29, &key, 0);
    if (selected == bounds + 29)
        --selected;

    count = *selected;
    capacity = count + 1;
    slots = capacity ? allocateSlots(capacity, 0) : 0;

    Node** current = slots;
    Node** end = slots + count;
    while (current != end) {
        *current = reinterpret_cast<Node*>(current);
        ++current;
    }

    slots[count] = node;
    node->next = reinterpret_cast<Node*>(slots + count);
}
