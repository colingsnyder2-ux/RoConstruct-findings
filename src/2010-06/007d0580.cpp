// roc 2010-06 007d0580  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0580
//
// 007d0580  56                   push esi
// 007d0581  57                   push edi
// 007d0582  8bf9                 mov edi, ecx
// 007d0584  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007d058a  85f6                 test esi, esi
// 007d058c  741a                 je 0x7d05a8
// 007d058e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007d0591  85c9                 test ecx, ecx
// 007d0593  7413                 je 0x7d05a8
// 007d0595  e886e10300           call 0x80e720
// 007d059a  3bc7                 cmp eax, edi
// 007d059c  750a                 jne 0x7d05a8
// 007d059e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007d05a1  5f                   pop edi
// 007d05a2  5e                   pop esi
// 007d05a3  e948720800           jmp 0x8577f0
// 007d05a8  5f                   pop edi
// 007d05a9  5e                   pop esi
// 007d05aa  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
