// roc 2011-06 00832d30  unit: CXTPReportControl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832d30
//
// 00832d30  57                   push edi
// 00832d31  8bf9                 mov edi, ecx
// 00832d33  837f0400             cmp dword ptr [edi + 4], 0
// 00832d37  c7078c4bac00         mov dword ptr [edi], 0xac4b8c
// 00832d3d  742a                 je 0x832d69
// 00832d3f  56                   push esi
// 00832d40  33f6                 xor esi, esi
// 00832d42  397708               cmp dword ptr [edi + 8], esi
// 00832d45  7e15                 jle 0x832d5c
// 00832d47  8b4704               mov eax, dword ptr [edi + 4]
// 00832d4a  8b14f0               mov edx, dword ptr [eax + esi*8]
// 00832d4d  8d0cf0               lea ecx, [eax + esi*8]
// 00832d50  8b02                 mov eax, dword ptr [edx]
// 00832d52  6a00                 push 0
// 00832d54  ffd0                 call eax
// 00832d56  46                   inc esi
// 00832d57  3b7708               cmp esi, dword ptr [edi + 8]
// 00832d5a  7ceb                 jl 0x832d47
// 00832d5c  8b4f04               mov ecx, dword ptr [edi + 4]
// 00832d5f  51                   push ecx
// 00832d60  e89f75fdff           call 0x80a304
// 00832d65  83c404               add esp, 4
// 00832d68  5e                   pop esi
// 00832d69  5f                   pop edi
// 00832d6a  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??1?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
