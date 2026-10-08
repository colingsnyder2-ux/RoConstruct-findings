// from server: 73% by colin
// roc 2007-08 0063cf10  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cf10
//
// 0063cf10  8b0dd8868c00         mov ecx, dword ptr [0x8c86d8]
// 0063cf16  85c9                 test ecx, ecx
// 0063cf18  7405                 je 0x63cf1f
// 0063cf1a  e8c532ffff           call 0x6301e4
// 0063cf1f  8b442404             mov eax, dword ptr [esp + 4]
// 0063cf23  a3d8868c00           mov dword ptr [0x8c86d8], eax
// 0063cf28  c7802401000007000000 mov dword ptr [eax + 0x124], 7
// 0063cf32  8b0dd8868c00         mov ecx, dword ptr [0x8c86d8]
// 0063cf38  8b01                 mov eax, dword ptr [ecx]
// 0063cf3a  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0063cf40  ffe2                 jmp edx

struct CXTPPaintManager;

extern CXTPPaintManager* g_pPaintManager;

struct CXTPPaintManager {
    void SetPaintManager(CXTPPaintManager* p);
    virtual void OnSetPaintManager();
};

CXTPPaintManager* g_pPaintManager = 0;

void CXTPPaintManager::SetPaintManager(CXTPPaintManager* p) {
    if (g_pPaintManager != 0) {
        g_pPaintManager->OnSetPaintManager();
    }
    g_pPaintManager = p;
    *(int*)((char*)p + 0x124) = 7;
    CXTPPaintManager* pm = g_pPaintManager;
    void (__stdcall *fn)(CXTPPaintManager*) = *(void (__stdcall **)(CXTPPaintManager*))((*(int**)pm)[0xa8 / 4]);
    fn(pm);
}
