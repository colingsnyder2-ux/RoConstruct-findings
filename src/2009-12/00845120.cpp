// roc 2009-12 00845120  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845120
//
// 00845120  8b01                 mov eax, dword ptr [ecx]
// 00845122  8b5074               mov edx, dword ptr [eax + 0x74]
// 00845125  ffd2                 call edx
// 00845127  c20400               ret 4
// copied from an identical function in another client (function ?OnControlAdded@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp