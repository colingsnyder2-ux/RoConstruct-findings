// from server: 75% by colin
// roc 2007-08 006daac0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006daac0
//
// 006daac0  e80befffff           call 0x6d99d0
// 006daac5  83782000             cmp dword ptr [eax + 0x20], 0
// 006daac9  7416                 je 0x6daae1
// 006daacb  8b442404             mov eax, dword ptr [esp + 4]
// 006daacf  6a00                 push 0
// 006daad1  50                   push eax
// 006daad2  e8f9eeffff           call 0x6d99d0
// 006daad7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006daada  51                   push ecx
// 006daadb  ff15dcec7700         call dword ptr [0x77ecdc]
// 006daae1  c20800               ret 8

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager;

extern "C" void* __fastcall sub_006d99d0(void*);
extern "C" int __stdcall InvalidateRect(void*, const void*, int);

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager {
    void func_006daac0(void* param1, int param2);
};

void CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::func_006daac0(void* param1, int param2)
{
    void* p = sub_006d99d0(this);
    if (*(int*)((char*)p + 0x20) != 0) {
        void* q = sub_006d99d0(param1);
        InvalidateRect(*(void**)((char*)q + 0x20), 0, 0);
    }
}
