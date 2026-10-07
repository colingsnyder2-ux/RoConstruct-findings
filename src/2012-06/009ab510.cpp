// roc 2012-06 009ab510  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab510
//
// 009ab510  56                   push esi
// 009ab511  8b742408             mov esi, dword ptr [esp + 8]
// 009ab515  57                   push edi
// 009ab516  8bf9                 mov edi, ecx
// 009ab518  85f6                 test esi, esi
// 009ab51a  7d05                 jge 0x9ab521
// 009ab51c  e89f6efdff           call 0x9823c0
// 009ab521  3b7708               cmp esi, dword ptr [edi + 8]
// 009ab524  7c0b                 jl 0x9ab531
// 009ab526  6aff                 push -1
// 009ab528  8d4601               lea eax, [esi + 1]
// 009ab52b  50                   push eax
// 009ab52c  e87ffeffff           call 0x9ab3b0
// 009ab531  8b5704               mov edx, dword ptr [edi + 4]
// 009ab534  8d0c76               lea ecx, [esi + esi*2]
// 009ab537  8d048a               lea eax, [edx + ecx*4]
// 009ab53a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ab53e  8b11                 mov edx, dword ptr [ecx]
// 009ab540  8910                 mov dword ptr [eax], edx
// 009ab542  8b5104               mov edx, dword ptr [ecx + 4]
// 009ab545  895004               mov dword ptr [eax + 4], edx
// 009ab548  8b4908               mov ecx, dword ptr [ecx + 8]
// 009ab54b  5f                   pop edi
// 009ab54c  894808               mov dword ptr [eax + 8], ecx
// 009ab54f  5e                   pop esi
// 009ab550  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarRecurrencePattern.cpp (function ?SetAtGrow@?$CArray@VCOleDateTime@ATL@@AAV12@@@QAEXHAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarRecurrencePattern.cpp
