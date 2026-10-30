// roc 2009-12 0081c510  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c510
//
// 0081c510  56                   push esi
// 0081c511  57                   push edi
// 0081c512  8bf9                 mov edi, ecx
// 0081c514  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0081c51a  85f6                 test esi, esi
// 0081c51c  741a                 je 0x81c538
// 0081c51e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0081c521  85c9                 test ecx, ecx
// 0081c523  7413                 je 0x81c538
// 0081c525  e886e7bfff           call 0x41acb0
// 0081c52a  3bc7                 cmp eax, edi
// 0081c52c  750a                 jne 0x81c538
// 0081c52e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0081c531  5f                   pop edi
// 0081c532  5e                   pop esi
// 0081c533  e948710800           jmp 0x8a3680
// 0081c538  5f                   pop edi
// 0081c539  5e                   pop esi
// 0081c53a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
