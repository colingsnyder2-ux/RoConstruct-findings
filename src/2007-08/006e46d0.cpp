// from server: 100% by colin
// roc 2007-08 006e46d0  unit: CXTPDockingPaneSplitterContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e46d0
//
// 006e46d0  56                   push esi
// 006e46d1  8b742408             mov esi, dword ptr [esp + 8]
// 006e46d5  85f6                 test esi, esi
// 006e46d7  57                   push edi
// 006e46d8  8bf9                 mov edi, ecx
// 006e46da  750f                 jne 0x6e46eb
// 006e46dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e46e0  50                   push eax
// 006e46e1  e85a3fffff           call 0x6d8640
// 006e46e6  5f                   pop edi
// 006e46e7  5e                   pop esi
// 006e46e8  c20800               ret 8
// 006e46eb  8b4e04               mov ecx, dword ptr [esi + 4]
// 006e46ee  56                   push esi
// 006e46ef  51                   push ecx
// 006e46f0  8bcf                 mov ecx, edi
// 006e46f2  e8b9fdffff           call 0x6e44b0
// 006e46f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e46fb  895008               mov dword ptr [eax + 8], edx
// 006e46fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 006e4701  85c9                 test ecx, ecx
// 006e4703  740a                 je 0x6e470f
// 006e4705  8901                 mov dword ptr [ecx], eax
// 006e4707  5f                   pop edi
// 006e4708  894604               mov dword ptr [esi + 4], eax
// 006e470b  5e                   pop esi
// 006e470c  c20800               ret 8
// 006e470f  894704               mov dword ptr [edi + 4], eax
// 006e4712  5f                   pop edi
// 006e4713  894604               mov dword ptr [esi + 4], eax
// 006e4716  5e                   pop esi
// 006e4717  c20800               ret 8

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
