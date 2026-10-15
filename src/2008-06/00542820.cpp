// from server: 94% by colin
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
#pragma optimize("", off)

void __cdecl operator delete(void *);

struct Guard {
    void *value;
    bool valid();
    ~Guard();
};

struct S;

struct Node {
    S *value;
    Node *next;
};

struct Control {
    char padding[8];
    Node *head;
};

struct S {
    char padding[4];
    Control *control;

    Guard acquire();
    void detach();
};

void S::detach()
{
    Guard guard = acquire();
    if (guard.valid()) {
        do {
        } while (0);

        Node **link = &control->head;
        while ((*link)->value != this) {
            link = &(*link)->next;
            do {
            } while (0);
        }

        Node *node = *link;
        *link = node->next;
        delete node;
    }
    control = 0;
}
