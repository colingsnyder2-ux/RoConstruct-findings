// from server: 80% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    signed char key;
    unsigned char color;
    unsigned char nil;
};

struct Iterator
{
    void* owner;
    Node* node;
};

struct S
{
    void* owner;
    unsigned char padding[20];
    Node* head;

    Iterator* f(Iterator* result, const signed char* key);
};

Iterator* S::f(Iterator* result, const signed char* key)
{
    Node* candidate = head;
    Node* current = head->parent;

    while (!current->nil)
    {
        if (current->key < *key)
            current = current->right;
        else
        {
            candidate = current;
            current = current->left;
        }
    }

    Iterator found;
    Iterator end;
    found.owner = owner;
    found.node = candidate;
    Node* sentinel = head;

    if (!found.owner || found.owner != owner)
        _invalid_parameter_noinfo();

    Iterator* selected;
    if (candidate != sentinel && !(*key < candidate->key))
        selected = &found;
    else
    {
        end.node = head;
        end.owner = owner;
        selected = &end;
    }

    *result = *selected;
    return result;
}
