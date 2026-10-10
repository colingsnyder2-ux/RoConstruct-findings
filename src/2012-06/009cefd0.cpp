// roc 2012-06 009cefd0  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cefd0
//
// 009cefd0  8b01                 mov eax, dword ptr [ecx]
// 009cefd2  8b5074               mov edx, dword ptr [eax + 0x74]
// 009cefd5  ffd2                 call edx
// 009cefd7  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?OnControlAdded@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControls.cpp
