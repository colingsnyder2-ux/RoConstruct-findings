// roc 2012-06 00a451e0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a451e0
//
// 00a451e0  56                   push esi
// 00a451e1  8bf1                 mov esi, ecx
// 00a451e3  e858feffff           call 0xa45040
// 00a451e8  33c0                 xor eax, eax
// 00a451ea  89864c020000         mov dword ptr [esi + 0x24c], eax
// 00a451f0  898650020000         mov dword ptr [esi + 0x250], eax
// 00a451f6  c7062423c200         mov dword ptr [esi], 0xc22324
// 00a451fc  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 00a45203  8bc6                 mov eax, esi
// 00a45205  5e                   pop esi
// 00a45206  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
