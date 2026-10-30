// from server: 100% by auto
// roc 2012-06 009dcf40  unit: PAUHWND__::?$CArray  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcf40
//
// 009dcf40  56                   push esi
// 009dcf41  57                   push edi
// 009dcf42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009dcf46  8bf1                 mov esi, ecx
// 009dcf48  85ff                 test edi, edi
// 009dcf4a  7d05                 jge 0x9dcf51
// 009dcf4c  e86f54faff           call 0x9823c0
// 009dcf51  3b7e08               cmp edi, dword ptr [esi + 8]
// 009dcf54  7c0b                 jl 0x9dcf61
// 009dcf56  6aff                 push -1
// 009dcf58  8d4701               lea eax, [edi + 1]
// 009dcf5b  50                   push eax
// 009dcf5c  e8ffb2fbff           call 0x998260
// 009dcf61  8b542410             mov edx, dword ptr [esp + 0x10]
// 009dcf65  8b4e04               mov ecx, dword ptr [esi + 4]
// 009dcf68  8b02                 mov eax, dword ptr [edx]
// 009dcf6a  8904b9               mov dword ptr [ecx + edi*4], eax
// 009dcf6d  5f                   pop edi
// 009dcf6e  5e                   pop esi
// 009dcf6f  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ?SetAtGrow@?$CArray@PAVCXTPCalendarDayViewEvent@@AAPAV1@@@QAEXHAAPAVCXTPCalendarDayViewEvent@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
