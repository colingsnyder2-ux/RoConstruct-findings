// roc 2011-06 00832f10  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832f10
//
// 00832f10  56                   push esi
// 00832f11  8b742408             mov esi, dword ptr [esp + 8]
// 00832f15  57                   push edi
// 00832f16  8bf9                 mov edi, ecx
// 00832f18  85f6                 test esi, esi
// 00832f1a  7d05                 jge 0x832f21
// 00832f1c  e8e973fdff           call 0x80a30a
// 00832f21  3b7708               cmp esi, dword ptr [edi + 8]
// 00832f24  7c0b                 jl 0x832f31
// 00832f26  6aff                 push -1
// 00832f28  8d4601               lea eax, [esi + 1]
// 00832f2b  50                   push eax
// 00832f2c  e87ffeffff           call 0x832db0
// 00832f31  8b5704               mov edx, dword ptr [edi + 4]
// 00832f34  8d0c76               lea ecx, [esi + esi*2]
// 00832f37  8d048a               lea eax, [edx + ecx*4]
// 00832f3a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00832f3e  8b11                 mov edx, dword ptr [ecx]
// 00832f40  8910                 mov dword ptr [eax], edx
// 00832f42  8b5104               mov edx, dword ptr [ecx + 4]
// 00832f45  895004               mov dword ptr [eax + 4], edx
// 00832f48  8b4908               mov ecx, dword ptr [ecx + 8]
// 00832f4b  5f                   pop edi
// 00832f4c  894808               mov dword ptr [eax + 8], ecx
// 00832f4f  5e                   pop esi
// 00832f50  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarRecurrencePattern.cpp (function ?SetAtGrow@?$CArray@VCOleDateTime@ATL@@AAV12@@@QAEXHAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarRecurrencePattern.cpp
