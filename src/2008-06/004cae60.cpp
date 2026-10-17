// from server: 77% by colin
struct Node {
    char pad[8];
    double val;
};

struct Container {
    char pad[4];
    Node* head;
};

struct Sender {
    char pad[4];
    Container* container;
    bool compare(Node* a, Node* b, Node* c);
};

extern "C" Node* __cdecl sub_4c6710(Node** p);
extern "C" Node* __cdecl sub_4c66c0(Node** p);

bool Sender::compare(Node* a, Node* b, Node* c) {
    Node* first;
    if (this) {
        Container* cont = *(Container**)((char*)this - 12 + 4);
        Node* n = *(Node**)((char*)cont + 0x64);
        first = n ? (Node*)((char*)n - 0x60) : 0;
    } else {
        first = 0;
    }

    if (c != first) {
        Node* tmp;
        if (c) {
            tmp = (Node*)((char*)c + 0x60);
        } else {
            tmp = 0;
        }
        Node* r = sub_4c6710(&tmp);
        Node* rr = r ? (Node*)((char*)r - 0x60) : 0;
        if (!(b->val < rr->val)) {
            return false;
        }
    }

    Node* tmp2;
    if (c) {
        tmp2 = (Node*)((char*)c + 0x60);
    } else {
        tmp2 = 0;
    }
    Node* r2 = sub_4c66c0(&tmp2);
    Node* rr2 = r2 ? (Node*)((char*)r2 - 0x60) : 0;

    Node* first2;
    if (this) {
        Container* cont = *(Container**)((char*)this - 12 + 4);
        first2 = (Node*)cont;
    } else {
        first2 = 0;
    }

    if (rr2 != first2) {
        if (!(rr2->val < b->val)) {
            return false;
        }
    }

    return true;
}
