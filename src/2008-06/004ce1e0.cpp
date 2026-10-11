// from server: 47% by colin
// roc 2008-06 004ce1e0  unit: RBX::Network::PhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce1e0

struct Node {
    Node* field0;
    Node* field4;
    Node* field8;
};

struct Tree {
    int count;
    Node* field4;
    Node* field8;

    void insert(Node** key);
};

extern "C" void __stdcall sub_4cde00(Node** p);
extern "C" void __stdcall sub_4cded0(Node** p);

void Tree::insert(Node** key) {
    Node* root = *(Node**)this;
    if (root != 0) {
        sub_4cde00(key);
        return;
    }
    Node* saved = field4;
    if (saved != 0) {
        field8 = saved;
    }
    Node* cur = field8;
    int depth = 0;
    unsigned int keyval = *(unsigned int*)(*key + 4);
    while (*(unsigned int*)(cur->field0 + 4) < keyval) {
        Node* next = cur->field8;
        if (next != saved) {
            field8 = next;
        }
        depth++;
        if (depth == (int)root) {
            if (saved != 0) {
                field8 = saved->field4;
            }
            sub_4cded0(key);
            return;
        }
        cur = field8;
    }
    sub_4cde00(key);
}
