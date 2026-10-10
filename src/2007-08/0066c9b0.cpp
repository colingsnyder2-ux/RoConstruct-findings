// from server: 20% by colin
struct CArrayBase {
    void* m_pData;
    int m_nSize;
    int m_nGrowBy;
};

struct CString {
    char* m_pszData;
    int m_nLength;
    int m_nAllocLength;
};

struct CStringArray {
    CString* m_pData;
    int m_nSize;
    int m_nGrowBy;
};

extern "C" void* __stdcall sub_77DD94(void* p, const char* s, int n);
extern "C" void* __stdcall sub_77DD98(void* p);
extern "C" void* __stdcall sub_77DDAC(void* p);
extern "C" void* __stdcall sub_77DDBC(void* p);

void __cdecl sub_685720(void* pArray, const char* fmt, ...);

struct CXTPToolBar_ {
    char pad[0x90];
    CArrayBase m_arr[4];
    void ProcessDockBars(void* pFrame);
};

void CXTPToolBar_::ProcessDockBars(void* pFrame)
{
    void* pDockSite = 0;
    int i;

    pDockSite = (*(void* (__thiscall**)(void*, const char*))((*(void***)pFrame)[0x70/4]))(pFrame, "DockSite");

    for (i = 0; i < 4; i++) {
        CArrayBase* pArr = &m_arr[i];
        int nCount = pArr->m_nSize;
        void* pLast = 0;
        int nFound = 0;
        int j;

        for (j = 0; j < nCount; j++) {
            void* pEntry = ((void**)pArr->m_pData)[j];
            void* pVal = 0;
            if (pEntry) {
                pVal = *(void**)((char*)pEntry + 0xd4);
            }
            if (pLast != 0 || pVal != 0) {
                nFound++;
                pLast = pVal;
            }
        }

        if (nFound > 1) {
            CStringArray strArr;
            strArr.m_pData = 0;
            strArr.m_nSize = 0;
            strArr.m_nGrowBy = 0;

            sub_685720(&strArr, "DockBar%i", 0);

            int nIdx = 0;
            void* pPrev = (void*)-1;
            for (j = 0; j < pArr->m_nSize; j++) {
                void* pEntry = ((void**)pArr->m_pData)[j];
                void* pVal = 0;
                if (pEntry) {
                    pVal = *(void**)((char*)pEntry + 0xd4);
                }
                if (pPrev != 0 || pVal != 0) {
                    pPrev = pVal;
                    CString str;
                    str.m_pszData = 0;
                    str.m_nLength = 0;
                    str.m_nAllocLength = 0;

                    sub_77DDAC(&str);
                    sub_77DD94(&str, "Id%i", nIdx);
                    sub_77DD98(&str);
                    sub_685720(&strArr, "%s", str.m_pszData);
                    sub_77DDBC(&str);
                    nIdx++;
                }
            }
        } else {
            CStringArray strArr;
            strArr.m_pData = 0;
            strArr.m_nSize = 0;
            strArr.m_nGrowBy = 0;
            sub_685720(&strArr, "DockBar%i", 0);
        }
    }
}
