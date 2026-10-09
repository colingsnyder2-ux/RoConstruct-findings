// roc 2009-12 0040d090  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d090
//
// 0040d090  83790400             cmp dword ptr [ecx + 4], 0
// 0040d094  7e0a                 jle 0x40d0a0
// 0040d096  8b01                 mov eax, dword ptr [ecx]
// 0040d098  50                   push eax
// 0040d099  ff1540b79800         call dword ptr [0x98b740]
// 0040d09f  59                   pop ecx
// 0040d0a0  c3                   ret 
// copied from an identical function in another client (function ?Release@S@ns_ROCX00001c@@QAEXXZ)

namespace ns_ROCX00001c {
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
