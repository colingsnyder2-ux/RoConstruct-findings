// from server: 93% by king_originala
extern void (__cdecl *invalid_parameter)();

struct Item {
    char padding[0x194];
    int value;
};

struct Container {
    char padding[0x10];
    Item** end;
};

struct Proxy {
    Container* container;
};

struct Iterator {
    Proxy* proxy;
    Item** volatile position;
};

struct S {
    char padding[0x13c];
    Proxy* volatile proxy;
    char gap[8];
    Item** begin;
    Item** end;

    Item* find(int value);
};

Item* S::find(int value)
{
    Item** last = end;
    if (begin > last)
        invalid_parameter();

    Item** current = begin;
    if (current > end)
        invalid_parameter();

    Proxy* owner = proxy;
    Iterator saved;
    saved.position = current;

    while (current != last) {
        if ((*current)->value != value)
            break;
        ++current;
    }

    last = end;
    if (begin > last)
        invalid_parameter();

    Proxy* otherOwner = proxy;
    void (__cdecl *handler)();
    if (!owner || owner != otherOwner) {
        handler = invalid_parameter;
        handler();
    } else {
        handler = invalid_parameter;
    }

    if (current != last) {
        if (!owner)
            handler();
        else
            owner = reinterpret_cast<Proxy*>(owner->container);

        if (current >= reinterpret_cast<Container*>(owner)->end)
            handler();

        return *current;
    }

    return 0;
}
