// from server: 87% by colin
// roc 2007-08 006e4720  unit: CXTPDockingPaneSplitterContainer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4720
//
// 006e4720  56                   push esi
// 006e4721  8b742408             mov esi, dword ptr [esp + 8]
// 006e4725  85f6                 test esi, esi
// 006e4727  57                   push edi
// 006e4728  8bf9                 mov edi, ecx
// 006e472a  750f                 jne 0x6e473b
// 006e472c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e4730  50                   push eax
// 006e4731  e83a000000           call 0x6e4770
// 006e4736  5f                   pop edi
// 006e4737  5e                   pop esi
// 006e4738  c20800               ret 8
// 006e473b  8b0e                 mov ecx, dword ptr [esi]
// 006e473d  51                   push ecx
// 006e473e  56                   push esi
// 006e473f  8bcf                 mov ecx, edi
// 006e4741  e86afdffff           call 0x6e44b0
// 006e4746  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e474a  895008               mov dword ptr [eax + 8], edx
// 006e474d  8b0e                 mov ecx, dword ptr [esi]
// 006e474f  85c9                 test ecx, ecx
// 006e4751  740a                 je 0x6e475d
// 006e4753  894104               mov dword ptr [ecx + 4], eax
// 006e4756  5f                   pop edi
// 006e4757  8906                 mov dword ptr [esi], eax
// 006e4759  5e                   pop esi
// 006e475a  c20800               ret 8
// 006e475d  894708               mov dword ptr [edi + 8], eax
// 006e4760  5f                   pop edi
// 006e4761  8906                 mov dword ptr [esi], eax
// 006e4763  5e                   pop esi
// 006e4764  c20800               ret 8

struct CXTPDockingPaneSplitterContainer {
    void InsertPane(void* pPane, int nIndex);
    void AddPane(void* pPane, int nIndex);
    void* InsertPaneAt(void* pPane, void* pNode);
    char pad[8];
};

void CXTPDockingPaneSplitterContainer::InsertPane(void* pPane, int nIndex) {
    if (pPane == 0) {
        AddPane(pPane, nIndex);
        return;
    }
    void* pNode = *(void**)pPane;
    void* pNew = InsertPaneAt(pPane, pNode);
    *(int*)((char*)pNew + 8) = nIndex;
    void* pNext = *(void**)pPane;
    if (pNext != 0) {
        *(void**)((char*)pNext + 4) = pNew;
        *(void**)pPane = pNew;
    } else {
        *(void**)((char*)this + 8) = pNew;
        *(void**)pPane = pNew;
    }
}
