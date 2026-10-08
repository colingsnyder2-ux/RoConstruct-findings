// from server: 61% by colin
// roc 2007-08 00725101  unit: CXTIconHandle  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725101
//
// 00725101  ff742404             push dword ptr [esp + 4]
// 00725105  6a00                 push 0
// 00725107  ff7104               push dword ptr [ecx + 4]
// 0072510a  ff15a8d27700         call dword ptr [0x77d2a8]
// 00725110  c20400               ret 4

extern "C" void *__stdcall HeapAlloc(void *hHeap, unsigned long dwFlags, unsigned long dwBytes);

struct CXTIconHandle {
    void *m_heap;
    void *alloc(unsigned long size);
};

void *CXTIconHandle::alloc(unsigned long size)
{
    return HeapAlloc(m_heap, 0, size);
}
