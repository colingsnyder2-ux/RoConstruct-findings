// roc 2009-12 008b0820  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0820
//
// 008b0820  83791000             cmp dword ptr [ecx + 0x10], 0
// 008b0824  740a                 je 0x8b0830
// 008b0826  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008b0829  8b01                 mov eax, dword ptr [ecx]
// 008b082b  8b4038               mov eax, dword ptr [eax + 0x38]
// 008b082e  ffe0                 jmp eax
// 008b0830  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?InvalidatePane@CXTPDockingPaneBase@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
