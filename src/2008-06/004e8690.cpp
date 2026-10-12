// from server: 95% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Key
{
    unsigned char padding[12];
    int value;

    bool less(const Key& other) const;
};

struct Node
{
    unsigned char padding[12];
    Key key;
};

struct Iterator
{
    void* owner;
    Node* node;

    bool equal(void* otherOwner, Node* otherNode) const;
};

struct S
{
    void* owner;
    unsigned char padding[20];
    Node* head;

    Node* lower_bound(const Key* key);
    Iterator find(const Key* key);
};

inline bool Key::less(const Key& other) const
{
    if (value < other.value)
        return true;
    if (value > other.value)
        return false;
    return this < &other;
}

inline bool Iterator::equal(void* otherOwner, Node* otherNode) const
{
    if (!(owner && owner == otherOwner))
        invalid_parameter_noinfo();
    return node == otherNode;
}

Iterator S::find(const Key* key)
{
    Iterator found;
    found.node = lower_bound(key);

    if (!this)
        invalid_parameter_noinfo();

    found.owner = owner;
    Node* last = head;

    Iterator finish;
    Iterator* selected;

    if (!found.equal(owner, last) && !key->less(found.node->key))
    {
        selected = &found;
    }
    else
    {
        finish.node = head;
        finish.owner = owner;
        selected = &finish;
    }

    return *selected;
}
