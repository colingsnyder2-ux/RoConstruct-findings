// from server: 100% by tester
// roc 2008-06 007a5d12  unit: CXTIconHandle  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5d12
//
// 007a5d12  80790800             cmp byte ptr [ecx + 8], 0
// 007a5d16  c701581f8700         mov dword ptr [ecx], 0x871f58
// 007a5d1c  740e                 je 0x7a5d2c
// 007a5d1e  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a5d21  85c9                 test ecx, ecx
// 007a5d23  7407                 je 0x7a5d2c
// 007a5d25  51                   push ecx
// 007a5d26  ff15ec218000         call dword ptr [0x8021ec]
// 007a5d2c  c3                   ret 

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
