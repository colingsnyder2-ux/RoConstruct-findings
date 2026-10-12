// from server: 66% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Iterator
{
    void *owner;
    void **position;
};

struct Container
{
    void *owner;
    unsigned char reserved[8];
    void **first;
    void **last;
    void **limit;

    Iterator begin();
    Iterator end();
    Iterator erase(Iterator position);
};

struct Selection
{
    unsigned char reserved[0x15c];
    Container items;

    void remove(void *value);
};

__forceinline Iterator Container::begin()
{
    void **position = first;
    if (position > last)
        invalid_parameter_noinfo();

    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

__forceinline Iterator Container::end()
{
    void **position = last;
    if (first > position)
        invalid_parameter_noinfo();

    Iterator result;
    result.owner = owner;
    result.position = position;
    return result;
}

void Selection::remove(void *value)
{
    Iterator finish = items.end();
    Iterator position = items.begin();

    while (position.position != finish.position)
    {
        if (*position.position == value)
            break;
        ++position.position;
    }

    items.erase(position);
}
