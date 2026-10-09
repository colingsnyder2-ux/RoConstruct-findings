// from server: 79% by colin
// roc 2007-08 006e61a0  unit: CXTPDockingPanePaintManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e61a0
//
// 006e61a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e61a4  56                   push esi
// 006e61a5  57                   push edi
// 006e61a6  50                   push eax
// 006e61a7  8bf1                 mov esi, ecx
// 006e61a9  e802f3ffff           call 0x6e54b0
// 006e61ae  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e61b2  50                   push eax
// 006e61b3  8d4c2414             lea ecx, [esp + 0x14]
// 006e61b7  51                   push ecx
// 006e61b8  8bcf                 mov ecx, edi
// 006e61ba  e8f1a6f4ff           call 0x6308b0
// 006e61bf  8b542424             mov edx, dword ptr [esp + 0x24]
// 006e61c3  52                   push edx
// 006e61c4  8bce                 mov ecx, esi
// 006e61c6  e8e5f2ffff           call 0x6e54b0
// 006e61cb  50                   push eax
// 006e61cc  50                   push eax
// 006e61cd  8d442418             lea eax, [esp + 0x18]
// 006e61d1  50                   push eax
// 006e61d2  8bcf                 mov ecx, edi
// 006e61d4  e8d1a6f4ff           call 0x6308aa
// 006e61d9  5f                   pop edi
// 006e61da  5e                   pop esi
// 006e61db  c21c00               ret 0x1c

struct CXTPDockingPanePaintManager {
    void* GetPane(int index);
    void DrawPane(void* pane, int a, int b, int c, int d, int e, int f);
};

struct CXTPDockingPane {
    void SetPane(void* pane, int index);
    void SetPane2(void* pane, int index);
};

void CXTPDockingPanePaintManager::DrawPane(void* pane, int a, int b, int c, int d, int e, int f) {
    void* p1 = GetPane(a);
    CXTPDockingPane* pPane = (CXTPDockingPane*)pane;
    pPane->SetPane(p1, b);
    void* p2 = GetPane(c);
    pPane->SetPane2(p2, d);
}
