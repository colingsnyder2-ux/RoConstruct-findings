// from server: 91% by colin
// roc 2007-08 00412d00  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412d00

extern "C" unsigned long (__stdcall *strnlen)(const char*, unsigned long);
extern "C" int (__cdecl *_mbsnbcpy_s)(char*, unsigned long, const char*, unsigned long);

struct VCContent_CComAggObject
{
    char pad[0xa25];
    char buf[0x801];
    char pad2[0x1240 - 0xa25 - 0x801];
    unsigned long len;
    int SetContent(const char* src);
};

int VCContent_CComAggObject::SetContent(const char* src)
{
    unsigned long n = strnlen(src, 0x801);
    if (n > 0x800)
        return 0;
    _mbsnbcpy_s(this->buf, 0x801, src, n);
    this->len = n;
    return 1;
}
