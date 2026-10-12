// from server: 83% by king_originala
extern "C" __declspec(noreturn) void __stdcall fail(long);
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" void __cdecl check(int);

extern "C" int (__cdecl * _mbsicmp)(
    const unsigned char *, const unsigned char *);
extern "C" int (__cdecl * _mbsnbcpy_s)(
    unsigned char *, unsigned int, const unsigned char *, unsigned int);

struct SchemeEntry
{
    const unsigned char *name;
    unsigned int length;
    unsigned short port;
    unsigned short padding;
};

extern SchemeEntry schemes[8];

struct S
{
    unsigned char buffer[0x1226];
    unsigned short port;
    int scheme;
    unsigned int length;

    int setScheme(const unsigned char *);
};

int S::setScheme(const unsigned char *text)
{
    if (!text)
        fail(0x80004005L);

    unsigned int index;
    for (index = 0; index < 8; ++index)
    {
        if (schemes[index].name &&
            _mbsicmp(text, schemes[index].name) == 0)
            goto found;
    }
    goto unknown;

found:
    if (index == static_cast<unsigned int>(-1))
        goto unknown;

    scheme = index;
    length = schemes[index].length;
    port = schemes[index].port;
    goto copy;

unknown:
    scheme = -1;
    length = strlen(reinterpret_cast<const char *>(text));
    if (length > 32)
        return 0;
    port = 0;

copy:
    check(_mbsnbcpy_s(buffer, 33, text, length));
    buffer[length] = 0;
    return 1;
}
