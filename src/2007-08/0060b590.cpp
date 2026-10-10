// from server: 66% by colin
struct Node {
    char pad0[8];
    Node* field8;
    Node* fieldC;
    char pad10[0x14];
    int field24;
};

struct Container {
    Node* field0;
    char pad4[4];
    Node* field8;
};

struct Outer {
    char pad0[4];
    Container* field4;
};

struct Target {
    void method(Node* n);
};

extern "C" Node* __stdcall sub_5B4DC0(Container* c);
extern "C" Node* __stdcall sub_5B4DE0(Container* c, Node* n);

void Target::method(Node* n) {
    Container* c = (Container*)n;
    Node* cur = sub_5B4DC0(c);
    while (cur != 0) {
        Node* a = cur->field8;
        Node* b = cur->fieldC;
        Node* chosen;
        if (b->field8 == a) {
            chosen = a;
        } else if (a->field8 == b) {
            chosen = b;
        } else {
            chosen = 0;
        }
        if (chosen != 0 && chosen == n) {
            if (n == a) {
                a = b;
            }
            a->field24 = n->field24 + 1;
            this->method(a);
        }
        cur = sub_5B4DE0(c, cur);
    }
}
