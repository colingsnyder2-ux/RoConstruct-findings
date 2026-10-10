// from server: 47% by colin
// roc 2007-08 006cea40  unit: CXTPReportPaintManager  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cea40

extern "C" {
    __declspec(dllimport) void* __stdcall GetDC(void*);
    __declspec(dllimport) int __stdcall ReleaseDC(void*, void*);
    __declspec(dllimport) void* __stdcall CreateFontIndirectA(const void*);
    __declspec(dllimport) int __stdcall GetTextExtentPoint32A(void*, const char*, int, void*);
}

struct CFont {
    void SetFont(void*);
};

struct CSize {
    int cx;
    int cy;
};

struct CString {
    void* data;
};

struct CXTPReportPaintManager {
    char pad[0x20];
    CFont m_font1;
    CFont m_font2;
    char pad2[0x238 - 0x28 - 4];
    int m_nRowHeight;
    void SetFont(void*);
};

void CXTPReportPaintManager::SetFont(void* hdc) {
    CFont* f1 = (CFont*)((char*)this + 0x20);
    CFont* f2 = (CFont*)((char*)this + 0x28);
    f1->SetFont(0);
    f2->SetFont(0);
    void* dc = GetDC(hdc);
    f1->SetFont(dc);
    *(int*)((char*)hdc + 0x10) = 0x2bc;
    void* dc2 = GetDC(hdc);
    f2->SetFont(dc2);
    CSize size;
    size.cx = 0;
    size.cy = 0;
    CString str;
    str.data = 0;
    GetTextExtentPoint32A(dc, (const char*)&str, 1, &size);
    int w = size.cx + 4;
    if (w < 0x12) w = 0x12;
    this->m_nRowHeight = w;
    ReleaseDC(hdc, dc);
}
