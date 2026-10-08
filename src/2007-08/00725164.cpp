// from server: 61% by colin
// roc 2007-08 00725164  unit: CXTIconHandle  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725164
//
// 00725164  ff742404             push dword ptr [esp + 4]
// 00725168  6a00                 push 0
// 0072516a  ff7104               push dword ptr [ecx + 4]
// 0072516d  ff15a0d17700         call dword ptr [0x77d1a0]
// 00725173  c20400               ret 4

struct CXTIconHandle {
    void* m_p;
    unsigned int GetSize(unsigned int flags);
};

extern "C" unsigned long __stdcall HeapSize(void* heap, unsigned long flags, const void* mem);

unsigned int CXTIconHandle::GetSize(unsigned int flags)
{
    return HeapSize(0, flags, m_p);
}
