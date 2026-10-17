// from server: 71% by colin
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    unsigned value;
    unsigned char color;
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;
};

struct Tree {
    void* owner;
    unsigned char padding[20];
    Node* head;
    Iterator* lower(Iterator* result, const unsigned* key);
    void erase(Iterator* result, Iterator position);
};

struct S {
    unsigned char padding[48];
    Tree tree;
    void f(unsigned value, unsigned key);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void S::f(unsigned value, unsigned key)
{
    if (!key)
        return;

    Tree* t = &tree;
    Iterator temporary;
    Iterator current;
    t->lower(&current, &key);

    void* owner = current.owner;
    Node* node = current.node;

    for (;;) {
        Node* head = t->head;
        Node* p = head->parent;
        Node* end = head;

        while (!p->nil) {
            if (key < p->key) {
                end = p;
                p = p->left;
            } else {
                p = p->right;
            }
        }

        void* expected = t->owner;
        if (!owner || owner != expected)
            _invalid_parameter_noinfo();

        if (node == end)
            break;

        void* container;
        if (!owner) {
            _invalid_parameter_noinfo();
            container = 0;
        } else {
            container = *(void**)owner;
        }

        if (node == ((Tree*)container)->head)
            _invalid_parameter_noinfo();

        if (node->value == value) {
            Iterator position;
            position.owner = owner;
            position.node = node;
            t->erase(&temporary, position);
            break;
        }

        current.node = node->right;
        node = current.node;
        owner = current.owner;
    }
}
