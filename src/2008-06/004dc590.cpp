// from server: 89% by colin
// from server: 83% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
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
    Node* node = head->parent;
    Node* result = head;

    while (!node->nil)
    {
        if (node->key.x < key.x ||
            (!(node->key.x > key.x) &&
             (node->key.y < key.y ||
              (!(node->key.y > key.y) &&
               (node->key.z < key.z ||
                (!(node->key.z > key.z) &&
                 (node->key.u < key.u ||
                  (!(node->key.u > key.u) && node->key.i < key.i))))))))
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
