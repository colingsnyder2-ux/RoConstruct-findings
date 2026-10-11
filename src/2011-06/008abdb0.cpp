// from server: 42% by atomic.potato




extern "C" {
    int __stdcall GetTextExtentPoint32A(void*, const char*, int, void*);
}

struct CString {
    char* m_pData;
    CString();
    CString(const CString&);
    ~CString();
    CString& operator=(const CString&);
};

struct CSize {
    int cx;
    int cy;
};

struct CXTPReportPaintManager {
    int __cdecl GetTextExtent(const char* str, CSize* size);
};

extern "C" {
    void __stdcall sub_a42de4(CString* self, const char* str);
    void __stdcall sub_a42c98(CString* self, int n, int c);
    void __stdcall sub_a426a8(CString* self, CString* out);
    void __stdcall sub_a42dc8(CString* self, CString* out);
    void __stdcall sub_a42e08(CString* self);
}

extern void* __stdcall sub_a40138(void*, const char*, int);

int CXTPReportPaintManager::GetTextExtent(const char* str, CSize* size) {
    CString s1;
    CString s2;
    CString s3;
    CSize sz1;
    CSize sz2;
    int result;

    sub_a42de4(&s1, str);
    sub_a42c98(&s1, 1, 0x20);
    sub_a426a8(&s1, &s2);
    sub_a42dc8(&s3, &s2);
    sub_a40138(0, s3.m_pData, -1);
    if (size != 0) {
        sub_a426a8(&s1, &s2);
        sub_a42dc8(&s3, &s2);
        sub_a40138(0, s3.m_pData, -1);
        result = sz1.cx > sz2.cx ? sz1.cx : sz2.cx;
        sub_a42e08(&s3);
        return result;
    }
    sub_a42e08(&s3);
    return sz1.cx;
}
