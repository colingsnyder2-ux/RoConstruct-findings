// from server: 61% by king_originala
struct Tree;

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned key;
    unsigned value;
    unsigned char color;
    unsigned char nil;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void next();
};

struct Tree {
    Owner* owner;
    unsigned char padding[20];
    Node* head;

    Iterator* lower(Iterator* result, const unsigned* key);
    Iterator* erase(Iterator* result, Iterator position);
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct S {
    unsigned char padding[48];
    Tree tree;
    void f(unsigned value, unsigned key);
};

void S::f(unsigned value, unsigned key)
{
    if (!key)
        return;

    Tree* t = &tree;
    Iterator temporary;
    Iterator current = *t->lower(&temporary, &key);
    Owner* owner = current.owner;
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

        Owner* expected = t->owner;
        if (!owner || owner != expected)
            invalid_parameter_noinfo();

        if (node == end)
            break;

        Tree* container;
        if (!owner) {
            invalid_parameter_noinfo();
            container = 0;
        } else {
            container = owner->tree;
        }

        if (node == container->head)
            invalid_parameter_noinfo();

        if (node->value == value) {
            Iterator position;
            position.owner = owner;
            position.node = node;
            t->erase(&temporary, position);
            break;
        }

        current.next();
        node = current.node;
        owner = current.owner;
    }
}
