// from server: 45% by colin
// roc 2008-06 004cf2e0  unit: RBX::Network::PhysicsSender  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf2e0

extern "C" void __cdecl free(void*);

struct Node {
    Node* next;
    int pad;
    int a;
    int b;
};

struct List {
    Node* head;
    Node* head2;
    int count;
    int count2;
};

struct PhysicsSender {
    List list1;
    List list2;
    void clear();
};

void PhysicsSender::clear() {
    void (__cdecl* fn)(void*) = free;
    int i = 0;
    if (list1.count > 0) {
        Node* n = list1.head;
        fn((void*)n->a);
        fn((void*)n->b);
        Node* cur = n;
        n = n->next;
        while (n != list1.head) {
            fn((void*)cur);
            fn((void*)n->a);
            fn((void*)n->b);
            cur = n;
            n = n->next;
        }
        fn((void*)cur);
    }
    if (list2.count > 0) {
        Node* n = list2.head;
        fn((void*)n->a);
        fn((void*)n->b);
        Node* cur = n;
        n = n->next;
        while (n != list2.head) {
            fn((void*)cur);
            fn((void*)n->a);
            fn((void*)n->b);
            cur = n;
            n = n->next;
        }
        fn((void*)cur);
    }
    list2.count = 0;
    list1.count = 0;
}
