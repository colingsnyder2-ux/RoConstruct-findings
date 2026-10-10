// from server: 52% by colin
extern "C" {
    int __stdcall MSVCR80_memcpy_s(void*, unsigned int, const void*, unsigned int);
    int __stdcall MSVCR80_memmove_s(void*, unsigned int, const void*, unsigned int);
}

extern "C" void __stdcall ThrowLastError(const char* message);
extern "C" void __stdcall sub_545930();
extern "C" void __stdcall sub_413140();

struct MD5HasherImpl {
    void* data;
    void addData(const char* data, unsigned int nBytes);
};

void MD5HasherImpl::addData(const char* data, unsigned int nBytes)
{
    if (data == 0) {
        sub_545930();
        return;
    }
    if (nBytes == 0) {
        ThrowLastError((const char*)0x80070057);
    }
    char* base = (char*)this->data;
    int capacity = *(int*)(base - 0xc);
    int length = *(int*)(base - 8);
    int remaining = *(int*)(base - 4);
    int offset = (int)data - (int)base;
    int need = (int)nBytes - length;
    int check = 1 - remaining;
    check |= need;
    if (check < 0) {
        sub_413140();
    }
    if (offset <= capacity) {
        MSVCR80_memcpy_s(base + offset, nBytes, data, nBytes);
    } else {
        MSVCR80_memmove_s(base + offset, nBytes, data, nBytes);
    }
    if ((int)nBytes < 0) {
        ThrowLastError((const char*)0x80070057);
    }
    if ((int)nBytes > *(int*)(base - 8)) {
        ThrowLastError((const char*)0x80070057);
    }
    *(int*)(base - 0xc) = (int)nBytes;
    base[(int)nBytes] = 0;
}
