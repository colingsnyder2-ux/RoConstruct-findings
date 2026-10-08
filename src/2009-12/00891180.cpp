// roc 2009-12 00891180  unit: ATL::CRegObject  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891180
//
// 00891180  c701803aa000         mov dword ptr [ecx], 0xa03a80
// 00891186  8b4904               mov ecx, dword ptr [ecx + 4]
// 00891189  85c9                 test ecx, ecx
// 0089118b  7407                 je 0x891194
// 0089118d  51                   push ecx
// 0089118e  e87329f6ff           call 0x7f3b06
// 00891193  59                   pop ecx
// 00891194  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
