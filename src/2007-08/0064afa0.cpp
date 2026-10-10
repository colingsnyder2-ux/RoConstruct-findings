// from server: 35% by colin
struct CXTPImageManagerIcon {
    void* sub_64AFA0(void* pParam);
};

extern "C" void* __cdecl sub_630478(void* pParam, const char* pName);
extern "C" void* __cdecl sub_648460(void* pParam1, void* pParam2);
extern "C" void* __cdecl sub_648540(void* pParam1, void* pParam2);
extern "C" void* __cdecl sub_649260(void* pParam1, void* pParam2);
extern "C" void __cdecl sub_6C9E70(void* pParam);
extern "C" void __cdecl sub_6CA390(void* pParam1, void* pParam2, void* pParam3);
extern "C" void __cdecl sub_73843C(void* pParam);
extern "C" void __cdecl sub_41F680(void* pParam);

extern "C" void* __stdcall FindResourceA(void* hModule, const char* lpName, const char* lpType);
extern "C" void* __stdcall LoadImageA(void* hInst, const char* name, unsigned int type, int cx, int cy, unsigned int fuLoad);

extern "C" void* __cdecl sub_64AFA0(void* pParam1, void* pParam2, void* pParam3, void* pParam4, void* pParam5, void* pParam6, void* pParam7, void* pParam8, void* pParam9, void* pParam10, void* pParam11, void* pParam12, void* pParam13);

void* CXTPImageManagerIcon::sub_64AFA0(void* pParam)
{
    void* result = 0;
    void* hRes = sub_630478(pParam, (const char*)0x78AB40);
    void* pData = sub_648460(hRes, pParam);
    if (pData != 0)
    {
        char localBuf[8];
        sub_6C9E70(localBuf);
        void* hFind = FindResourceA(pParam, (const char*)0x78AB40, (const char*)0x78AB40);
        sub_6CA390(localBuf, hFind, hRes);
        if (*(int*)localBuf != 0)
        {
            void* pOut = *(void**)(localBuf + 8);
            if (pOut != 0)
            {
                *(void**)pOut = *(void**)(localBuf + 4);
            }
            sub_73843C(localBuf);
            *(void**)localBuf = (void*)0x788300;
            sub_41F680(localBuf);
            result = pOut;
        }
        else
        {
            *(void**)localBuf = (void*)0x788300;
            sub_41F680(localBuf);
            result = 0;
        }
    }
    else
    {
        void* hRes2 = sub_630478(pParam, (const char*)0x78AB40);
        void* pData2 = sub_648540(hRes2, pParam);
        if (pData2 != 0)
        {
            void* pOut2 = sub_649260(hRes2, pParam);
            result = pOut2;
        }
        else
        {
            void* pOut3 = LoadImageA(pParam, (const char*)0x78AB40, 0, 0, 0, 0x40);
            result = pOut3;
        }
    }
    return result;
}
