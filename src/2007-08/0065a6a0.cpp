// from server: 100% by colin
// roc 2007-08 0065a6a0  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a6a0
//
// 0065a6a0  56                   push esi
// 0065a6a1  8bf1                 mov esi, ecx
// 0065a6a3  83465cff             add dword ptr [esi + 0x5c], -1
// 0065a6a7  c7465401000000       mov dword ptr [esi + 0x54], 1
// 0065a6ae  751c                 jne 0x65a6cc
// 0065a6b0  837e5800             cmp dword ptr [esi + 0x58], 0
// 0065a6b4  740e                 je 0x65a6c4
// 0065a6b6  6a01                 push 1
// 0065a6b8  c7465800000000       mov dword ptr [esi + 0x58], 0
// 0065a6bf  e81cb6ffff           call 0x655ce0
// 0065a6c4  8bce                 mov ecx, esi
// 0065a6c6  5e                   pop esi
// 0065a6c7  e944cdffff           jmp 0x657410
// 0065a6cc  5e                   pop esi
// 0065a6cd  c3                   ret 

struct CXTPReportControlLocale {
    int pad0[0x15];
    int m_bSomething;
    int m_pSomething;
    int m_nRefCount;
    void OnFinalRelease();
    void DecrementRef();
};

extern "C" void __stdcall sub_655CE0(int);

void CXTPReportControlLocale::DecrementRef()
{
    m_bSomething = 1;
    if (--m_nRefCount == 0)
    {
        if (m_pSomething != 0)
        {
            m_pSomething = 0;
            sub_655CE0(1);
        }
        OnFinalRelease();
    }
}
