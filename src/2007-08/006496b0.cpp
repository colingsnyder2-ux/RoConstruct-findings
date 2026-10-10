// from server: 36% by colin
struct CXTPCommandBar
{
    bool sub_6496B0(unsigned int, unsigned int, unsigned char, unsigned char, int);
    void sub_649660(void*);
    void sub_649680(void*);
    int sub_648600();
};

extern "C" void* __stdcall FindResourceA(void*, const char*, const char*);
extern "C" void* __stdcall LoadResource(void*, void*);
extern "C" void* __stdcall LockResource(void*);
extern "C" unsigned int __stdcall SizeofResource(void*, void*);
extern "C" void* __stdcall CreateIconFromResourceEx(unsigned char*, unsigned int, int, unsigned int, int, int, unsigned int);
extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall CreateDIBSection(void*, void*, unsigned int, void**, void*, unsigned int);

extern "C" void* __stdcall sub_7383E2(void*);
extern "C" void* __stdcall sub_7383D0(void*);
extern "C" void* __stdcall sub_7383DC(void*);
extern "C" void* __stdcall sub_630B60(unsigned int);
extern "C" void* __stdcall sub_647A90(void*, void*, unsigned int);
extern "C" void* __stdcall sub_630A1E();

extern void* g_77D2D0;
extern void* g_77D2D4;
extern void* g_77D2D8;
extern void* g_77D148;
extern void* g_77D0C4;
extern void* g_77EE7C;

bool CXTPCommandBar::sub_6496B0(unsigned int a, unsigned int b, unsigned char c, unsigned char d, int e)
{
    void* hRes;
    void* hResData;
    void* pData;
    unsigned int size;
    int i;
    unsigned char* p;
    unsigned short count;
    void* hIcon;
    void* hDC;
    void* hBmp;
    void* pBits;
    int result;

    hRes = FindResourceA((void*)a, (const char*)b, (const char*)0xe);
    if (hRes != 0 && e != 0)
    {
        hResData = LoadResource((void*)a, hRes);
        pData = LockResource(hResData);
        count = *(unsigned short*)((unsigned char*)pData + 4);
        i = (int)count - 1;
        if (i >= 0)
        {
            p = (unsigned char*)pData + i * 14 + 7;
            while (i >= 0)
            {
                if (p[-1] == c && p[0] == d)
                {
                    if (sub_6496B0(a, b, *(unsigned short*)(p + 0xb), c, d))
                    {
                        return true;
                    }
                }
                i--;
                p -= 14;
            }
        }
        return false;
    }

    hRes = FindResourceA((void*)a, (const char*)b, (const char*)3);
    if (hRes == 0)
    {
        return false;
    }

    hResData = LoadResource((void*)a, hRes);
    pData = LockResource(hResData);
    if (pData == 0)
    {
        return false;
    }

    size = SizeofResource((void*)a, hRes);

    if (*(unsigned short*)((unsigned char*)pData + 0xe) != 0x20)
    {
        hIcon = CreateIconFromResourceEx((unsigned char*)pData, size, 1, 0x30000, d, c, 0);
        sub_649660(hIcon);
        sub_648600();
        result = -1;
        return result != 0;
    }

    sub_7383E2(&hDC);
    sub_7383D0(0);
    sub_7383D0(g_77D148);

    hBmp = sub_630B60(0x34);
    {
        unsigned int* src = (unsigned int*)pData;
        unsigned int* dst = (unsigned int*)hBmp;
        for (int k = 0; k < 10; k++)
        {
            dst[k] = src[k];
        }
    }

    {
        int width = *(int*)((unsigned char*)hBmp + 8);
        int height = *(int*)((unsigned char*)hBmp + 4);
        int w2 = width / 2;
        int h2 = height / 2;
        *(int*)((unsigned char*)hBmp + 8) = w2;
        *(int*)((unsigned char*)hBmp + 0x14) = h2 * 4;
    }

    pBits = 0;
    hDC = CreateCompatibleDC(0);
    hBmp = CreateDIBSection(hDC, (void*)((unsigned char*)hBmp), 0, &pBits, 0, 0);

    if (hBmp != 0 && pBits != 0)
    {
        sub_647A90(pBits, (unsigned char*)pData + 0x28, *(unsigned int*)((unsigned char*)hBmp + 0x14));
        sub_649680(hBmp);
        sub_7383DC(&hDC);
    }
    else
    {
        sub_7383DC(&hDC);
        return false;
    }

    sub_648600();
    result = -1;
    return result != 0;
}
