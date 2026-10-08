// roc 2010-06 00864940  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864940
//
// 00864940  83791000             cmp dword ptr [ecx + 0x10], 0
// 00864944  740a                 je 0x864950
// 00864946  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00864949  8b01                 mov eax, dword ptr [ecx]
// 0086494b  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086494e  ffe2                 jmp edx
// 00864950  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
