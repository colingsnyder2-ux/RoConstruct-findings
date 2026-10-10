// from server: 77% by colin
struct MD5HasherImpl {
    void addData(const char* data, unsigned int nBytes);
    void reserve(unsigned int n);
    char* data();
};

extern "C" int __cdecl _vscprintf(const char* format, ...);
extern "C" int __cdecl vsprintf_s(char* buffer, unsigned int sizeOfBuffer, const char* format, ...);
extern "C" void __stdcall ThrowLastError(unsigned int error);

void MD5HasherImpl::addData(const char* data, unsigned int nBytes)
{
    if (data == 0)
    {
        ThrowLastError(0x80070057);
    }

    int len = _vscprintf(data, nBytes);
    char* buf = *(char**)this;
    int cap = *(int*)(buf - 8);
    int pos = *(int*)(buf - 12);
    int need = len - pos;
    int room = 1 - pos;
    if ((room | need) < 0)
    {
        this->reserve(len);
    }
    vsprintf_s(*(char**)this, len + 1, data, nBytes);
    if (len >= 0 && len <= *(int*)(*(char**)this - 8))
    {
        *(int*)(*(char**)this - 12) = len;
        (*(char**)this)[len] = 0;
    }
    else
    {
        ThrowLastError(0x80070057);
    }
}
