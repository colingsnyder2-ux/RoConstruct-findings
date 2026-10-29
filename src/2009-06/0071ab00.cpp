// from server: 83% by atomic.potato
// roc 2009-06 0071ab00  unit: ActiveDocView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071ab00

extern "C" void* __stdcall GetProcessHeap();
extern "C" int __stdcall HeapFree(void* hHeap, unsigned long dwFlags, void* lpMem);

struct CXTPControlComboBoxList {
    void* vtable;
    void* m_pad;
    void* m_pUnknown;
    void* m_pData;
    void Destructor();
};

void CXTPControlComboBoxList::Destructor()
{
    void* p = m_pUnknown;
    vtable = (void*)0x8f12a0;
    if (p != 0) {
        void** vt = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vt[2];
        fn(p);
    }
    if (m_pData != 0) {
        void* hHeap = GetProcessHeap();
        if (hHeap != 0) {
            HeapFree(hHeap, 0, m_pData);
        }
    }
}
