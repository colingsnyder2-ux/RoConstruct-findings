// from server: 50% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    Node* parent;
};

struct Tree {
    char pad[0x18];
    Node* head;
    int count;

    void insert_unique(Node** out, Node* first, Node* last);
    void _Erase(Node* node);
};

void Tree::_Erase(Node* node) {
    Node* head = this->head;
    if (node != 0 && node != (Node*)this) {
        _invalid_parameter_noinfo();
    }
    if (node == head->next) {
        Node* last = this->head;
        if (node != 0 && node != (Node*)this) {
            _invalid_parameter_noinfo();
        }
        if (node == last->next) {
            this->_Erase(this->head->prev);
            this->head->prev = this->head;
            this->count = 0;
            this->head->next = this->head;
            this->head->parent = this->head;
            return;
        }
    }
    if (node != 0 && node != this->head) {
        _invalid_parameter_noinfo();
    }
    if (node != this->head) {
        Node* tmp;
        this->insert_unique(&tmp, node, node);
        node = tmp;
    }
}
