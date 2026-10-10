// from server: 48% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall FindResourceA(void*, const char*, const char*);
    __declspec(dllimport) void* __stdcall LoadResource(void*, void*);
    __declspec(dllimport) void* __stdcall LockResource(void*);
    __declspec(dllimport) unsigned long __stdcall SizeofResource(void*, void*);
    __declspec(dllimport) void* __stdcall CreateCompatibleDC(void*);
    __declspec(dllimport) void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned long);
    __declspec(dllimport) void __stdcall DeleteDC(void*);
    __declspec(dllimport) void __stdcall DeleteObject(void*);
    __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
    __declspec(dllimport) void* __stdcall GetCurrentProcess();
    __declspec(dllimport) void* __stdcall malloc(unsigned int);
    __declspec(dllimport) void __stdcall free(void*);
}

struct CXTPCommandBar {
    void* sub_7383E2();
    void* sub_7383D0(void*);
    void* sub_7383DC();
    void* sub_647A90(void*, void*, unsigned int);
    void* sub_649260(void*, const char*, const char*);
};

void* CXTPCommandBar::sub_649260(void* param_1, const char* param_2, const char* param_3) {
    void* hRes;
    void* hResData;
    void* pRes;
    unsigned long resSize;
    void* hDC;
    void* hBitmap;
    void* pBits;
    void* pResult;
    void* pTemp;
    unsigned int size;
    void* local_1c;
    void* local_18;
    void* local_14;
    void* local_10;

    hRes = FindResourceA(param_1, param_2, param_3);
    if (hRes != 0) {
        return 0;
    }

    hResData = LoadResource(param_1, hRes);
    if (hResData == 0) {
        return 0;
    }

    pRes = LockResource(hResData);
    if (pRes == 0) {
        return 0;
    }

    size = *(unsigned int*)((char*)pRes + 8) * *(unsigned int*)((char*)pRes + 4);
    size = size * 4;

    local_18 = 0;

    if (*(unsigned short*)((char*)pRes + 0xe) == 0x20) {
        resSize = SizeofResource(param_1, hRes);
        if (resSize >= size + 0x28) {
            sub_7383E2();
            local_14 = 0;
            local_10 = 0;
            sub_7383D0(GetCurrentProcess());
            hBitmap = malloc(0x34);
            sub_647A90(hBitmap, pRes, 0x28);
            *(unsigned int*)((char*)hBitmap + 0x14) = size;
            hDC = CreateCompatibleDC(0);
            pResult = CreateDIBSection(hDC, hBitmap, 0, &pBits, 0, 0);
            if (pResult != 0 && pBits != 0) {
                sub_647A90(pBits, (char*)pRes + 0x28, size);
                local_18 = pResult;
            }
            free(hBitmap);
            sub_7383DC();
        }
    }

    return local_18;
}
