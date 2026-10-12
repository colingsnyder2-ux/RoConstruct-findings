// from server: 84% by colin
typedef unsigned int size_t;
typedef long HRESULT;

extern "C" {
    size_t __cdecl strnlen(const char* str, size_t maxsize);
    int __cdecl _mbsnbcpy_s(char* dst, size_t sizeInBytes, const char* src, size_t count);
}

void __stdcall AtlThrowImpl(HRESULT hr);

struct VCAppCComObject {
    char pad[0x122];
    char field_0x122;
    char pad2[0x1238 - 0x123];
    int field_0x1238;
    int SetSomething(char* p);
};

int VCAppCComObject::SetSomething(char* p)
{
    if (p == 0)
        AtlThrowImpl(0x80004005);
    if (*p != 0 && this->field_0x122 == 0)
        return 0;
    size_t len = strnlen(p, 0x81);
    if (len > 0x80)
        return 0;
    _mbsnbcpy_s((char*)this + 0x1a3, 0x81, p, len);
    this->field_0x1238 = (int)len;
    return 1;
}
