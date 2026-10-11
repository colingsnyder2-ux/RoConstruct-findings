// from server: 76% by colin
struct Node {
    char pad[0x44];
    int value;
};

struct List {
    Node* head;
};

struct Sender {
    bool compare(Node* a, Node* b, Node* c);
};

extern "C" Node* __stdcall sub_4c6710(Node** p);
extern "C" Node* __stdcall sub_4c66c0(Node** p);

bool Sender::compare(Node* a, Node* b, Node* c) {
    Node* first;
    if (this != 0) {
        first = (Node*)((char*)this - 0xc);
    } else {
        first = 0;
    }
    List* lst = *(List**)((char*)first + 4);
    Node* n = *(Node**)((char*)lst + 0x54);
    if (n != 0) {
        n = (Node*)((char*)n - 0x50);
    } else {
        n = 0;
    }
    if (c == n) {
        goto label_afae;
    }
    {
        Node* tmp;
        if (c != 0) {
            tmp = (Node*)((char*)c + 0x50);
        } else {
            tmp = 0;
        }
        Node* r = sub_4c6710(&tmp);
        Node* rr;
        if (r != 0) {
            rr = (Node*)((char*)r - 0x50);
        } else {
            rr = 0;
        }
        if (b->value < rr->value) {
            return false;
        }
    }
label_afae:
    {
        Node* tmp2;
        if (c != 0) {
            tmp2 = (Node*)((char*)c + 0x50);
        } else {
            tmp2 = 0;
        }
        Node* r2 = sub_4c66c0(&tmp2);
        Node* rr2;
        if (r2 != 0) {
            rr2 = (Node*)((char*)r2 - 0x50);
        } else {
            rr2 = 0;
        }
        Node* first2;
        if (this != 0) {
            first2 = (Node*)((char*)this - 0xc);
        } else {
            first2 = 0;
        }
        if (rr2 != *(Node**)((char*)first2 + 4)) {
            if (rr2->value < b->value) {
                return false;
            }
        }
    }
    return true;
}
