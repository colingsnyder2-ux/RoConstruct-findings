// from server: 92% by atomic.potato
struct S_func_0052d990 {
    unsigned int __cdecl f(unsigned int value);
};

unsigned int __cdecl S_func_0052d990::f(unsigned int value)
{
    value = *(unsigned int*)value;
    return value + (value >> 3);
}
