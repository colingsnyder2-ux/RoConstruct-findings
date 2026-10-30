// roc 2009-12 0081b200  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b200
//
// 0081b200  c701b8499f00         mov dword ptr [ecx], 0x9f49b8
// 0081b206  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081b209  85c9                 test ecx, ecx
// 0081b20b  7407                 je 0x81b214
// 0081b20d  51                   push ecx
// 0081b20e  e8f388fdff           call 0x7f3b06
// 0081b213  59                   pop ecx
// 0081b214  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
