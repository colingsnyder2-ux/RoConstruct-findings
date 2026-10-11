// from server: 59% by atomic.potato
extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);

struct Node {
    char pad0[0x104];
    Node* next;
};

struct Holder {
    char pad0[0x104];
    Node* node;
};

Node* __cdecl find(Holder* h) {
    Node* n = h->node;
    if (sub_6A17C6(0, 0x92907c, 0x9481b8, 0, (int)n) == 0) {
        Node* result = (Node*)h;
        for (;;) {
            n = h->node;
            if (sub_6A17C6(0, 0x92907c, 0x948618, 0, (int)n) != 0)
                result = n;
            if (sub_6A17C6(0, 0x92907c, 0x9481b8, 0, (int)n->next) == 0)
                break;
        }
        return result;
    }
    return (Node*)h;
}
