// roc 2009-12 008f0200  unit: CXTPRibbonQuickAccessControls  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0200
//
// 008f0200  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008f0203  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008f0209  8b11                 mov edx, dword ptr [ecx]
// 008f020b  8b5258               mov edx, dword ptr [edx + 0x58]
// 008f020e  ffe2                 jmp edx
// copied from an identical function in another client (function ?OnControlRemoved@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp