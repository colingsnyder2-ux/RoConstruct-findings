// from server: 66% by atomic.potato
extern "C" void __cdecl sub_402b80(unsigned long);

extern "C" int __cdecl _mbscmp(const unsigned char *, const unsigned char *);

int f(const unsigned char **a, const unsigned char *b)
{
    const unsigned char *p = b;
    if (!p)
    {
        sub_402b80(0x80004005UL);
    }
    return _mbscmp(*a, p) != 0;
}
