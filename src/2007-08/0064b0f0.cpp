// from server: 44% by colin
struct CXTPImageManagerIcon
{
    int LoadResource(int, int, unsigned int*);
};

extern "C" void* __stdcall FindResourceA(void*, const char*, const char*);
extern "C" void* __stdcall LoadImageA(void*, const char*, unsigned int, int, int, unsigned int);

extern "C" int __cdecl sub_648460(int, int);
extern "C" int __cdecl sub_648540(int, int);
extern "C" int __cdecl sub_649260(int, int);
extern "C" void __cdecl sub_6c9e70(void*);
extern "C" int __cdecl sub_6ca390(void*, int, int, int);
extern "C" void __cdecl sub_73843c(void*);
extern "C" void __cdecl sub_41f680(void*);

struct CStringT
{
    void* vtable;
    int   m_nLength;
    int   m_nAllocLength;
    char* m_pchData;
};

int CXTPImageManagerIcon::LoadResource(int hInstance, int nID, unsigned int* pResult)
{
    int result = sub_648460(hInstance, nID);
    if (result != 0)
    {
        CStringT str;
        sub_6c9e70(&str);
        str.vtable = (void*)0x788300;
        str.m_nLength = 0;

        void* hRes = FindResourceA((void*)hInstance, (const char*)nID, (const char*)0x78ab40);
        int r = sub_6ca390(&str, hInstance, (int)hRes, 0);
        if (r == 0)
        {
            str.vtable = (void*)0x788300;
            sub_41f680(&str);
            return 0;
        }
        if (pResult != 0)
            *pResult = str.m_nLength;
        sub_73843c(&str);
        str.vtable = (void*)0x788300;
        sub_41f680(&str);
        return r;
    }
    else
    {
        CStringT str;
        str.vtable = (void*)0x788300;
        str.m_nLength = 0;
        int r = sub_648540(hInstance, nID);
        if (pResult != 0)
            *pResult = r;
        if (r != 0)
        {
            r = sub_649260(hInstance, nID);
        }
        else
        {
            r = (int)LoadImageA((void*)hInstance, (const char*)nID, 0, 0, 0, 0x40);
        }
        str.vtable = (void*)0x788300;
        sub_41f680(&str);
        return r;
    }
}
