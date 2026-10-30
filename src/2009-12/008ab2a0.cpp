// roc 2009-12 008ab2a0  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab2a0
//
// 008ab2a0  c701e065a000         mov dword ptr [ecx], 0xa065e0
// 008ab2a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ab2a9  85c9                 test ecx, ecx
// 008ab2ab  7407                 je 0x8ab2b4
// 008ab2ad  51                   push ecx
// 008ab2ae  e85388f4ff           call 0x7f3b06
// 008ab2b3  59                   pop ecx
// 008ab2b4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
