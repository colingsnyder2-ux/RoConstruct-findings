// from server: 66% by king_originala
struct Node {
    Node* next;
};

struct Target {
    void set(int value);
};

struct S {
    int reserved0;
    Target* target;
    int reserved8;
    int mode;
    int value;
    int reserved14;
    Node* first;
    char reserved1C[20];
    Node* last;

    void visit(Node*);
    void f();
};

struct Iterator {
    Node* node;
    Node* owner;

    Iterator(Node* n, Node* o) : node(n), owner(o) {}
};

struct Action {
    void (S::*function)(Node*);
    S* object;

    Action(void (S::*fn)(Node*), S* obj)
        : function(fn), object(obj) {}
};

Action __cdecl operate(Iterator first, Iterator last, Action action);

void S::f()
{
    switch (mode) {
    case 1:
        operate(Iterator(first, first),
                Iterator(last->next, last),
                Action(&S::visit, this));
        target->set(value);
        break;

    case 2:
        operate(Iterator(first, first),
                Iterator(last->next, last),
                Action(&S::visit, this));
        break;

    case 3:
        target->set(0);
        break;
    }
}
