// from server: 65% by colin
// roc 2008-06 00406930  unit: VCApp::?$CComObject  size: 147 bytes

typedef unsigned short wchar_t_;

extern "C" __declspec(dllimport) int __stdcall MultiByteToWideChar(unsigned int CodePage, unsigned long dwFlags,
    const char* lpMultiByteStr, int cbMultiByte, wchar_t_* lpWideCharStr, int cchWideChar);
extern "C" __declspec(dllimport) void* __stdcall SysAllocStringLen(const wchar_t_* str, unsigned int len);
extern "C" __declspec(dllimport) void __stdcall SysFreeString(void* bstr);

struct CComBSTR {
    void* m_str;
    void AssignBSTR(void* p);
};

void CComBSTR::AssignBSTR(void* p) {
    if (m_str) {
        SysFreeString(m_str);
    }
    m_str = p;
}

struct VCAppCComObject {
    void* m_str;
    void* Assign(const char* src);
};

void* VCAppCComObject::Assign(const char* src) {
    void* old = m_str;
    SysFreeString(old);
    void* result = 0;
    if (src != 0) {
        int len = MultiByteToWideChar(3, 0, src, -1, 0, 0);
        wchar_t_* buf = (wchar_t_*)SysAllocStringLen(0, len - 1);
        if (buf != 0) {
            int n = MultiByteToWideChar(3, 0, src, -1, buf, len);
            if (n != len) {
                SysFreeString(buf);
                CComBSTR tmp;
                tmp.m_str = 0;
                tmp.AssignBSTR(0);
                result = 0;
            } else {
                CComBSTR tmp;
                tmp.m_str = 0;
                tmp.AssignBSTR(0);
                result = buf;
            }
        } else {
            CComBSTR tmp;
            tmp.m_str = 0;
            tmp.AssignBSTR(0);
            result = 0;
        }
    }
    m_str = result;
    if (result == 0 && src != 0) {
        extern void __stdcall ThrowOleError(long);
        ThrowOleError(0x8007000E);
    }
    return result;
}
