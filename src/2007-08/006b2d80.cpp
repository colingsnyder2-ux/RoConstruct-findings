// from server: 91% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall FindResourceA(void*, const char*, const char*);
    __declspec(dllimport) void* __stdcall LoadResource(void*, void*);
    __declspec(dllimport) void* __stdcall LockResource(void*);
    __declspec(dllimport) unsigned long __stdcall SizeofResource(void*, void*);
    __declspec(dllimport) void* __stdcall CreateIconFromResourceEx(unsigned char*, unsigned long, int, unsigned long, int, int, unsigned int);
    __declspec(dllimport) int __stdcall LookupIconIdFromDirectoryEx(unsigned char*, int, int, int, unsigned int);
}

struct CXTPResourceManager {
    void* LoadIcon(void* hInstance, const char* lpName, int cx, int cy);
};

void* CXTPResourceManager::LoadIcon(void* hInstance, const char* lpName, int cx, int cy) {
    void* hRes = FindResourceA(hInstance, lpName, (const char*)0xe);
    if (hRes == 0) {
        return 0;
    }
    void* hData = LoadResource(hInstance, hRes);
    unsigned char* pData = (unsigned char*)LockResource(hData);
    int id = LookupIconIdFromDirectoryEx(pData, 1, cx, cy, 0);
    void* hIconRes = FindResourceA(hInstance, (const char*)(unsigned short)id, (const char*)3);
    if (hIconRes == 0) {
        return 0;
    }
    void* hIconData = LoadResource(hInstance, hIconRes);
    unsigned char* pIconData = (unsigned char*)LockResource(hIconData);
    unsigned long size = SizeofResource(hInstance, hIconRes);
    return CreateIconFromResourceEx(pIconData, size, 1, 0x30000, cx, cy, 0);
}
