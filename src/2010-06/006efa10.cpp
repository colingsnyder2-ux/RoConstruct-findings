// from server: 50% by atomic.potato
struct Node {
    char pad0[4];
    Node* parent;
    Node* left;
    Node* right;
    char pad1[1];
    char color;
    char pad2[2];
    char key[8];
};

struct Tree {
    char pad0[0x18];
    Node* header;
};

struct Result {
    Node* first;
    Node* last;
    Node* it;
    Node* it2;
};

extern "C" int __stdcall string_less(const void*, const void*);

struct HandlesBase {
    char pad0[0x18];
    Node* header;
    Result* find(const char* key, Result* out);
};

Result* HandlesBase::find(const char* key, Result* out) {
    Node* head = this->header;
    Node* node = head->parent;
    Node* lower = head;
    Node* upper = head;
    while (node->color == 0) {
        if (string_less(key, node->key)) {
            upper = node;
            node = node->left;
        } else {
            if (lower->color == 0 && string_less(lower->key, key)) {
                lower = node;
            }
            node = node->right;
        }
    }
    Node* it;
    if (lower->color == 0) {
        it = lower->right;
    } else {
        it = this->header->parent;
    }
    while (it->color == 0) {
        if (string_less(it->key, key)) {
            lower = it;
            it = it->right;
        } else {
            it = it->left;
        }
    }
    out->it = lower;
    out->first = this->header->parent;
    out->last = upper;
    out->it2 = this->header->parent;
    return out;
}
