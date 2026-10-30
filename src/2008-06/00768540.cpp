// from server: 100% by auto
// roc 2008-06 00768540  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00768540
//
// 00768540  56                   push esi
// 00768541  8bf1                 mov esi, ecx
// 00768543  e858feffff           call 0x7683a0
// 00768548  33c0                 xor eax, eax
// 0076854a  89864c020000         mov dword ptr [esi + 0x24c], eax
// 00768550  898650020000         mov dword ptr [esi + 0x250], eax
// 00768556  c706ec6a8600         mov dword ptr [esi], 0x866aec
// 0076855c  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 00768563  8bc6                 mov eax, esi
// 00768565  5e                   pop esi
// 00768566  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
