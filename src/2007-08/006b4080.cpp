// from server: 43% by colin
extern "C" {
    int __stdcall CompareStringA(unsigned long Locale, unsigned long dwCmpFlags,
                                 const char* lpString1, int cchCount1,
                                 const char* lpString2, int cchCount2);
}

struct CXTPControlGallery {
    int GetCount();
    int GetItem(int nIndex);

    int FindItem(int nStart, const char* lpszText, int bCaseSensitive);
};

struct CXTPGalleryItem {
    void GetCaption(void* pString);
};

struct CXTPString {
    void Release();
};

extern "C" {
    int __stdcall CompareStringA(unsigned long, unsigned long, const char*, int, const char*, int);
}

void* __stdcall CXTPString_GetData(void* pString);
int __stdcall CXTPString_GetLength(void* pString);
void __stdcall CXTPString_Release(void* pString);

int CXTPControlGallery::FindItem(int nStart, const char* lpszText, int bCaseSensitive)
{
    int nCount;
    int nIndex;
    int nStartIndex;
    int nTextLen;
    int nItemLen;
    int nMinLen;
    int nResult;
    int nCompareResult;
    char* pItemText;
    void* pString;
    char buffer[8];

    nCount = this->GetCount();
    if (nCount == 0)
        return -1;

    if (lpszText == 0)
        return -1;

    nTextLen = 0;
    while (lpszText[nTextLen] != 0)
        nTextLen++;

    if (nTextLen < 1)
        return -1;

    nStartIndex = nStart + 1;
    nCount = this->GetCount();
    if (nStartIndex >= nCount || nStartIndex < 0)
        nStartIndex = 0;

    nIndex = nStartIndex;
    do {
        CXTPGalleryItem* pItem = (CXTPGalleryItem*)this->GetItem(nIndex);
        if (bCaseSensitive != 0) {
            pString = 0;
            pItem->GetCaption(&pString);
            nCompareResult = CompareStringA(0, 0, lpszText, -1, (const char*)pString, -1);
            CXTPString_Release(&pString);
            if (nCompareResult == 2) {
                return nIndex;
            }
        } else {
            pString = 0;
            pItem->GetCaption(&pString);
            nItemLen = CXTPString_GetLength(&pString);
            CXTPString_Release(&pString);

            nMinLen = nTextLen;
            if (nItemLen < nTextLen) {
                nMinLen = nItemLen;
                nTextLen = nItemLen;
            }

            pString = 0;
            pItem->GetCaption(&pString);
            pItemText = (char*)CXTPString_GetData(&pString);
            nCompareResult = CompareStringA(0, 0x800, lpszText, nTextLen, pItemText, nMinLen);
            CXTPString_Release(&pString);

            if (nCompareResult == 2 && nTextLen <= nItemLen) {
                return nIndex;
            }
        }

        nIndex++;
        nCount = this->GetCount();
        if (nIndex == nCount)
            nIndex = 0;

        if (nIndex == nStartIndex)
            break;
    } while (1);

    return -1;
}
