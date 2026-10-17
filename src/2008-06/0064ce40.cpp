// from server: 84% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Object {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void apply(int);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    Object* value;
};

struct Tree {
    char padding[24];
    Node* head;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
    void next();
};

struct S {
    char padding0[16];
    Owner* volatile owner;
    char padding1[20];
    Node* head;
    void f(int);
};

void S::f(int argument)
{
    Node* currentNode = head->left;
    Owner* currentOwner = owner;
    Iterator it;
    it.node = currentNode;
    it.owner = currentOwner;

    for (;;) {
        Node* endNode = head;
        Owner* endOwner = owner;

        if (!currentOwner || currentOwner != endOwner)
            _invalid_parameter_noinfo();

        if (currentNode == endNode)
            return;

        if (!currentOwner) {
            _invalid_parameter_noinfo();
            currentOwner = reinterpret_cast<Owner*>(currentOwner->tree);
        }

        if (currentNode == reinterpret_cast<Tree*>(currentOwner)->head)
            _invalid_parameter_noinfo();

        currentNode->value->apply(argument);
        it.next();
        currentNode = it.node;
        currentOwner = it.owner;
    }
}
