// roc 2008-06 0075d4d0  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d4d0
//
// 0075d4d0  83791000             cmp dword ptr [ecx + 0x10], 0
// 0075d4d4  740a                 je 0x75d4e0
// 0075d4d6  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0075d4d9  8b01                 mov eax, dword ptr [ecx]
// 0075d4db  8b5058               mov edx, dword ptr [eax + 0x58]
// 0075d4de  ffe2                 jmp edx
// 0075d4e0  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
