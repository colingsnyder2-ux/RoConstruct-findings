// from server: 91% by king_originala
struct Iterator
{
    void* owner;
    void* position;
};

struct S
{
    bool predicate(void*, void*);
    int f(Iterator first, Iterator last);
};

extern void* __cdecl search(void*, void*, bool (S::*)(void*, void*), S*);
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

int S::f(Iterator first, Iterator last)
{
    Iterator result = first;
    result.position = search(first.position, last.position, &S::predicate, this);

    if (!result.owner || result.owner != last.owner)
        _invalid_parameter_noinfo();

    return result.position == last.position;
}
