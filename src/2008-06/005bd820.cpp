// from server: 89% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Value {
    void invoke();
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    int key;
    Value* value;
    int reserved;
    unsigned char color;
    unsigned char nil;
};

struct Tree;

struct Iterator {
    Tree** owner;
    Node* node;
};

struct Tree {
    Tree** owner;
    char reserved[20];
    Node* head;

    Iterator end(const int& key);
};

struct S {
    char reserved[316];
    Tree tree;

    void f(int key);
};

void S::f(int key)
{
    Tree& t = tree;
    Iterator it = t.end(key);
    Tree** owner = reinterpret_cast<Tree** volatile&>(it.owner);
    Node* head = t.head;
    Tree** expected = reinterpret_cast<Tree** volatile&>(t.owner);
    void (__cdecl* invalid)() = _invalid_parameter_noinfo;

    if (!owner || owner != expected)
        invalid();

    Node* node = reinterpret_cast<Node* volatile&>(it.node);
    if (node != head) {
        if (!owner)
            invalid();
        else
            owner = reinterpret_cast<Tree**>(*owner);

        if (node == reinterpret_cast<Tree*>(owner)->head)
            invalid();

        node->value->invoke();
    }
}
