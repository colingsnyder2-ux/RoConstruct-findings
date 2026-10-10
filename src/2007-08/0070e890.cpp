// from server: 45% by colin
// roc 2007-08 0070e890  unit: CXTColorLum  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070e890

extern "C" {
    int __stdcall GetClientRect(void*, void*);
    void* __stdcall GetParent(void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
    int __stdcall FillRect(void*, void*, void*);
}

struct CXTColorLum {
    void OnPaint();
};

struct CString {
    char* m_pszData;
    CString();
    ~CString();
};

struct CRect {
    long left;
    long top;
    long right;
    long bottom;
};

struct CXTColorLumImpl {
    char pad[0x20];
    void* m_hWnd;
};

void __stdcall sub_630490(void*, void*);
void __stdcall sub_6802f0(void*, void*);
void* __stdcall sub_6301c0(void*);
void* __stdcall sub_668f70();
void* __stdcall sub_668770(void*, int);
void __stdcall sub_6308b0(void*, void*, void*);
void __stdcall sub_70d310(void*, void*);
void __stdcall sub_70d4c0(void*, void*);
void __stdcall sub_680430(void*);
void __stdcall sub_63048a(void*);
void __stdcall sub_630a1e();

void CXTColorLum::OnPaint()
{
    CXTColorLumImpl* self = (CXTColorLumImpl*)this;
    CString str;
    CRect rc;
    CRect rcClient;
    void* hParent;
    void* hWnd;
    int result;

    sub_630490(&str, this);
    GetClientRect(self->m_hWnd, &rcClient);
    sub_6802f0(&rc, &rcClient);
    hWnd = self->m_hWnd;
    hParent = GetParent(hWnd);
    hParent = sub_6301c0(hParent);
    result = SendMessageA(*(void**)((char*)hParent + 0x20), 0x138, (unsigned int)rc.left, rc.top);
    if (result != 0) {
        FillRect(*(void**)((char*)hParent + 0x20), &rc, (void*)result);
    } else {
        void* p = sub_668f70();
        p = sub_668770(p, 0xf);
        sub_6308b0(&rc, p, &rc);
    }
    sub_70d310(this, &rc);
    sub_70d4c0(this, &rc);
    sub_680430(&rc);
    sub_63048a(&str);
}
