// roc 2010-06 0086f990  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086f990
//
// 0086f990  56                   push esi
// 0086f991  8bf1                 mov esi, ecx
// 0086f993  e858feffff           call 0x86f7f0
// 0086f998  33c0                 xor eax, eax
// 0086f99a  89864c020000         mov dword ptr [esi + 0x24c], eax
// 0086f9a0  898650020000         mov dword ptr [esi + 0x250], eax
// 0086f9a6  c7067cc2a600         mov dword ptr [esi], 0xa6c27c
// 0086f9ac  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 0086f9b3  8bc6                 mov eax, esi
// 0086f9b5  5e                   pop esi
// 0086f9b6  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
