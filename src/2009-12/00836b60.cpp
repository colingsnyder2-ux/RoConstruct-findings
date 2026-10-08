// roc 2009-12 00836b60  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836b60
//
// 00836b60  c7016c7d9f00         mov dword ptr [ecx], 0x9f7d6c
// 00836b66  8b4904               mov ecx, dword ptr [ecx + 4]
// 00836b69  85c9                 test ecx, ecx
// 00836b6b  7407                 je 0x836b74
// 00836b6d  51                   push ecx
// 00836b6e  e893cffbff           call 0x7f3b06
// 00836b73  59                   pop ecx
// 00836b74  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
