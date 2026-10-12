// from server: 85% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Key {
    char data[32];
    bool less(const Key& other) const;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    unsigned char color;
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;

    Iterator& decrement();
    Iterator& increment();
    bool equal(const Iterator& other) const;
};

struct InsertResult {
    Iterator first;
    bool second;
};

struct Tree {
    void* owner;
    char padding[20];
    Node* head;
    unsigned count;

    Iterator insertAt(bool left, Node* parent, const Key& value);
    InsertResult insert(const Key& value);
    Iterator insertHint(Iterator hint, const Key& value);
};

Iterator Tree::insertHint(Iterator hint, const Key& value)
{
    if (count == 0)
        return insertAt(true, head, value);

    Node* first = head->left;
    void* container = owner;
    void (__cdecl *invalid)() = _invalid_parameter_noinfo;
    if (!hint.owner || hint.owner != container)
        invalid();

    if (hint.node == first) {
        if (value.less(hint.node->key))
            return insertAt(true, hint.node, value);
    } else {
        Node* last = head;
        container = owner;
        if (!hint.owner || hint.owner != container)
            invalid();

        if (hint.node == last) {
            if (head->right->key.less(value))
                return insertAt(false, head->right, value);
        } else {
            if (value.less(hint.node->key)) {
                Iterator previous = hint;
                previous.decrement();
                Node* predecessor = previous.node;
                if (predecessor->key.less(value)) {
                    if (predecessor->right->nil)
                        return insertAt(false, predecessor, value);
                    return insertAt(true, hint.node, value);
                }
            }

            if (hint.node->key.less(value)) {
                Iterator next = hint;
                Iterator end;
                end.owner = owner;
                end.node = head;
                next.increment();
                bool atEnd = next.equal(end);
                Node* successor = next.node;
                if (atEnd || value.less(successor->key)) {
                    if (hint.node->right->nil)
                        return insertAt(false, hint.node, value);
                    return insertAt(true, successor, value);
                }
            }
        }
    }

    return insert(value).first;
}
