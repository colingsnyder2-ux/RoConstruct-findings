// roc 2012-06 009a8ca0  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8ca0
//
// 009a8ca0  56                   push esi
// 009a8ca1  57                   push edi
// 009a8ca2  8bf9                 mov edi, ecx
// 009a8ca4  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 009a8caa  85f6                 test esi, esi
// 009a8cac  741a                 je 0x9a8cc8
// 009a8cae  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 009a8cb1  85c9                 test ecx, ecx
// 009a8cb3  7413                 je 0x9a8cc8
// 009a8cb5  e8b6c0abff           call 0x464d70
// 009a8cba  3bc7                 cmp eax, edi
// 009a8cbc  750a                 jne 0x9a8cc8
// 009a8cbe  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 009a8cc1  5f                   pop edi
// 009a8cc2  5e                   pop esi
// 009a8cc3  e9781e0800           jmp 0xa2ab40
// 009a8cc8  5f                   pop edi
// 009a8cc9  5e                   pop esi
// 009a8cca  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
