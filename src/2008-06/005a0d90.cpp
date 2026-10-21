// from server: 98% by colin
struct Node
{
    char padding[0x104];
    Node* next;
};

Node* __cdecl f(Node* node)
{
    Node* current = node->next;
    Node* previous = node->next;
    Node* following = previous->next;

    while (following->next)
    {
        previous = following;
        following = following->next;
    }

    while (current != previous)
    {
        node = current;
        current = node->next;
    }

    return node;
}
