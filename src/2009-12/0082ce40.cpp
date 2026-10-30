// roc 2009-12 0082ce40  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ce40
//
// 0082ce40  c701b0619f00         mov dword ptr [ecx], 0x9f61b0
// 0082ce46  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082ce49  85c9                 test ecx, ecx
// 0082ce4b  7407                 je 0x82ce54
// 0082ce4d  51                   push ecx
// 0082ce4e  e8b36cfcff           call 0x7f3b06
// 0082ce53  59                   pop ecx
// 0082ce54  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
