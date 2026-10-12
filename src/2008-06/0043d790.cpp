// from server: 90% by king_originala
struct Interface {
    virtual void apply(int value);
};

struct Base {
    char padding[0x24];
    void apply(int value);
};

struct Vector3Item : Base {
    char* children[3];
    void apply(int value);
};

void Vector3Item::apply(int value)
{
    Base::apply(value);

    char** current = children;
    int remaining = 3;
    do {
        if (*current)
            reinterpret_cast<Interface*>(*current + 0x10c)->apply(value);
        ++current;
    } while (--remaining);
}
