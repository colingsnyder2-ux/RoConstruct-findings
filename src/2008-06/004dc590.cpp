// from server: 83% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Key
{
    float x, y, z;
    unsigned int u;
    int i;
};

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    char padding[21];
    unsigned char nil;
};

struct S
{
    char padding[24];
    Node* head;
    Node* f(const Key& key);
};

Node* S::f(const Key& key)
{
    Node* result = head;
    Node* node = head->parent;

    while (!node->nil)
    {
        if (node->key.x < key.x ? true :
            node->key.x > key.x ? false :
            node->key.y < key.y ? true :
            node->key.y > key.y ? false :
            node->key.z < key.z ? true :
            node->key.z > key.z ? false :
            node->key.u < key.u ? true :
            node->key.u > key.u ? false :
            node->key.i < key.i)
        {
            node = node->right;
        }
        else
        {
            result = node;
            node = node->left;
        }
    }

    return result;
}
