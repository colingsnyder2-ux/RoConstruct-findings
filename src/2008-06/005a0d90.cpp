// from server: 87% by king_originala
struct Node
{
    char padding[0x104];
    Node* next;
};

Node* __cdecl f(Node* node)
{
    Node* current = node->next;
    Node* previous = current;
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
