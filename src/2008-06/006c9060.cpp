// from server: 100% by auto
// roc 2008-06 006c9060  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9060
//
// 006c9060  56                   push esi
// 006c9061  57                   push edi
// 006c9062  8bf9                 mov edi, ecx
// 006c9064  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 006c906a  85f6                 test esi, esi
// 006c906c  741a                 je 0x6c9088
// 006c906e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 006c9071  85c9                 test ecx, ecx
// 006c9073  7413                 je 0x6c9088
// 006c9075  e86678d5ff           call 0x4208e0
// 006c907a  3bc7                 cmp eax, edi
// 006c907c  750a                 jne 0x6c9088
// 006c907e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 006c9081  5f                   pop edi
// 006c9082  5e                   pop esi
// 006c9083  e938650800           jmp 0x74f5c0
// 006c9088  5f                   pop edi
// 006c9089  5e                   pop esi
// 006c908a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?UpdateSubList@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
