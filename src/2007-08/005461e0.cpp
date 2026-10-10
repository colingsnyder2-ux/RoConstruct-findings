// from server: 53% by colin
struct MD5HasherImpl {
    void* contextPtr;
    int addData(const char* data, unsigned int nBytes);
};

extern "C" void* __stdcall FindResourceA(void*, const char*, const char*);
extern "C" int __stdcall WideCharToMultiByte(unsigned int, unsigned int, const wchar_t*, int, char*, int, const char*, int*);
extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void __stdcall ThrowLastError(const char*);

extern "C" void* __stdcall sub_545200(void*, void*, unsigned int);
extern "C" void __stdcall sub_413140(void*, int);
extern "C" void* __stdcall sub_8bab64();

int MD5HasherImpl::addData(const char* data, unsigned int nBytes) {
    void* hRes = FindResourceA(0, (const char*)((nBytes >> 4) + 1), (const char*)6);
    if (hRes == 0) {
        return 0;
    }
    void* pData = sub_545200(0, hRes, nBytes);
    if (pData == 0) {
        return 0;
    }
    unsigned short len = *(unsigned short*)pData;
    void* hModule = sub_8bab64();
    int result = WideCharToMultiByte(0, 0, (const wchar_t*)((char*)pData + 2), len, 0, 0, 0, 0);
    int* strBase = (int*)((char*)this->contextPtr - 16);
    int diff = 1 - strBase[3];
    int avail = strBase[2] - result;
    if ((diff | avail) < 0) {
        sub_413140(this, result);
    }
    char* buf = (char*)this->contextPtr;
    WideCharToMultiByte(0, 0, (const wchar_t*)((char*)pData + 2), len, buf, result, 0, 0);
    if (result >= 0 && result <= *(int*)((char*)this->contextPtr - 8)) {
        *(int*)((char*)this->contextPtr - 0xc) = result;
        buf[result] = 0;
        return 1;
    }
    ThrowLastError((const char*)0x80070057);
    return 0;
}
