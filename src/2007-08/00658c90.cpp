// from server: 93% by colin
// roc 2007-08 00658c90  unit: CXTPReportControl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00658c90
//
// 00658c90  56                   push esi
// 00658c91  8bf1                 mov esi, ecx
// 00658c93  83be2402000000       cmp dword ptr [esi + 0x224], 0
// 00658c9a  7519                 jne 0x658cb5
// 00658c9c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00658c9f  6a00                 push 0
// 00658ca1  68c8000000           push 0xc8
// 00658ca6  6a07                 push 7
// 00658ca8  50                   push eax
// 00658ca9  ff15eced7700         call dword ptr [0x77edec]
// 00658caf  898624020000         mov dword ptr [esi + 0x224], eax
// 00658cb5  5e                   pop esi
// 00658cb6  c3                   ret 

extern "C" void* __stdcall SetTimer(void* hWnd, unsigned int nIDEvent, unsigned int uElapse, void* lpTimerFunc);

struct CXTPReportControl
{
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x200];
    void* m_hTimer;
    void EnsureTimer();
};

void CXTPReportControl::EnsureTimer()
{
    if (m_hTimer == 0)
    {
        m_hTimer = SetTimer(m_hWnd, 7, 0xc8, 0);
    }
}
