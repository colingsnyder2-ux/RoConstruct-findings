// from server: 74% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    char color;
    char pad[3];
    int field1c;
};

struct Iter {
    Node* node;
    Node* root;
};

struct S {
    char pad[0x18];
    Node* head;
    bool f();
};

void __fastcall sub_6510f0(Iter* it);

bool S::f() {
    Node* head = this->head;
    Node* root = *(Node**)this;
    Node* cur = head->parent;
    Node* it = root;
    Iter tmp;
    while (true) {
        tmp.root = cur;
        tmp.node = it;
        if (it != 0 && it != root) {
            _invalid_parameter_noinfo();
        }
        if (cur == head) {
            return true;
        }
        if (it == 0) {
            _invalid_parameter_noinfo();
            if (cur == it->parent) {
                _invalid_parameter_noinfo();
            }
            if (cur->field1c != 0) {
                return false;
            }
            sub_6510f0(&tmp);
            cur = tmp.root;
            it = tmp.node;
        } else {
            it = it->parent;
        }
    }
}
