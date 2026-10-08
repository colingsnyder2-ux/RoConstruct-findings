// roc 2011-06 008ccdf0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ccdf0
//
// 008ccdf0  56                   push esi
// 008ccdf1  8bf1                 mov esi, ecx
// 008ccdf3  e858feffff           call 0x8ccc50
// 008ccdf8  33c0                 xor eax, eax
// 008ccdfa  89864c020000         mov dword ptr [esi + 0x24c], eax
// 008cce00  898650020000         mov dword ptr [esi + 0x250], eax
// 008cce06  c7068c6cad00         mov dword ptr [esi], 0xad6c8c
// 008cce0c  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 008cce13  8bc6                 mov eax, esi
// 008cce15  5e                   pop esi
// 008cce16  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CXTPDockingPaneShortcutBar2003Theme@XTPDockingPanePaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
