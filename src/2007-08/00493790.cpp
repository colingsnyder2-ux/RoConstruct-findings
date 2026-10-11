// from server: 66% by colin
// roc 2007-08 00493790  unit: RBX::Network::VPlayers::?$Notifier  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493790

struct Notifier {
    void apply(void (*fn)(void*, void*), void* a, void* b, void* c);
};

void Notifier::apply(void (*fn)(void*, void*), void* a, void* b, void* c) {
    struct Node {
        Node* next;
        int pad;
        void* data;
    };
    Node* cur = (Node*)a;
    Node* end = (Node*)b;
    while (cur != end) {
        fn(&cur->data, c);
        cur = cur->next;
    }
    void** out = (void**)c;
    out[0] = (void*)fn;
    out[1] = (void*)a;
    out[2] = (void*)b;
}
