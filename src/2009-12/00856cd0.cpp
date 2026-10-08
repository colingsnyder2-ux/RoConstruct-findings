// roc 2009-12 00856cd0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856cd0
//
// 00856cd0  c70144cc9f00         mov dword ptr [ecx], 0x9fcc44
// 00856cd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00856cd9  85c9                 test ecx, ecx
// 00856cdb  7407                 je 0x856ce4
// 00856cdd  51                   push ecx
// 00856cde  e823cef9ff           call 0x7f3b06
// 00856ce3  59                   pop ecx
// 00856ce4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
