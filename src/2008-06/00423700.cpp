// from server: 93% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct S;

struct Entry
{
    S* object;
    unsigned int extra;
};

struct Container
{
    char padding[16];
    Entry* end;
};

struct Iterator
{
    Container** owner;
    Entry* position;
};

struct S
{
    virtual void slot0();
    virtual void slot1();
    virtual bool accepts(S*);
    virtual bool acceptedBy(S*);

    char padding[256];
    S* parent;

    bool ancestorOf(S*);
    bool f(Iterator first, Iterator last);
};

bool S::f(Iterator first, Iterator last)
{
    void (__cdecl *report)() = invalid_parameter_noinfo;

    for (;;)
    {
        if (!first.owner || first.owner != last.owner)
            report();

        if (first.position == last.position)
            break;

        if (!first.owner)
            report();

        Container* container = first.owner ? *first.owner : 0;
        if (first.position >= container->end)
            report();

        S* object = first.position->object;
        if (!object ||
            object->ancestorOf(this) ||
            object->parent == this ||
            (!accepts(object) && !object->acceptedBy(this)))
            return false;

        if (!first.owner)
            report();

        container = first.owner ? *first.owner : 0;
        if (first.position >= container->end)
            report();

        ++first.position;
    }

    return true;
}
