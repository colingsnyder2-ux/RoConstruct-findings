// from server: 37% by atomic.potato
extern "C" void __cdecl _invalid_parameter_noinfo();

struct S
{
    unsigned int* f(unsigned int);
    unsigned int GetCount();
    unsigned int* data;
};

unsigned int S::GetCount()
{
    return 0;
}

unsigned int* S::f(unsigned int index)
{
    unsigned int count = GetCount();
    if (index >= count)
        _invalid_parameter_noinfo();
    return data + index;
}
