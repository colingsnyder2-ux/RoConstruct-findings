// from server: 65% by colin
extern "C" unsigned int __stdcall strnlen(const char* str, unsigned int maxlen);
extern "C" int __cdecl _mbsnbcpy_s(char* dest, unsigned int destSize, const char* src, unsigned int count);

struct VCAppCComObject
{
    int __stdcall f(const char* src);
};

int __stdcall VCAppCComObject::f(const char* src)
{
    unsigned int len = strnlen(src, 0x801);
    if (len > 0x800)
        return 0;
    _mbsnbcpy_s((char*)this + 0xa25, 0x801, src, len);
    *(unsigned int*)((char*)this + 0x1240) = len;
    return 1;
}
