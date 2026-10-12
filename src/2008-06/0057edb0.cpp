// from server: 93% by king_originala
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

typedef bool (__cdecl *Pred)(int);
int* __cdecl find_if(int* first, int* last, Pred pred);

struct Container
{
    char padding[16];
    int* last;
};

struct Proxy
{
    Container* owner;
};

struct Iterator
{
    Proxy* proxy;
    int* volatile position;
};

struct S
{
    char padding[316];
    Proxy* proxy;
    char padding2[8];
    int* first;
    int* last;

    int f(Pred pred);
};

int S::f(Pred pred)
{
    Iterator iterator;
    int* finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();

    int* start = first;
    if (start > last)
        _invalid_parameter_noinfo();

    Proxy* saved = proxy;
    iterator.position = start;
    int* result = find_if(start, finish, pred);

    finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();

    Proxy* current = *reinterpret_cast<Proxy* volatile*>(&proxy);
    void (__cdecl* invalid)();
    if (!saved || saved != current)
    {
        invalid = _invalid_parameter_noinfo;
        invalid();
    }
    else
        invalid = _invalid_parameter_noinfo;

    if (result != finish)
    {
        if (saved)
            saved = reinterpret_cast<Proxy*>(saved->owner);
        else
            invalid();

        if (result >= reinterpret_cast<Container*>(saved)->last)
            invalid();

        return *result;
    }
    return 0;
}
