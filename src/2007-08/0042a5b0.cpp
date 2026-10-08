// from server: 63% by colin
// roc 2007-08 0042a5b0  unit: CLuaHtmlView  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a5b0
//
// 0042a5b0  8b01                 mov eax, dword ptr [ecx]
// 0042a5b2  85c0                 test eax, eax
// 0042a5b4  7418                 je 0x42a5ce
// 0042a5b6  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042a5b9  8b11                 mov edx, dword ptr [ecx]
// 0042a5bb  56                   push esi
// 0042a5bc  8b742408             mov esi, dword ptr [esp + 8]
// 0042a5c0  83c004               add eax, 4
// 0042a5c3  56                   push esi
// 0042a5c4  50                   push eax
// 0042a5c5  8b4214               mov eax, dword ptr [edx + 0x14]
// 0042a5c8  ffd0                 call eax
// 0042a5ca  5e                   pop esi
// 0042a5cb  c20400               ret 4
// 0042a5ce  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042a5d1  8b11                 mov edx, dword ptr [ecx]
// 0042a5d3  56                   push esi
// 0042a5d4  8b742408             mov esi, dword ptr [esp + 8]
// 0042a5d8  33c0                 xor eax, eax
// 0042a5da  56                   push esi
// 0042a5db  50                   push eax
// 0042a5dc  8b4214               mov eax, dword ptr [edx + 0x14]
// 0042a5df  ffd0                 call eax
// 0042a5e1  5e                   pop esi
// 0042a5e2  c20400               ret 4

struct CLuaHtmlView {
    void* m_pUnknown;
    char pad[4];
    void* m_pInterface;
    void Invoke(void* arg);
};

void CLuaHtmlView::Invoke(void* arg)
{
    if (m_pUnknown != 0) {
        void** vtbl = *(void***)m_pInterface;
        typedef void (__stdcall *Fn)(void*, void*);
        Fn fn = (Fn)vtbl[5];
        fn((char*)m_pUnknown + 4, arg);
    } else {
        void** vtbl = *(void***)m_pInterface;
        typedef void (__stdcall *Fn)(void*, void*);
        Fn fn = (Fn)vtbl[5];
        fn(0, arg);
    }
}
