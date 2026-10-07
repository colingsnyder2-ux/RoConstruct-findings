// roc 2012-06 009ab330  unit: CXTPReportControl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab330
//
// 009ab330  57                   push edi
// 009ab331  8bf9                 mov edi, ecx
// 009ab333  837f0400             cmp dword ptr [edi + 4], 0
// 009ab337  c7076c02c100         mov dword ptr [edi], 0xc1026c
// 009ab33d  742a                 je 0x9ab369
// 009ab33f  56                   push esi
// 009ab340  33f6                 xor esi, esi
// 009ab342  397708               cmp dword ptr [edi + 8], esi
// 009ab345  7e15                 jle 0x9ab35c
// 009ab347  8b4704               mov eax, dword ptr [edi + 4]
// 009ab34a  8b14f0               mov edx, dword ptr [eax + esi*8]
// 009ab34d  8d0cf0               lea ecx, [eax + esi*8]
// 009ab350  8b02                 mov eax, dword ptr [edx]
// 009ab352  6a00                 push 0
// 009ab354  ffd0                 call eax
// 009ab356  46                   inc esi
// 009ab357  3b7708               cmp esi, dword ptr [edi + 8]
// 009ab35a  7ceb                 jl 0x9ab347
// 009ab35c  8b4f04               mov ecx, dword ptr [edi + 4]
// 009ab35f  51                   push ecx
// 009ab360  e85570fdff           call 0x9823ba
// 009ab365  83c404               add esp, 4
// 009ab368  5e                   pop esi
// 009ab369  5f                   pop edi
// 009ab36a  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??1?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
