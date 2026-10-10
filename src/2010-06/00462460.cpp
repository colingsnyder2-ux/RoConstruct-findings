// from server: 57% by atomic.potato
struct S
{
};

void __cdecl f(unsigned int value, unsigned int *result)
{
    if (value != 4)
    {
        value = value;
        return;
    }

    *result = 0xb83aa0;
    ((unsigned char *)result)[4] = 0;
    ((unsigned char *)result)[5] = 0;
}
