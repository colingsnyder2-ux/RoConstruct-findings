// from server: 100% by auto
// roc 2012-06 009b0380  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0380
//
// 009b0380  56                   push esi
// 009b0381  57                   push edi
// 009b0382  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b0386  8bf1                 mov esi, ecx
// 009b0388  85ff                 test edi, edi
// 009b038a  7d05                 jge 0x9b0391
// 009b038c  e82f20fdff           call 0x9823c0
// 009b0391  3b7e08               cmp edi, dword ptr [esi + 8]
// 009b0394  7c0b                 jl 0x9b03a1
// 009b0396  6aff                 push -1
// 009b0398  8d4701               lea eax, [edi + 1]
// 009b039b  50                   push eax
// 009b039c  e83fefffff           call 0x9af2e0
// 009b03a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 009b03a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 009b03a8  8b4204               mov eax, dword ptr [edx + 4]
// 009b03ab  8b74f904             mov esi, dword ptr [ecx + edi*8 + 4]
// 009b03af  8d0cf9               lea ecx, [ecx + edi*8]
// 009b03b2  894104               mov dword ptr [ecx + 4], eax
// 009b03b5  85c0                 test eax, eax
// 009b03b7  740a                 je 0x9b03c3
// 009b03b9  83c004               add eax, 4
// 009b03bc  50                   push eax
// 009b03bd  ff159821b200         call dword ptr [0xb22198]
// 009b03c3  85f6                 test esi, esi
// 009b03c5  7407                 je 0x9b03ce
// 009b03c7  8bce                 mov ecx, esi
// 009b03c9  e8bc22fdff           call 0x98268a
// 009b03ce  5f                   pop edi
// 009b03cf  5e                   pop esi
// 009b03d0  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetAtGrow@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEXHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
