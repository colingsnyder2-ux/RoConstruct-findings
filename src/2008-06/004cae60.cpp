// from server: 61% by colin
struct Node;

struct Sender
{
    char pad[8];
    double value;
    bool compare(Node* a, Node* b, Node* c);
};

struct Node
{
    char pad0[8];
    double value;
    char pad1[0x58];
    Node* next;
};

extern "C" Node* __cdecl sub_4C6710(Node** p);
extern "C" Node* __cdecl sub_4C66C0(Node** p);

bool Sender::compare(Node* a, Node* b, Node* c)
{
    Node* self = (Node*)((char*)this - 0xc);
    Node* first = self->next;
    Node* firstNode = first ? (Node*)((char*)first - 0x60) : 0;

    if (c != firstNode)
    {
        Node* tmp = c ? (Node*)((char*)c + 0x60) : 0;
        Node* r = sub_4C6710(&tmp);
        Node* rn = r ? (Node*)((char*)r - 0x60) : 0;
        if (rn->value == a->value)
            return false;
    }

    Node* tmp2 = c ? (Node*)((char*)c + 0x60) : 0;
    Node* r2 = sub_4C66C0(&tmp2);
    Node* rn2 = r2 ? (Node*)((char*)r2 - 0x60) : 0;

    Node* self2 = (Node*)((char*)this - 0xc);
    if (rn2 != self2->next)
    {
        if (a->value == rn2->value)
            return false;
    }

    return true;
}
