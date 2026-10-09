// roc 2009-06 007d9f50  unit: CXTPDockingPaneSplitterContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d9f50
//
// 007d9f50  56                   push esi
// 007d9f51  8b742408             mov esi, dword ptr [esp + 8]
// 007d9f55  57                   push edi
// 007d9f56  8bf9                 mov edi, ecx
// 007d9f58  85f6                 test esi, esi
// 007d9f5a  750f                 jne 0x7d9f6b
// 007d9f5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d9f60  50                   push eax
// 007d9f61  e81a3bffff           call 0x7cda80
// 007d9f66  5f                   pop edi
// 007d9f67  5e                   pop esi
// 007d9f68  c20800               ret 8
// 007d9f6b  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d9f6e  56                   push esi
// 007d9f6f  51                   push ecx
// 007d9f70  8bcf                 mov ecx, edi
// 007d9f72  e879b80000           call 0x7e57f0
// 007d9f77  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d9f7b  895008               mov dword ptr [eax + 8], edx
// 007d9f7e  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d9f81  85c9                 test ecx, ecx
// 007d9f83  740a                 je 0x7d9f8f
// 007d9f85  8901                 mov dword ptr [ecx], eax
// 007d9f87  5f                   pop edi
// 007d9f88  894604               mov dword ptr [esi + 4], eax
// 007d9f8b  5e                   pop esi
// 007d9f8c  c20800               ret 8
// 007d9f8f  894704               mov dword ptr [edi + 4], eax
// 007d9f92  5f                   pop edi
// 007d9f93  894604               mov dword ptr [esi + 4], eax
// 007d9f96  5e                   pop esi
// 007d9f97  c20800               ret 8
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
