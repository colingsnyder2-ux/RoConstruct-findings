// from server: 74% by king_originala
extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
}

struct Iterator {
    void* owner;
    void** position;
};

struct Container {
    void* owner;
    unsigned char padding[8];
    void** first;
    void** last;

    void remove(void* const* value);
    Iterator erase(Iterator position);
};

struct Change {
    void* removed;
    void* unused;
    void* added;
};

struct Selection {
    unsigned char padding[12];
    Container values;

    void update(Change* change);
};

void Selection::update(Change* change)
{
    void* value = change->removed;
    if (value)
        values.remove(&value);

    value = change->added;
    if (value) {
        Container* container = &values;

        void** finish = container->last;
        if (container->first > finish)
            _invalid_parameter_noinfo();

        void** current = container->first;
        if (current > container->last)
            _invalid_parameter_noinfo();

        void* originalOwner = container->owner;
        Iterator found;
        found.position = current;

        while (current != finish && *current != value)
            ++current;

        finish = container->last;
        if (container->first > finish)
            _invalid_parameter_noinfo();

        void* currentOwner = container->owner;
        if (!originalOwner || originalOwner != currentOwner)
            _invalid_parameter_noinfo();

        if (current != finish) {
            found.owner = originalOwner;
            found.position = current;
            container->erase(found);
        }
    }
}
