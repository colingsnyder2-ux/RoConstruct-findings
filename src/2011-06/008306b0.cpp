// roc 2011-06 008306b0  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008306b0
//
// 008306b0  56                   push esi
// 008306b1  57                   push edi
// 008306b2  8bf9                 mov edi, ecx
// 008306b4  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 008306ba  85f6                 test esi, esi
// 008306bc  741a                 je 0x8306d8
// 008306be  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008306c1  85c9                 test ecx, ecx
// 008306c3  7413                 je 0x8306d8
// 008306c5  e8861e0800           call 0x8b2550
// 008306ca  3bc7                 cmp eax, edi
// 008306cc  750a                 jne 0x8306d8
// 008306ce  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 008306d1  5f                   pop edi
// 008306d2  5e                   pop esi
// 008306d3  e9f81f0800           jmp 0x8b26d0
// 008306d8  5f                   pop edi
// 008306d9  5e                   pop esi
// 008306da  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
