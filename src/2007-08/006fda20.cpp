// from server: 89% by colin
// roc 2007-08 006fda20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fda20
//
// 006fda20  56                   push esi
// 006fda21  8bf1                 mov esi, ecx
// 006fda23  8d4e28               lea ecx, [esi + 0x28]
// 006fda26  c706b4cd7d00         mov dword ptr [esi], 0x7dcdb4
// 006fda2c  ff15acdd7700         call dword ptr [0x77ddac]
// 006fda32  8b442408             mov eax, dword ptr [esp + 8]
// 006fda36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fda3a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fda3e  89460c               mov dword ptr [esi + 0xc], eax
// 006fda41  8d4610               lea eax, [esi + 0x10]
// 006fda44  50                   push eax
// 006fda45  894e04               mov dword ptr [esi + 4], ecx
// 006fda48  895608               mov dword ptr [esi + 8], edx
// 006fda4b  ff1514ee7700         call dword ptr [0x77ee14]
// 006fda51  33c0                 xor eax, eax
// 006fda53  894624               mov dword ptr [esi + 0x24], eax
// 006fda56  89462c               mov dword ptr [esi + 0x2c], eax
// 006fda59  c7462001000000       mov dword ptr [esi + 0x20], 1
// 006fda60  8bc6                 mov eax, esi
// 006fda62  5e                   pop esi
// 006fda63  c20c00               ret 0xc

struct CAutoHidePanelTabManager {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    char rect[16];
    int field20;
    int field24;
    int field28;
    int field2C;
    CAutoHidePanelTabManager* construct(int a, int b, int c);
};

extern "C" void __stdcall SetRectEmpty(void*);
extern "C" void (__stdcall *sub_77ddac)();
extern "C" void (__stdcall *sub_77ee14)(void*);

CAutoHidePanelTabManager* CAutoHidePanelTabManager::construct(int a, int b, int c) {
    this->vtable = (void*)0x7dcdb4;
    sub_77ddac();
    this->fieldC = a;
    this->field4 = b;
    this->field8 = c;
    sub_77ee14(&this->rect);
    this->field24 = 0;
    this->field2C = 0;
    this->field20 = 1;
    return this;
}
