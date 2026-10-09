// from server: 47% by colin
// roc 2007-08 004a9200  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9200

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    int value;
};

struct Map {
    Node* head;
};

struct FactoryProduct {
    int find(Map* map, int key);
};

int FactoryProduct::find(Map* map, int key) {
    Node* node = map->head;
    if (node == 0) {
        _invalid_parameter_noinfo();
    }
    Node* end = node;
    if (end == node) {
        _invalid_parameter_noinfo();
    }
    Node* cur = end->next;
    Node* other = map->head;
    if (node != other) {
        _invalid_parameter_noinfo();
    }
    if (cur == other->next) {
        Node* first = other->next;
        Node* n = first->next;
        if (n == first) {
            _invalid_parameter_noinfo();
        }
        return n->value;
    }
    if (cur == node->next) {
        _invalid_parameter_noinfo();
    }
    return cur->value;
}
