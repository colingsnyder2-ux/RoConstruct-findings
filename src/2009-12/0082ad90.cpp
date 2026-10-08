// roc 2009-12 0082ad90  unit: CInstanceRecord  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ad90
//
// 0082ad90  c70174599f00         mov dword ptr [ecx], 0x9f5974
// 0082ad96  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082ad99  85c9                 test ecx, ecx
// 0082ad9b  7407                 je 0x82ada4
// 0082ad9d  51                   push ecx
// 0082ad9e  e8638dfcff           call 0x7f3b06
// 0082ada3  59                   pop ecx
// 0082ada4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
