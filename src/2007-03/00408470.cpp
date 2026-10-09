// roc 2007-03 00408470  unit: seg_00400000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408470
//
// 00408470  83790400             cmp dword ptr [ecx + 4], 0
// 00408474  7e0a                 jle 0x408480
// 00408476  8b01                 mov eax, dword ptr [ecx]
// 00408478  50                   push eax
// 00408479  ff1530e97700         call dword ptr [0x77e930]
// 0040847f  59                   pop ecx
// 00408480  c3                   ret 
// copied from an identical function in another client (function ?Release@S@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
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
