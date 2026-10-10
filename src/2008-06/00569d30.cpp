// from server: 69% by atomic.potato
extern "C" int __cdecl _mbscmp(const unsigned char *, const unsigned char *);

extern "C" void __cdecl sub_401000(unsigned long);

int sub_00569d30(const unsigned char **a, const unsigned char *b)
{
    if (b == 0)
        sub_401000(0x80004005UL);
    return _mbscmp(*a, b) == 0;
}
