// roc 2011-06 00837d70  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837d70
//
// 00837d70  56                   push esi
// 00837d71  57                   push edi
// 00837d72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00837d76  8bf1                 mov esi, ecx
// 00837d78  85ff                 test edi, edi
// 00837d7a  7d05                 jge 0x837d81
// 00837d7c  e88925fdff           call 0x80a30a
// 00837d81  3b7e08               cmp edi, dword ptr [esi + 8]
// 00837d84  7c0b                 jl 0x837d91
// 00837d86  6aff                 push -1
// 00837d88  8d4701               lea eax, [edi + 1]
// 00837d8b  50                   push eax
// 00837d8c  e88fefffff           call 0x836d20
// 00837d91  8b4e04               mov ecx, dword ptr [esi + 4]
// 00837d94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00837d98  8b4204               mov eax, dword ptr [edx + 4]
// 00837d9b  8b74f904             mov esi, dword ptr [ecx + edi*8 + 4]
// 00837d9f  8d0cf9               lea ecx, [ecx + edi*8]
// 00837da2  894104               mov dword ptr [ecx + 4], eax
// 00837da5  85c0                 test eax, eax
// 00837da7  740a                 je 0x837db3
// 00837da9  83c004               add eax, 4
// 00837dac  50                   push eax
// 00837dad  ff154c03a400         call dword ptr [0xa4034c]
// 00837db3  85f6                 test esi, esi
// 00837db5  7407                 je 0x837dbe
// 00837db7  8bce                 mov ecx, esi
// 00837db9  e81c28fdff           call 0x80a5da
// 00837dbe  5f                   pop edi
// 00837dbf  5e                   pop esi
// 00837dc0  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetAtGrow@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEXHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
