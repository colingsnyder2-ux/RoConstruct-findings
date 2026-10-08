// from server: 100% by colin
// roc 2007-08 007250e6  unit: CXTIconHandle  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007250e6
//
// 007250e6  80790800             cmp byte ptr [ecx + 8], 0
// 007250ea  c701d0507e00         mov dword ptr [ecx], 0x7e50d0
// 007250f0  740e                 je 0x725100
// 007250f2  8b4904               mov ecx, dword ptr [ecx + 4]
// 007250f5  85c9                 test ecx, ecx
// 007250f7  7407                 je 0x725100
// 007250f9  51                   push ecx
// 007250fa  ff1584d27700         call dword ptr [0x77d284]
// 00725100  c3                   ret 

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
