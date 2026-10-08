// from server: 100% by colin
// roc 2007-08 00658c60  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00658c60
//
// 00658c60  56                   push esi
// 00658c61  8bf1                 mov esi, ecx
// 00658c63  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00658c69  85c0                 test eax, eax
// 00658c6b  7415                 je 0x658c82
// 00658c6d  50                   push eax
// 00658c6e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00658c71  50                   push eax
// 00658c72  ff15e0ec7700         call dword ptr [0x77ece0]
// 00658c78  c7862402000000000000 mov dword ptr [esi + 0x224], 0
// 00658c82  5e                   pop esi
// 00658c83  c3                   ret 

struct CXTPReportControl {
    char pad[0x20];
    void* m_hwnd;
    char pad2[0x200];
    unsigned int m_timer;
    void KillTimerMethod();
};

extern "C" int (__stdcall *KillTimer)(void* hWnd, unsigned int uIDEvent);

void CXTPReportControl::KillTimerMethod()
{
    unsigned int t = m_timer;
    if (t != 0)
    {
        KillTimer(m_hwnd, t);
        m_timer = 0;
    }
}
