// roc 2009-12 008ac880  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac880
//
// 008ac880  c701446ba000         mov dword ptr [ecx], 0xa06b44
// 008ac886  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ac889  85c9                 test ecx, ecx
// 008ac88b  7407                 je 0x8ac894
// 008ac88d  51                   push ecx
// 008ac88e  e87372f4ff           call 0x7f3b06
// 008ac893  59                   pop ecx
// 008ac894  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
