// roc 2009-12 008c7930  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7930
//
// 008c7930  c701989ea000         mov dword ptr [ecx], 0xa09e98
// 008c7936  8b4904               mov ecx, dword ptr [ecx + 4]
// 008c7939  85c9                 test ecx, ecx
// 008c793b  7407                 je 0x8c7944
// 008c793d  51                   push ecx
// 008c793e  e8c3c1f2ff           call 0x7f3b06
// 008c7943  59                   pop ecx
// 008c7944  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
