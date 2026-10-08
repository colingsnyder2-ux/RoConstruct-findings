// from server: 100% by colin
// roc 2007-08 00658570  unit: CXTPReportControl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00658570
//
// 00658570  56                   push esi
// 00658571  8bf1                 mov esi, ecx
// 00658573  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 0065857a  752c                 jne 0x6585a8
// 0065857c  c7862002000001000000 mov dword ptr [esi + 0x220], 1
// 00658586  e8b37cfdff           call 0x63023e
// 0065858b  8bce                 mov ecx, esi
// 0065858d  e8aef8ffff           call 0x657e40
// 00658592  8b06                 mov eax, dword ptr [esi]
// 00658594  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0065859a  8bce                 mov ecx, esi
// 0065859c  ffd2                 call edx
// 0065859e  c7862002000000000000 mov dword ptr [esi + 0x220], 0
// 006585a8  5e                   pop esi
// 006585a9  c20c00               ret 0xc

struct CXTPReportControl {
    char pad[0x220];
    int m_nLockUpdate;
    void LockUpdate(int, int, int);
    void RecalcLayout();
    void OnUpdate();
};

void CXTPReportControl::LockUpdate(int, int, int)
{
    if (m_nLockUpdate == 0)
    {
        m_nLockUpdate = 1;
        OnUpdate();
        RecalcLayout();
        (*(void (__thiscall **)(CXTPReportControl *))(*(int *)this + 0x154))(this);
        m_nLockUpdate = 0;
    }
}
