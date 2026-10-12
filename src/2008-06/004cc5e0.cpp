// from server: 69% by king_originala
struct Link
{
    Link *next;
};

struct Value
{
    unsigned int key;
    char padding[108];
    Link link;
};

struct Flag
{
    bool value;
};

struct Buckets
{
    unsigned int count;
    int padding[2];
    Link **data;

    int f(int);
};

struct Table
{
    int padding[2];
    Buckets buckets;
    int unused[2];
    unsigned int first;

    bool assign(Value *, Value *);
    bool locate(Value *, Link ***, Flag);
    bool f(Value *, Value *);
};

bool Table::f(Value * volatile key, Value *value)
{
    Value *original = key;
    if (original->key == value->key)
        return assign(original, value);

    Link *node = &value->link;
    key = reinterpret_cast<Value *>(node->next);
    while (reinterpret_cast<Link *>(key)->next != node)
        key = reinterpret_cast<Value *>(reinterpret_cast<Link *>(key)->next);

    reinterpret_cast<Link *>(key)->next =
        reinterpret_cast<Link *>(key)->next->next;

    unsigned int hash = original->key;
    unsigned int bucket = (hash + (hash >> 3)) % buckets.count;
    Link **position = buckets.data + bucket;
    Flag flag;
    flag.value = false;

    try
    {
        if (locate(original, &position, flag) && assign(original, value))
        {
            node->next = *position;
            *position = node;
            if (first > bucket)
                first = bucket;
            else if (first < bucket)
                first = buckets.f(first);
            return true;
        }
    }
    catch (...)
    {
        value->link.next = reinterpret_cast<Link *>(key)->next;
        reinterpret_cast<Link *>(key)->next = &value->link;
        throw;
    }

    value->link.next = reinterpret_cast<Link *>(key)->next;
    reinterpret_cast<Link *>(key)->next = &value->link;
    return false;
}
