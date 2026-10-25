// from server: 100% by tester
// roc 2010-06 008a9b1e  unit: CXTIconHandle  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9b1e
//
// 008a9b1e  80790800             cmp byte ptr [ecx + 8], 0
// 008a9b22  c701d03fa700         mov dword ptr [ecx], 0xa73fd0
// 008a9b28  740e                 je 0x8a9b38
// 008a9b2a  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a9b2d  85c9                 test ecx, ecx
// 008a9b2f  7407                 je 0x8a9b38
// 008a9b31  51                   push ecx
// 008a9b32  ff1514a39e00         call dword ptr [0x9ea314]
// 008a9b38  c3                   ret 

struct CXTIconHandle {
    void* m_vtable;
    void* m_ptr;
    char m_flag;
    void Destroy();
};

extern "C" void (__stdcall *HeapDestroy)(void*);

void CXTIconHandle::Destroy()
{
    m_vtable = (void*)0x7e50d0;
    if (m_flag != 0) {
        void* p = m_ptr;
        if (p != 0) {
            HeapDestroy(p);
        }
    }
}
