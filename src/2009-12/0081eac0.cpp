// roc 2009-12 0081eac0  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081eac0
//
// 0081eac0  c701ec4e9f00         mov dword ptr [ecx], 0x9f4eec
// 0081eac6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081eac9  85c9                 test ecx, ecx
// 0081eacb  7407                 je 0x81ead4
// 0081eacd  51                   push ecx
// 0081eace  e83350fdff           call 0x7f3b06
// 0081ead3  59                   pop ecx
// 0081ead4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
