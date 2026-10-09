// roc 2009-06 0040d130  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d130
//
// 0040d130  83790400             cmp dword ptr [ecx + 4], 0
// 0040d134  7e0a                 jle 0x40d140
// 0040d136  8b01                 mov eax, dword ptr [ecx]
// 0040d138  50                   push eax
// 0040d139  ff15cce98900         call dword ptr [0x89e9cc]
// 0040d13f  59                   pop ecx
// 0040d140  c3                   ret 
// copied from an identical function in another client (function ?Release@S@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
extern void (__cdecl *free_ptr)(void*);

struct S {
    void* m_ptr;
    int m_count;
    void Release();
};

void S::Release()
{
    if (m_count > 0)
    {
        free_ptr(m_ptr);
    }
}
}
