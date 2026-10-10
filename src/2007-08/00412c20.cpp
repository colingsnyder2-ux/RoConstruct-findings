// from server: 76% by colin
struct VCContent_CComAggObject
{
    char pad[0x122];
    char flag122;
    char pad2[0x80];
    char buf1a3[0x81];
    char pad3[0x1238 - 0x1a3 - 0x81];
    int field1238;
    int SetName(const char* name);
};

extern "C" int __stdcall sub_00401000(unsigned int hr);
extern "C" int __stdcall sub_004016e0(char* dst, const char* src, unsigned int count);
extern "C" unsigned int __stdcall strnlen(const char* s, unsigned int maxlen);
extern "C" int __stdcall _mbsnbcpy_s(char* dst, unsigned int dstsize, const char* src, unsigned int count);

int VCContent_CComAggObject::SetName(const char* name)
{
    if (name == 0)
    {
        sub_00401000(0x80004005);
    }
    if (name[0] != 0 && this->flag122 == 0)
    {
        return 0;
    }
    unsigned int len = strnlen(name, 0x81);
    if (len > 0x80)
    {
        return 0;
    }
    _mbsnbcpy_s(this->buf1a3, 0x81, name, len);
    sub_004016e0(this->buf1a3, name, len);
    this->field1238 = (int)len;
    return 1;
}
