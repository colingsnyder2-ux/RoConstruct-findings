// roc 2008-06 00798ef0  unit: CXTPRibbonQuickAccessControls  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798ef0
//
// 00798ef0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00798ef3  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00798ef9  8b11                 mov edx, dword ptr [ecx]
// 00798efb  8b5258               mov edx, dword ptr [edx + 0x58]
// 00798efe  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoved@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp
