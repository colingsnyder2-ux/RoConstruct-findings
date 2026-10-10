// from server: 30% by colin
// roc 2007-08 006a22a0  unit: CXTPDockBar  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a22a0

typedef unsigned long DWORD;

struct CXTPDockBar {
    int CalcDynamicLayout(int nLength, DWORD dwMode);
};

struct CArray {
    int m_nSize;
    int m_nGrowBy;
    void* m_pData;
    CArray();
    ~CArray();
    int Add(void* p);
    void RemoveAt(int nIndex, int nCount);
    void SetAt(int nIndex, void* p);
    void InsertAt(int nIndex, void* p, int nCount);
};

extern "C" int __stdcall sub_6a1ad0(int, int, int, int, int, int, int, int);
extern "C" void __stdcall sub_6d2910(int, int, int);
extern "C" void __stdcall sub_6d26b0(int, int, int);
extern "C" void __stdcall sub_6d2ae0(int, int);
extern "C" void __stdcall sub_6ffab0(int, int, int);
extern "C" void __stdcall sub_62ff20();
extern "C" void __stdcall sub_632d40(int);
extern "C" void __stdcall sub_632d60();

int CXTPDockBar::CalcDynamicLayout(int nLength, DWORD dwMode)
{
    CArray arr;
    int total = 0;
    int nStart = 0;
    int nEnd = 0;
    int nPos = 0;
    int nResult = 0;
    int nTemp = 0;
    int nFlag = 0;
    int nRet = 0;
    int nCur = 0;
    int nLast = -1;

    while (1) {
        nRet = sub_6a1ad0(nStart, nEnd, nPos, nResult, nTemp, nFlag, nCur, nLast);
        if (nRet != -1) {
            if (nLast < 0 || nLast >= arr.m_nSize) {
                sub_62ff20();
            }
            nCur = *(int*)((char*)arr.m_pData + nLast * 4);
            sub_6d2910(nCur, nTemp, nResult);
            sub_6d26b0(nLast, 1, nCur);
            continue;
        }
        total += nRet;
        if (nFlag) {
            nPos += nRet;
        } else {
            nStart += nRet;
        }
        if (nResult > 0) {
            sub_6d2ae0(nCur, nResult);
            sub_6ffab0(nLast, 0, nResult);
            continue;
        }
        break;
    }

    nLast = nRet;
    sub_632d60();
    return total;
}
