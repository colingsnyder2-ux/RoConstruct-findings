// from server: 80% by colin
// roc 2007-08 00427f00  unit: COleException  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427f00
//
// 00427f00  56                   push esi
// 00427f01  8bf1                 mov esi, ecx
// 00427f03  833e00               cmp dword ptr [esi], 0
// 00427f06  7410                 je 0x427f18
// 00427f08  8b4604               mov eax, dword ptr [esi + 4]
// 00427f0b  8b0e                 mov ecx, dword ptr [esi]
// 00427f0d  6a01                 push 1
// 00427f0f  50                   push eax
// 00427f10  ffd1                 call ecx
// 00427f12  83c408               add esp, 8
// 00427f15  894604               mov dword ptr [esi + 4], eax
// 00427f18  f644240801           test byte ptr [esp + 8], 1
// 00427f1d  c70600000000         mov dword ptr [esi], 0
// 00427f23  c7460800000000       mov dword ptr [esi + 8], 0
// 00427f2a  7409                 je 0x427f35
// 00427f2c  56                   push esi
// 00427f2d  e8307d2000           call 0x62fc62
// 00427f32  83c404               add esp, 4
// 00427f35  8bc6                 mov eax, esi
// 00427f37  5e                   pop esi
// 00427f38  c20400               ret 4

struct COleException {
    void* m_pfnRelease;
    void* m_pv;
    void* m_pv2;
    COleException* COleException_ctor(unsigned int flags);
};

extern "C" void __stdcall sub_62FC62(void* p);

COleException* COleException::COleException_ctor(unsigned int flags) {
    if (m_pfnRelease == 0) {
        void* pv = m_pv;
        void* pfn = m_pfnRelease;
        typedef void* (__stdcall *ReleaseFn)(void*, int);
        m_pv = ((ReleaseFn)pfn)(pv, 1);
    }
    m_pfnRelease = 0;
    m_pv2 = 0;
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
