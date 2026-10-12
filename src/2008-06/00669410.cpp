// from server: 46% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Value {
    char padding[0x1c];
    bool marked;
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Value* value;
    unsigned char color;
    unsigned char nil;
};

struct Tree;

struct Proxy {
    Tree* tree;
};

struct Iterator {
    Proxy* owner;
    Node* node;

    void next();
};

struct Tree {
    Proxy* proxy;
    char padding[0x14];
    Node* head;
    unsigned int size;

    void destroy(Node* node);
    Iterator erase(Iterator position);
};

extern "C" void __cdecl release_node(Node* node);

struct TreeStage {
    char padding0[0x14];
    bool active;
    char padding1[0x23];
    Tree pending;
    Tree removing;

    void process(Value* value);
    void remove(Value* value);
    void flush();
};

void TreeStage::flush()
{
    if (active) {
        __declspec(align(8)) Iterator position;
        position.owner = pending.proxy;
        position.node = pending.head->left;

        for (;;) {
            Node* end = pending.head;
            if (!position.owner || position.owner != pending.proxy)
                _invalid_parameter_noinfo();
            if (position.node == end)
                break;

            if (!position.owner)
                _invalid_parameter_noinfo();
            if (position.node == position.owner->tree->head)
                _invalid_parameter_noinfo();

            process(position.node->value);
            position.next();
        }

        Node* node = pending.head->parent;
        while (!node->nil) {
            pending.destroy(node->right);
            Node* old = node;
            node = node->left;
            release_node(old);
        }

        pending.head->parent = pending.head;
        pending.size = 0;
        pending.head->left = pending.head;
        pending.head->right = pending.head;

        while (removing.size != 0) {
            Proxy* owner = removing.proxy;
            Node* first = removing.head->left;

            if (!owner)
                _invalid_parameter_noinfo();
            if (first == (owner ? owner->tree : 0)->head)
                _invalid_parameter_noinfo();

            remove(first->value);

            if (!owner)
                _invalid_parameter_noinfo();
            if (first == (owner ? owner->tree : 0)->head)
                _invalid_parameter_noinfo();

            first->value->marked = false;
            Iterator current;
            current.owner = owner;
            current.node = first;
            position = removing.erase(current);
        }

        active = false;
    }
}
