// from server: 89% by king_originala
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    char padding[0x39];
    unsigned char nil;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Iterator {
    void* owner;
    Node* node;

    void decrement();
    void increment();
    bool equal(const Iterator* other) const;
};

struct InsertResult {
    Iterator position;
    bool inserted;
};

struct Tree {
    void* owner;
    char padding[0x14];
    Node* head;
    unsigned size;

    Iterator insert_at(bool left, Node* node, const unsigned& key);
    InsertResult insert(const unsigned& key);
    Iterator insert_hint(Iterator hint, const unsigned& key);
};

Iterator Tree::insert_hint(Iterator hint, const unsigned& key)
{
    if (size == 0)
        return insert_at(true, head, key);

    Node* first = head->left;
    void* expectedOwner = owner;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    if (!hint.owner || hint.owner != expectedOwner)
        invalid();

    if (hint.node == first) {
        if (key < hint.node->key)
            return insert_at(true, hint.node, key);
    } else {
        Node* end = head;
        expectedOwner = owner;
        if (!hint.owner || hint.owner != expectedOwner)
            invalid();

        if (hint.node == end) {
            Node* last = head->right;
            if (last->key < key)
                return insert_at(false, last, key);
        } else {
            if (key < hint.node->key) {
                Iterator before = hint;
                before.decrement();
                if (before.node->key < key) {
                    if (before.node->right->nil)
                        return insert_at(false, before.node, key);
                    return insert_at(true, hint.node, key);
                }
            }

            if (hint.node->key < key) {
                Iterator after = hint;
                Iterator endIterator;
                endIterator.owner = owner;
                endIterator.node = head;
                after.increment();

                if (after.equal(&endIterator) || key < after.node->key) {
                    if (hint.node->right->nil)
                        return insert_at(false, hint.node, key);
                    return insert_at(true, after.node, key);
                }
            }
        }
    }

    return insert(key).position;
}
