// roc 2012-06 00a3a1a0  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a1a0
//
// 00a3a1a0  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a3a1a4  740a                 je 0xa3a1b0
// 00a3a1a6  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a3a1a9  8b01                 mov eax, dword ptr [ecx]
// 00a3a1ab  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a3a1ae  ffe2                 jmp edx
// 00a3a1b0  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
