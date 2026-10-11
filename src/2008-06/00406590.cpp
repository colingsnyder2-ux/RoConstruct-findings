// from server: 84% by colin
extern "C" unsigned int __stdcall strnlen(const char*, unsigned int);
extern "C" int __cdecl _mbsnbcpy_s(unsigned char*, unsigned int, const unsigned char*, unsigned int);

struct VCAppCComObject {
    int method(char* src);
};

int VCAppCComObject::method(char* src) {
    unsigned int len = strnlen(src, 0x801);
    if (len > 0x800)
        return 0;
    _mbsnbcpy_s((unsigned char*)this + 0x224, 0x801, (const unsigned char*)src, len);
    *(unsigned int*)((char*)this + 0x123c) = len;
    return 1;
}
