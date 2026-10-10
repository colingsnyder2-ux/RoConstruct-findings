// from server: 82% by atomic.potato
extern "C" int __cdecl sub_56bf90();
extern "C" void __cdecl invalid_parameter_noinfo();

struct S
{
};

void __cdecl f(int* result)
{
    int* p = (int*)sub_56bf90();
    int value = p[3];
    int limit = p[4];
    if (value >= limit)
        invalid_parameter_noinfo();
    result[1] = limit;
    result[0] = p[0];
}
