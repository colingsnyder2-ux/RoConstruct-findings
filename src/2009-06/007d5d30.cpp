// roc 2009-06 007d5d30  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5d30
//
// 007d5d30  83791000             cmp dword ptr [ecx + 0x10], 0
// 007d5d34  740a                 je 0x7d5d40
// 007d5d36  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007d5d39  8b01                 mov eax, dword ptr [ecx]
// 007d5d3b  8b5058               mov edx, dword ptr [eax + 0x58]
// 007d5d3e  ffe2                 jmp edx
// 007d5d40  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
