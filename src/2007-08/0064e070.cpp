// from server: 47% by colin
extern "C" {
void* __stdcall GlobalAlloc(unsigned int, unsigned int);
void* __stdcall GlobalLock(void*);
int __stdcall GlobalUnlock(void*);
void __cdecl free(void*);
int __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);
void* __stdcall SetClipboardData(unsigned int, void*);
}

struct CStringData {
    int nRefs;
    int nDataLength;
    int nAllocLength;
    char* data();
};

struct CString {
    char* m_pData;
    CString();
    CString(const CString&);
    ~CString();
    int GetLength() const;
    char* GetBuffer(int);
    void ReleaseBuffer(int);
    operator const char*() const;
};

struct CXTPImageManager {
    void CopyToClipboard(CString& str);
};

void CXTPImageManager::CopyToClipboard(CString& str)
{
    CString strTemp;
    strTemp = str;
    int nLen = strTemp.GetLength();
    char* p = strTemp.GetBuffer(0);
    void* hMem = GlobalAlloc(0x1000, 0);
    if (hMem != 0) {
        void* pLock = GlobalLock(hMem);
        memcpy_s(pLock, 0x400, p, nLen + 1);
        GlobalUnlock(hMem);
        SetClipboardData(2, hMem);
    }
    strTemp.ReleaseBuffer(-1);
}
