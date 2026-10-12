// from server: 90% by king_originala
namespace ATL {
    void __stdcall AtlThrowImpl(long hr);
}

extern "C" {
    extern unsigned int (__cdecl *strnlen)(const char *, unsigned int);
    extern int (__cdecl *_mbsnbcpy_s)(
        unsigned char *, unsigned int, const unsigned char *, unsigned int);
}

void __cdecl CheckResult(int result);

struct S {
    char padding0[0x122];
    unsigned char enabled;
    char padding1[0x80];
    unsigned char buffer[0x81];
    char padding2[0x1238 - 0x224];
    unsigned int length;

    int f(const char *text);
};

int S::f(const char *text)
{
    if (!text)
        ATL::AtlThrowImpl((long)0x80004005UL);

    if (*text && !enabled)
        return 0;

    unsigned int count = strnlen(text, 0x81);
    if (count > 0x80)
        return 0;

    CheckResult(_mbsnbcpy_s(
        buffer, 0x81, (const unsigned char *)text, count));

    length = count;
    return 1;
}
