// from server: 55% by colin
extern "C" __declspec(dllimport) void* __stdcall FindResourceA(void*, const char*, unsigned short);
extern "C" __declspec(dllimport) void* __stdcall LoadResource(void*, void*);
extern "C" __declspec(dllimport) void* __stdcall LockResource(void*);

extern "C" void* __stdcall sub_630478(unsigned short, unsigned int);
extern "C" void* __stdcall sub_62FF32(unsigned int);
extern "C" void* __stdcall sub_64EEA0(void*);

struct CXTPCommandBar {
    bool GetResourceData(unsigned short id, void** ppData, unsigned int* pSize, unsigned int* pWidth, unsigned int* pHeight);
};

bool CXTPCommandBar::GetResourceData(unsigned short id, void** ppData, unsigned int* pSize, unsigned int* pWidth, unsigned int* pHeight)
{
    void* hRes = sub_630478(id, 0xf1);
    void* hRes2 = FindResourceA(hRes, (const char*)0xf1, id);
    if (hRes2 == 0)
        return false;
    void* hRes3 = LoadResource(hRes, hRes2);
    if (hRes3 == 0)
        return false;
    void* pLocked = LockResource(hRes3);
    if (pLocked == 0)
        return false;
    unsigned short* pData = (unsigned short*)pLocked;
    unsigned int count = pData[3];
    unsigned int* pArr = (unsigned int*)sub_62FF32(count * 4);
    *ppData = pArr;
    *pSize = 0;
    unsigned int i = 0;
    if (pData[3] > 0) {
        unsigned short* pSrc = (unsigned short*)sub_64EEA0(pData);
        while (i < pData[3]) {
            unsigned short val = pSrc[i];
            if (val != 0) {
                pArr[*pSize] = val;
                (*pSize)++;
            }
            i++;
        }
    }
    *pWidth = pData[1];
    *pHeight = pData[2];
    return true;
}
