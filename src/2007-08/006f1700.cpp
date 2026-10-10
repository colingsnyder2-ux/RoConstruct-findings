// from server: 40% by colin
// roc 2007-08 006f1700  unit: CXTPImageEditorDlg::CDlgToolBar  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f1700

extern "C" {
    void* __stdcall CreateCompatibleDC(void*);
    int __stdcall SetDIBits(void*, void*, unsigned int, unsigned int, const void*, const void*, unsigned int);
    void __cdecl free(void*);
}

struct CImageData {
    void* m_pBits;
    void* m_pDIB;
    unsigned int m_nWidth;
    unsigned int m_nHeight;
};

struct CImage {
    void* m_pDC;
    CImageData* m_pData;
};

struct CDlgToolBar {
    void SetImage(CImage* pImage);
};

void __stdcall sub_7383e2(void*);
void __stdcall sub_7383d0(void*, void*);
void __stdcall sub_7383dc(void*);
int __stdcall sub_6498c0(void*, void*, void*, void*, void*);

void CDlgToolBar::SetImage(CImage* pImage)
{
    if (pImage != 0)
        return;

    void* pDC = 0;
    sub_7383e2(&pDC);

    void* hDC = CreateCompatibleDC(0);
    sub_7383d0(&pDC, hDC);

    void* pBits = 0;
    void* pDIB = 0;
    unsigned int nWidth = 0;
    unsigned int nHeight = 0;

    int result = sub_6498c0(pImage->m_pData, &pDIB, &pBits, &nWidth, &nHeight);
    if (result != 0)
    {
        if (pBits != 0)
        {
            unsigned int i = 0;
            unsigned int count = nWidth >> 2;
            while (i < count)
            {
                if (((unsigned int*)pBits)[i] == 0)
                    ((unsigned int*)pBits)[i] = 0xfffeff;
                i++;
            }
        }

        SetDIBits(pDC, pImage->m_pDC, 0, nHeight, pBits, pDIB, 0);

        if (pBits != 0)
            free(pBits);
        if (pDIB != 0)
            free(pDIB);
    }

    sub_7383dc(&pDC);
}
