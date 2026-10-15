// from server: 90% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Key {
    int id;
    float a;
    float b;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    char padding[9];
    unsigned char nil;
};

struct S {
    char padding[24];
    Node* head;

    Node* find(const Key& key);
};

Node* S::find(const Key& key)
{
    Node* node = head->parent;
    Node* result = head;
    if (!node->nil) {
        do {
            if (node->key.id < key.id ? true :
                key.id < node->key.id ? false :
                node->key.a < key.a ? true :
                key.a < node->key.a ? false :
                node->key.b < key.b) {
                node = node->right;
            } else {
                result = node;
                node = node->left;
            }
        } while (!node->nil);
    }
    return result;
}
