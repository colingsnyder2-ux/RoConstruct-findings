// roc 2010-06 007d7be0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d7be0
//
// 007d7be0  56                   push esi
// 007d7be1  57                   push edi
// 007d7be2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d7be6  8bf1                 mov esi, ecx
// 007d7be8  85ff                 test edi, edi
// 007d7bea  7d05                 jge 0x7d7bf1
// 007d7bec  e85b00fdff           call 0x7a7c4c
// 007d7bf1  3b7e08               cmp edi, dword ptr [esi + 8]
// 007d7bf4  7c0b                 jl 0x7d7c01
// 007d7bf6  6aff                 push -1
// 007d7bf8  8d4701               lea eax, [edi + 1]
// 007d7bfb  50                   push eax
// 007d7bfc  e88fefffff           call 0x7d6b90
// 007d7c01  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d7c04  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d7c08  8b4204               mov eax, dword ptr [edx + 4]
// 007d7c0b  8b74f904             mov esi, dword ptr [ecx + edi*8 + 4]
// 007d7c0f  8d0cf9               lea ecx, [ecx + edi*8]
// 007d7c12  894104               mov dword ptr [ecx + 4], eax
// 007d7c15  85c0                 test eax, eax
// 007d7c17  740a                 je 0x7d7c23
// 007d7c19  83c004               add eax, 4
// 007d7c1c  50                   push eax
// 007d7c1d  ff1580a39e00         call dword ptr [0x9ea380]
// 007d7c23  85f6                 test esi, esi
// 007d7c25  7407                 je 0x7d7c2e
// 007d7c27  8bce                 mov ecx, esi
// 007d7c29  e8ee02fdff           call 0x7a7f1c
// 007d7c2e  5f                   pop edi
// 007d7c2f  5e                   pop esi
// 007d7c30  c20800               ret 8
// library xtp-13.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetAtGrow@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEXHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
