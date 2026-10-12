// from server: 83% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Item;
struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Item** position;

    Vector* container() const;
    Iterator operator-(int count) const;
    Item*& operator*() const;
};

struct Vector {
    void* iteratorOwner;
    Proxy* proxy;
    unsigned int reserved;
    Item** begin;
    Item** end;
    Item** capacity;

    void insert(Iterator* result, void* owner, Item** position,
                Item* const* value);
};

struct Source {
    unsigned int reserved0;
    Proxy* proxy;
    unsigned int reserved1;
    unsigned int reserved2;
    Item** volatile begin;
    Item** volatile end;

    Iterator last();
};

struct Destination {
    unsigned int reserved;
    Vector items;
};

struct Item {
    Destination* object;
};

extern "C" void __cdecl detach(Vector* container, Item** item);

inline Vector* Iterator::container() const
{
    return owner ? owner->container : 0;
}

inline Iterator Iterator::operator-(int count) const
{
    Iterator result = *this;
    if (!owner)
        _invalid_parameter_noinfo();

    if (position - count > container()->end ||
        position - count < container()->begin)
        _invalid_parameter_noinfo();

    result.position -= count;
    return result;
}

inline Item*& Iterator::operator*() const
{
    if (!owner)
        _invalid_parameter_noinfo();

    if (position >= container()->end)
        _invalid_parameter_noinfo();

    return *position;
}

inline Iterator Source::last()
{
    Item** position = end;
    if (begin > position)
        _invalid_parameter_noinfo();

    Iterator result;
    result.owner = proxy;
    result.position = position;
    return result;
}

void __cdecl transfer(Source* source, Destination* destination)
{
    while (source->end - source->begin != 0) {
        Item* item = *(source->last() - 1);

        if (item->object) {
            Item* owner = item;
            detach(&item->object->items, &owner);
            item->object = 0;
        }

        if (destination) {
            Vector* target = &destination->items;
            Item* value = item;
            unsigned int capacity = target->begin
                ? static_cast<unsigned int>(target->capacity - target->begin)
                : 0;
            Item** position = target->end;

            if (static_cast<unsigned int>(position - target->begin) <
                capacity) {
                *position = item;
                ++position;
                target->end = position;
            } else {
                if (target->begin > position)
                    _invalid_parameter_noinfo();

                Iterator result;
                target->insert(&result, target->iteratorOwner, position,
                               &value);
            }

            item->object = destination;
        }
    }
}
