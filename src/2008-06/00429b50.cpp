// from server: 78% by king_originala
struct Owner
{
    void* value;
};

struct Iterator
{
    Owner** owner;
    void* position;

    Iterator();
};

inline Iterator::Iterator()
{
}

struct RawIterator
{
    void* value;
    void* position;

    RawIterator(Owner*, void*);
};

inline RawIterator::RawIterator(Owner* owner, void* pos)
    : value(owner->value), position(pos)
{
}

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

const Iterator& __cdecl helper(Iterator*, RawIterator, RawIterator, Iterator);

Iterator __cdecl reconstruct(Iterator first, Iterator last, Iterator extra)
{
    Iterator temporary;
    Iterator result = helper(
        &temporary,
        RawIterator(first.owner ? *first.owner : 0, first.position),
        RawIterator(last.owner ? *last.owner : 0, last.position),
        extra);

    if (first.owner != result.owner)
        _invalid_parameter_noinfo();

    Iterator output;
    output.owner = first.owner;
    output.position = result.position;
    return output;
}
