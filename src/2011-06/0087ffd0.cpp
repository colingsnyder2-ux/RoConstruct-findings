// from server: 71% by colin
// roc 2011-06 0087ffd0  unit: CXTPResourceManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087ffd0

extern "C" int __stdcall WideCharToMultiByte(unsigned int CodePage, unsigned long dwFlags,
    const wchar_t* lpWideCharStr, int cchWideChar, char* lpMultiByteStr, int cbMultiByte,
    const char* lpDefaultChar, int* lpUsedDefaultChar);

extern "C" void* __cdecl operator_new(unsigned int size);

struct CXTPResourceManager {
    char* m_str;
    void* GetResourceInstance();
    CXTPResourceManager* LoadString(unsigned int id);
};

CXTPResourceManager* CXTPResourceManager::LoadString(unsigned int id)
{
    void* inst = GetResourceInstance();
    void* hRes = *(void**)((char*)inst + 0xc);
    void* hMod = *(void**)((char*)hRes + 4);
    int len = WideCharToMultiByte(0, 0, (const wchar_t*)id, 0, 0, 0, 0, 0);
    char* buf = (char*)operator_new(len + 1);
    this->m_str = buf;
    WideCharToMultiByte(0, 0, (const wchar_t*)id, len, buf, len + 1, 0, 0);
    buf[len] = 0;
    return this;
}
