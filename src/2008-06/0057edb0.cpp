// from server: 42% by colin



extern "C" void __stdcall _invalid_parameter_noinfo();

typedef bool (__cdecl *Pred)(int);

int* find_if(int* first, int* last, Pred pred)
{
    while (first != last)
    {
        if (pred(*first))
            break;
        ++first;
    }
    return first;
}

struct ClearBackpack
{
    char pad0[0x13c];
    int* first;
    char pad1[8];
    int* last;
    int* end;
    int Clear(int pred);
};

int ClearBackpack::Clear(int pred)
{
    int* f = first;
    int* l = last;
    if (f > l)
        _invalid_parameter_noinfo();
    f = first;
    l = last;
    if (f > l)
        _invalid_parameter_noinfo();
    int* result = find_if(f, l, (Pred)pred);
    int* newLast = last;
    if (first > newLast)
        _invalid_parameter_noinfo();
    int* oldFirst = first;
    if (oldFirst != 0 && oldFirst == first)
    {
    }
    else
    {
        _invalid_parameter_noinfo();
    }
    if (result != newLast)
    {
        if (oldFirst == 0)
        {
            _invalid_parameter_noinfo();
            if (result < *(int**)((char*)oldFirst + 0x10))
                _invalid_parameter_noinfo();
        }
        else
        {
            oldFirst = *(int**)oldFirst;
            if (result < *(int**)((char*)oldFirst + 0x10))
                _invalid_parameter_noinfo();
        }
        return *result;
    }
    return 0;
}
