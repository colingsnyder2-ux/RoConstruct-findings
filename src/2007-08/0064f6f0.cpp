// from server: 46% by colin
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef unsigned char BYTE;
typedef void* HMODULE;
typedef void* HRSRC;
typedef void* HGLOBAL;

extern "C" __declspec(dllimport) HRSRC __stdcall FindResourceA(HMODULE, const char*, const char*);
extern "C" __declspec(dllimport) HGLOBAL __stdcall LoadResource(HMODULE, HRSRC);
extern "C" __declspec(dllimport) void* __stdcall LockResource(HGLOBAL);

struct CXTPCommandBar
{
    BYTE m_pad[0xf8];
    void* m_pResourceModule;

    int LoadFromResource(WORD nID, int bParam);
};

extern "C" void* __stdcall sub_67A660(void*);
extern "C" void* __stdcall sub_630478(WORD, int);
extern "C" void* __stdcall sub_62FF32(unsigned int);
extern "C" void __stdcall sub_62FF26(void*);
extern "C" void* __stdcall sub_64EEA0(void*);
extern "C" void* __stdcall sub_64F4F0(void*, void*, unsigned int);
extern "C" void* __stdcall sub_643AC0(void*);
extern "C" void* __stdcall sub_64E040(void*, void*, void*, unsigned int, unsigned int, unsigned int, int);

int CXTPCommandBar::LoadFromResource(WORD nID, int bParam)
{
    sub_67A660(m_pResourceModule);

    void* hRes = sub_630478(nID, 0xf1);
    if (hRes != 0)
        return 0;

    void* hRes2 = LoadResource((HMODULE)hRes, (HRSRC)hRes);
    if (hRes2 == 0)
        return 0;

    void* pData = LockResource(hRes2);
    if (pData == 0)
        return 0;

    WORD* pInfo = (WORD*)pData;
    unsigned int count = pInfo[3];
    unsigned int size = count * 4;
    if (count != 0 && size / 4 != count)
        size = 0xffffffff;

    DWORD* pArray = (DWORD*)sub_62FF32(size);
    for (unsigned int i = 0; i < (unsigned int)pInfo[3]; i++)
    {
        WORD* pSrc = (WORD*)sub_64EEA0(pData);
        pArray[i] = pSrc[i];
    }

    int result = (int)sub_64F4F0(this, pArray, pInfo[3]);

    if (bParam != 0)
    {
        void* pObj = sub_643AC0(this);
        int r = (int)sub_64E040(pObj, pArray, (void*)bParam, pInfo[3], pInfo[1], pInfo[2], 0);
        if (r == 0)
            result = 0;

        if (pInfo[1] != 0x10)
        {
            *(DWORD*)((BYTE*)this + 0x108) = pInfo[1];
            *(DWORD*)((BYTE*)this + 0x10c) = pInfo[2];
        }
    }

    sub_62FF26(pArray);
    return result;
}
