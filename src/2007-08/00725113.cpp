// from server: 62% by colin
// roc 2007-08 00725113  unit: CXTIconHandle  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725113
//
// 00725113  837c240400           cmp dword ptr [esp + 4], 0
// 00725118  740f                 je 0x725129
// 0072511a  ff742404             push dword ptr [esp + 4]
// 0072511e  6a00                 push 0
// 00725120  ff7104               push dword ptr [ecx + 4]
// 00725123  ff15acd27700         call dword ptr [0x77d2ac]
// 00725129  c20400               ret 4

struct CXTIconHandle {
    void Release(void* p);
    int m_pad;
    void* m_heap;
};

extern "C" int __stdcall HeapFree(void* hHeap, unsigned long dwFlags, void* lpMem);

void CXTIconHandle::Release(void* p)
{
    if (p == 0)
        HeapFree(m_heap, 0, p);
}
