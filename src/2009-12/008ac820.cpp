// roc 2009-12 008ac820  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac820
//
// 008ac820  c7012c6ba000         mov dword ptr [ecx], 0xa06b2c
// 008ac826  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ac829  85c9                 test ecx, ecx
// 008ac82b  7407                 je 0x8ac834
// 008ac82d  51                   push ecx
// 008ac82e  e8d372f4ff           call 0x7f3b06
// 008ac833  59                   pop ecx
// 008ac834  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
