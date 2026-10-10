// roc 2008-06 006f1a00  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1a00
//
// 006f1a00  8b01                 mov eax, dword ptr [ecx]
// 006f1a02  8b5074               mov edx, dword ptr [eax + 0x74]
// 006f1a05  ffd2                 call edx
// 006f1a07  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?OnControlAdded@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
