// from server: 45% by colin
// roc 2007-08 00430b00  unit: CWrapperView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430b00
//
// 00430b00  8b542404             mov edx, dword ptr [esp + 4]
// 00430b04  8bc1                 mov eax, ecx
// 00430b06  8b08                 mov ecx, dword ptr [eax]
// 00430b08  85c9                 test ecx, ecx
// 00430b0a  8910                 mov dword ptr [eax], edx
// 00430b0c  740f                 je 0x430b1d
// 00430b0e  8b01                 mov eax, dword ptr [ecx]
// 00430b10  8b5004               mov edx, dword ptr [eax + 4]
// 00430b13  c744240401000000     mov dword ptr [esp + 4], 1
// 00430b1b  ffe2                 jmp edx
// 00430b1d  c20400               ret 4

struct CWrapperView {
    void* m_p;
    void Set(void* p);
};

void CWrapperView::Set(void* p) {
    void* old = m_p;
    m_p = p;
    if (old) {
        void** vtbl = *(void***)old;
        void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vtbl[1];
        fn(old, 1);
    }
}
