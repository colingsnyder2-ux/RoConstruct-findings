// roc 2011-06 008c1d90  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1d90
//
// 008c1d90  83791000             cmp dword ptr [ecx + 0x10], 0
// 008c1d94  740a                 je 0x8c1da0
// 008c1d96  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008c1d99  8b01                 mov eax, dword ptr [ecx]
// 008c1d9b  8b5058               mov edx, dword ptr [eax + 0x58]
// 008c1d9e  ffe2                 jmp edx
// 008c1da0  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
