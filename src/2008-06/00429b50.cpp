// from server: 74% by king_originala
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

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

const Iterator& __cdecl helper(Iterator*, void*, void*, void*, void*, Iterator);

Iterator __cdecl reconstruct(Iterator first, Iterator last, Iterator extra)
{
    Owner* lastOwner = last.owner ? *last.owner : 0;
    void* lastValue = lastOwner->value;
    Owner* firstOwner = first.owner ? *first.owner : 0;
    void* firstValue = firstOwner->value;

    Iterator temporary;
    Iterator result = helper(&temporary, firstValue, first.position,
                             lastValue, last.position, extra);

    if (first.owner != result.owner)
        _invalid_parameter_noinfo();

    Iterator output;
    output.owner = first.owner;
    output.position = result.position;
    return output;
}
