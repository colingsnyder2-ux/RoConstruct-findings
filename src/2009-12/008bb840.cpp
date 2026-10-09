// roc 2009-12 008bb840  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bb840
//
// 008bb840  56                   push esi
// 008bb841  8bf1                 mov esi, ecx
// 008bb843  e858feffff           call 0x8bb6a0
// 008bb848  33c0                 xor eax, eax
// 008bb84a  89864c020000         mov dword ptr [esi + 0x24c], eax
// 008bb850  898650020000         mov dword ptr [esi + 0x250], eax
// 008bb856  c706947fa000         mov dword ptr [esi], 0xa07f94
// 008bb85c  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 008bb863  8bc6                 mov eax, esi
// 008bb865  5e                   pop esi
// 008bb866  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
