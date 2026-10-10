// from server: 32% by colin
struct EnumItem {
    int a;
    int b;
    int c;
};

struct EnumDesc {
    char pad[0x10];
    EnumItem* begin;
    EnumItem* end;
    EnumItem* cap;
    int f(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int EnumDesc::f(int arg)
{
    EnumItem* first = begin;
    EnumItem* last = end;
    EnumItem* capPtr = cap;

    if (first > capPtr)
        _invalid_parameter_noinfo();

    EnumItem* e = end;
    if (begin > e)
        _invalid_parameter_noinfo();

    EnumItem* b = begin;
    if (b > end)
        _invalid_parameter_noinfo();

    int result = 0;
    if (b != first)
        result = 1;
    return result;
}
