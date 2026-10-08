// from server: 92% by colin
// roc 2007-08 006fd540  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd540
//
// 006fd540  56                   push esi
// 006fd541  8bf1                 mov esi, ecx
// 006fd543  8b06                 mov eax, dword ptr [esi]
// 006fd545  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fd548  ffd2                 call edx
// 006fd54a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fd54e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd552  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 006fd558  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fd55c  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 006fd562  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 006fd568  8b16                 mov edx, dword ptr [esi]
// 006fd56a  8b4208               mov eax, dword ptr [edx + 8]
// 006fd56d  8bce                 mov ecx, esi
// 006fd56f  ffd0                 call eax
// 006fd571  5e                   pop esi
// 006fd572  c21800               ret 0x18

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager {
    void SetValues(int a, int b, int c);
};

void CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::SetValues(int a, int b, int c) {
    int* p = (int*)(*(int (__thiscall**)(void*))(*(int*)this + 0x2c))(this);
    p[0x36] = a;
    p[0x35] = c;
    p[0x34] = b;
    (*(void (__thiscall**)(void*))(*(int*)this + 8))(this);
}
