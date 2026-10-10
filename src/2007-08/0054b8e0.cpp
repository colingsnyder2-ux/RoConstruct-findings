// from server: 52% by colin
extern "C" int __stdcall memcpy_s(void* dst, unsigned int dstSize, const void* src, unsigned int count);
extern "C" void __stdcall sub_401000(unsigned int code);
extern "C" void __stdcall sub_413140(void* p);

struct UString_sink
{
    char* buf;
    int write(const char* src, int n);
};

int UString_sink::write(const char* src, int n)
{
    char* base = buf;
    int len = *(int*)(base - 0xc);
    int cap = *(int*)(base - 8);
    int flag = *(int*)(base - 4);

    int newLen = len + n;
    int need = (1 - flag) | (cap - newLen);
    if (need < 0)
    {
        sub_413140((void*)newLen);
    }

    char* dst;
    if ((unsigned int)(newLen - len) > (unsigned int)len)
    {
        dst = buf + len;
    }
    else
    {
        dst = buf + len;
    }

    memcpy_s(dst, n, src, n);

    if (newLen >= 0 && newLen <= *(int*)(buf - 8))
    {
        *(int*)(buf - 0xc) = newLen;
        buf[newLen] = 0;
        return n;
    }

    sub_401000(0x80070057);
    return n;
}
