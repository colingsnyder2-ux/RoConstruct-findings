// roc 2009-12 008b0870  unit: CXTPDockingPane  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0870
//
// 008b0870  83791000             cmp dword ptr [ecx + 0x10], 0
// 008b0874  740a                 je 0x8b0880
// 008b0876  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008b0879  8b01                 mov eax, dword ptr [ecx]
// 008b087b  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b087e  ffe2                 jmp edx
// 008b0880  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?CreateContainer@CXTPDockingPaneBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
