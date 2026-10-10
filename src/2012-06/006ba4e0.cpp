// from server: 69% by atomic.potato
extern "C" int __cdecl sub_4041B0(unsigned long);
extern "C" int __cdecl _mbscmp(const unsigned char *, const unsigned char *);

int function(unsigned long *a, const unsigned char *b)
{
    unsigned long value = (unsigned long)b;
    if (value == 0)
        sub_4041B0(0x80004005UL);
    return !_mbscmp((const unsigned char *)*a, b);
}
