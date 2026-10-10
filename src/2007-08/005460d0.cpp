// from server: 42% by colin
extern "C" int __stdcall memcpy_s(void*, unsigned int, const void*, unsigned int);
extern "C" void __stdcall ThrowLastError(unsigned int);

struct MD5HasherImpl
{
    void addData(const char* data, unsigned int nBytes);
};

void MD5HasherImpl::addData(const char* data, unsigned int nBytes)
{
    char* base = *(char**)this;
    unsigned int len = *(unsigned int*)(base - 8);
    unsigned int pos = *(unsigned int*)(base - 12);
    unsigned int end = pos + nBytes;
    if ((int)(1 - pos) < 0 || (int)(len - end) < 0)
    {
        ThrowLastError(0x80070057);
    }
    memcpy_s(base, len, data, nBytes);
    memcpy_s(base + pos, len - pos, data, nBytes);
    if ((int)end >= 0 && (int)end <= (int)len)
    {
        *(unsigned int*)(base - 12) = end;
        base[end] = 0;
    }
    else
    {
        ThrowLastError(0x80070057);
    }
}
