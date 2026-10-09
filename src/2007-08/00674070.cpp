// from server: 59% by colin
// roc 2007-08 00674070  unit: CXTPCustomizeSheet  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00674070
//
// 00674070  53                   push ebx
// 00674071  56                   push esi
// 00674072  8bf1                 mov esi, ecx
// 00674074  8b06                 mov eax, dword ptr [esi]
// 00674076  33db                 xor ebx, ebx
// 00674078  3bc3                 cmp eax, ebx
// 0067407a  57                   push edi
// 0067407b  8b3d38ee7700         mov edi, dword ptr [0x77ee38]
// 00674081  7405                 je 0x674088
// 00674083  50                   push eax
// 00674084  ffd7                 call edi
// 00674086  891e                 mov dword ptr [esi], ebx
// 00674088  8b460c               mov eax, dword ptr [esi + 0xc]
// 0067408b  3bc3                 cmp eax, ebx
// 0067408d  7406                 je 0x674095
// 0067408f  50                   push eax
// 00674090  ffd7                 call edi
// 00674092  895e0c               mov dword ptr [esi + 0xc], ebx
// 00674095  8b4618               mov eax, dword ptr [esi + 0x18]
// 00674098  3bc3                 cmp eax, ebx
// 0067409a  7406                 je 0x6740a2
// 0067409c  50                   push eax
// 0067409d  ffd7                 call edi
// 0067409f  895e18               mov dword ptr [esi + 0x18], ebx
// 006740a2  891d388f8c00         mov dword ptr [0x8c8f38], ebx
// 006740a8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006740ab  3bc3                 cmp eax, ebx
// 006740ad  7406                 je 0x6740b5
// 006740af  50                   push eax
// 006740b0  ffd7                 call edi
// 006740b2  895e18               mov dword ptr [esi + 0x18], ebx
// 006740b5  8b460c               mov eax, dword ptr [esi + 0xc]
// 006740b8  3bc3                 cmp eax, ebx
// 006740ba  7406                 je 0x6740c2
// 006740bc  50                   push eax
// 006740bd  ffd7                 call edi
// 006740bf  895e0c               mov dword ptr [esi + 0xc], ebx
// 006740c2  8b06                 mov eax, dword ptr [esi]
// 006740c4  3bc3                 cmp eax, ebx
// 006740c6  7405                 je 0x6740cd
// 006740c8  50                   push eax
// 006740c9  ffd7                 call edi
// 006740cb  891e                 mov dword ptr [esi], ebx
// 006740cd  5f                   pop edi
// 006740ce  5e                   pop esi
// 006740cf  5b                   pop ebx
// 006740d0  c3                   ret 

extern "C" void __stdcall UnhookWindowsHookEx(void*);

struct CXTPCustomizeSheet
{
    void* m_p0;
    void* m_p4;
    void* m_p8;
    void* m_pc;
    void* m_p10;
    void* m_p14;
    void* m_p18;
    void Release();
};

void CXTPCustomizeSheet::Release()
{
    if (m_p0 != 0) {
        UnhookWindowsHookEx(m_p0);
        m_p0 = 0;
    }
    if (m_pc != 0) {
        UnhookWindowsHookEx(m_pc);
        m_pc = 0;
    }
    if (m_p18 != 0) {
        UnhookWindowsHookEx(m_p18);
        m_p18 = 0;
    }
    *(int*)0x8c8f38 = 0;
    if (m_p18 != 0) {
        UnhookWindowsHookEx(m_p18);
        m_p18 = 0;
    }
    if (m_pc != 0) {
        UnhookWindowsHookEx(m_pc);
        m_pc = 0;
    }
    if (m_p0 != 0) {
        UnhookWindowsHookEx(m_p0);
        m_p0 = 0;
    }
}
