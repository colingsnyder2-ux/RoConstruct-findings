// from server: 99% by colin
struct Node
{
    char padding0[0x44];
    int key;
    char padding1[0x0c];
    Node* left;
    Node* right;
};

struct Owner
{
    char padding0[4];
    Node* anchor;
};

struct Result
{
    int right;
    Node* link;
};

struct S
{
    bool find(int key, Result* result, int unused);
};

bool S::find(int key, Result* result, int unused)
{
    Node* previous = (this ? (Owner*)((char*)this - 12) : 0)->anchor;
    unsigned int root =
        (this ? (Owner*)((char*)this - 12) : 0)->anchor->key & ~1u;
    Node* current = root ? (Node*)(root - 0x50) : 0;
    bool left = true;

    while (current)
    {
        previous = current;
        Node* next;
        left = key < current->key;
        if (left)
        {
            next = current->left;
        }
        else
        {
            next = current->right;
        }
        current = next ? (Node*)((char*)next - 0x50) : 0;
    }

    result->right = !left;
    result->link = previous ? (Node*)((char*)previous + 0x50) : 0;
    return true;
}
