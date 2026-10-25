// from server: 100% by tester
// roc 2011-06 00903748  unit: CXTIconHandle  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903748
//
// 00903748  80790800             cmp byte ptr [ecx + 8], 0
// 0090374c  c7012804ae00         mov dword ptr [ecx], 0xae0428
// 00903752  740e                 je 0x903762
// 00903754  8b4904               mov ecx, dword ptr [ecx + 4]
// 00903757  85c9                 test ecx, ecx
// 00903759  7407                 je 0x903762
// 0090375b  51                   push ecx
// 0090375c  ff159002a400         call dword ptr [0xa40290]
// 00903762  c3                   ret 

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
