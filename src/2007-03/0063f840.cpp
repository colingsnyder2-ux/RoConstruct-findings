// from server: 100% by tester
// roc 2007-03 0063f840  unit: seg_00630000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063f840
//
// 0063f840  8b442404             mov eax, dword ptr [esp + 4]
// 0063f844  56                   push esi
// 0063f845  8bf1                 mov esi, ecx
// 0063f847  83becc00000000       cmp dword ptr [esi + 0xcc], 0
// 0063f84e  750d                 jne 0x63f85d
// 0063f850  85c0                 test eax, eax
// 0063f852  7409                 je 0x63f85d
// 0063f854  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0063f857  898ecc000000         mov dword ptr [esi + 0xcc], ecx
// 0063f85d  50                   push eax
// 0063f85e  8bce                 mov ecx, esi
// 0063f860  e827f5fdff           call 0x61ed8c
// 0063f865  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 0063f86c  7512                 jne 0x63f880
// 0063f86e  8b16                 mov edx, dword ptr [esi]
// 0063f870  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0063f876  6a00                 push 0
// 0063f878  6a01                 push 1
// 0063f87a  6a01                 push 1
// 0063f87c  8bce                 mov ecx, esi
// 0063f87e  ffd0                 call eax
// 0063f880  5e                   pop esi
// 0063f881  c20400               ret 4

struct CXTPToolBar {
    void SetSite(void* p);
    void OnSetSite(void* p);
    char pad[0xcc];
    int m_nSite;
    char pad2[0x184 - 0xcc - 4];
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
