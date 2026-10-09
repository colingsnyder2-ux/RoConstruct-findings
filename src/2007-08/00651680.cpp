// from server: 100% by colin
// roc 2007-08 00651680  unit: CXTPToolBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651680
//
// 00651680  8b442404             mov eax, dword ptr [esp + 4]
// 00651684  56                   push esi
// 00651685  8bf1                 mov esi, ecx
// 00651687  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0065168e  750d                 jne 0x65169d
// 00651690  85c0                 test eax, eax
// 00651692  7409                 je 0x65169d
// 00651694  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00651697  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 0065169d  50                   push eax
// 0065169e  8bce                 mov ecx, esi
// 006516a0  e87df2fdff           call 0x630922
// 006516a5  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006516ac  7512                 jne 0x6516c0
// 006516ae  8b16                 mov edx, dword ptr [esi]
// 006516b0  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 006516b6  6a00                 push 0
// 006516b8  6a01                 push 1
// 006516ba  6a01                 push 1
// 006516bc  8bce                 mov ecx, esi
// 006516be  ffd0                 call eax
// 006516c0  5e                   pop esi
// 006516c1  c20400               ret 4

struct CXTPToolBar {
    void SetSite(void* p);
    void OnSetSite(void* p);
    char pad[0xd0];
    int m_nSite;
    char pad2[0x184 - 0xd0 - 4];
    int m_nFlag;
};

void CXTPToolBar::OnSetSite(void* p)
{
    if (m_nSite == 0 && p != 0)
        m_nSite = *(int*)((char*)p + 0x20);
    SetSite(p);
    if (m_nFlag == 0)
    {
        void (CXTPToolBar::*fn)(int, int, int) = *(void (CXTPToolBar::**)(int, int, int))((*(char**)this) + 0x140);
        (this->*fn)(1, 1, 0);
    }
}
