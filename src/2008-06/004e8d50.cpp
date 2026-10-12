// from server: 53% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Key
{
    unsigned char unused[12];
    int number;
    unsigned char data[12];
};

inline bool lessKey(const Key& a, const Key& b)
{
    if (a.data < b.data)
        return true;
    if (a.data > b.data)
        return false;
    if (a.number < b.number)
        return true;
    if (a.number > b.number)
        return false;
    return &a < &b;
}

struct Node
{
    Node* left;
    Node* parent;
    Node* right;
    Key key;
    unsigned char color;
    unsigned char nil;
};

struct Iterator
{
    void* owner;
    Node* node;
    void func_004386e0();
};

struct Result
{
    Iterator iterator;
    bool inserted;
};

struct S
{
    void* owner;
    unsigned char unused[20];
    Node* head;

    Iterator* func_004e7cd0(Iterator* result, bool left,
                          Node* parent, const Key& key);
    Result* func_004e8d50(Result* result, const Key& key);
};

Result* S::func_004e8d50(Result* result, const Key& key)
{
    Node* parent = head;
    Node* current = parent->parent;
    bool left = true;

    while (!current->nil)
    {
        parent = current;
        left = lessKey(key, current->key);
        if (left)
            current = current->left;
        else
            current = current->right;
    }

    Iterator position;
    position.owner = owner;
    position.node = parent;

    if (left)
    {
        Node* first = head->left;
        if (!position.owner || position.owner != owner)
            _invalid_parameter_noinfo();

        if (parent == first)
        {
            Iterator temporary;
            result->iterator = *func_004e7cd0(&temporary, true, parent, key);
            result->inserted = true;
            return result;
        }

        position.func_004386e0();
    }

    if (lessKey(position.node->key, key))
    {
        Iterator temporary;
        result->iterator = *func_004e7cd0(&temporary, left, parent, key);
        result->inserted = true;
        return result;
    }

    result->iterator = position;
    result->inserted = false;
    return result;
}
