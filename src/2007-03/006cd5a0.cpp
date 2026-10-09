// roc 2007-03 006cd5a0  unit: seg_006c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cd5a0
//
// 006cd5a0  56                   push esi
// 006cd5a1  8b742408             mov esi, dword ptr [esp + 8]
// 006cd5a5  85f6                 test esi, esi
// 006cd5a7  57                   push edi
// 006cd5a8  8bf9                 mov edi, ecx
// 006cd5aa  750f                 jne 0x6cd5bb
// 006cd5ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cd5b0  50                   push eax
// 006cd5b1  e87a41ffff           call 0x6c1730
// 006cd5b6  5f                   pop edi
// 006cd5b7  5e                   pop esi
// 006cd5b8  c20800               ret 8
// 006cd5bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cd5be  56                   push esi
// 006cd5bf  51                   push ecx
// 006cd5c0  8bcf                 mov ecx, edi
// 006cd5c2  e8f9410100           call 0x6e17c0
// 006cd5c7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cd5cb  895008               mov dword ptr [eax + 8], edx
// 006cd5ce  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cd5d1  85c9                 test ecx, ecx
// 006cd5d3  740a                 je 0x6cd5df
// 006cd5d5  8901                 mov dword ptr [ecx], eax
// 006cd5d7  5f                   pop edi
// 006cd5d8  894604               mov dword ptr [esi + 4], eax
// 006cd5db  5e                   pop esi
// 006cd5dc  c20800               ret 8
// 006cd5df  894704               mov dword ptr [edi + 4], eax
// 006cd5e2  5f                   pop edi
// 006cd5e3  894604               mov dword ptr [esi + 4], eax
// 006cd5e6  5e                   pop esi
// 006cd5e7  c20800               ret 8
// copied from an identical function in another client (function ?AddPane@CXTPDockingPaneSplitterContainer@ns_ROCX000001@@QAEXPAXH@Z)

namespace ns_ROCX000001 {
struct CXTPDockingPaneSplitterContainer {
    void* InsertPane(void*, void*);
    void RemovePane(int);
    void AddPane(void*, int);
};

void CXTPDockingPaneSplitterContainer::AddPane(void* pane, int index) {
    if (pane == 0) {
        RemovePane(index);
        return;
    }
    void* node = InsertPane(*(void**)((char*)pane + 4), pane);
    *(int*)((char*)node + 8) = index;
    int* prev = *(int**)((char*)pane + 4);
    if (prev != 0) {
        *prev = (int)node;
        *(int**)((char*)pane + 4) = (int*)node;
    } else {
        *(int**)((char*)this + 4) = (int*)node;
        *(int**)((char*)pane + 4) = (int*)node;
    }
}
}
