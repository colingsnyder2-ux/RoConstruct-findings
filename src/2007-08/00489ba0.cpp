// from server: 30% by colin
struct Node {
    Node* next;
    Node* prev;
    Node* parent;
    char color;
    char pad[3];
};

struct Notifier {
    Node* head;
    int size;
    void construct(Node* first, Node* last);
};

extern "C" Node* __fastcall sub_488160();
extern "C" void __fastcall sub_488FE0(Notifier* self, Node** out, Node* val);

void Notifier::construct(Node* first, Node* last)
{
    Node* sentinel = sub_488160();
    head = sentinel;
    sentinel->color = 1;
    sentinel->next = sentinel;
    sentinel->prev = sentinel;
    sentinel->parent = sentinel;
    size = 0;
    while (first != last) {
        Node* tmp;
        sub_488FE0(this, &tmp, first);
        first = (Node*)((char*)first + 1);
    }
}
