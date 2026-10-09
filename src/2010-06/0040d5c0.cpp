// roc 2010-06 0040d5c0  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d5c0
//
// 0040d5c0  83790400             cmp dword ptr [ecx + 4], 0
// 0040d5c4  7e0a                 jle 0x40d5d0
// 0040d5c6  8b01                 mov eax, dword ptr [ecx]
// 0040d5c8  50                   push eax
// 0040d5c9  ff1508aa9e00         call dword ptr [0x9eaa08]
// 0040d5cf  59                   pop ecx
// 0040d5d0  c3                   ret 
// copied from an identical function in another client (function ?Release@S@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
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
