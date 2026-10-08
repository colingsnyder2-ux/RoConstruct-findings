// from server: 100% by auto
// roc 2011-06 00864910  unit: PAUHWND__::?$CArray  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864910
//
// 00864910  56                   push esi
// 00864911  57                   push edi
// 00864912  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00864916  8bf1                 mov esi, ecx
// 00864918  85ff                 test edi, edi
// 0086491a  7d05                 jge 0x864921
// 0086491c  e8e959faff           call 0x80a30a
// 00864921  3b7e08               cmp edi, dword ptr [esi + 8]
// 00864924  7c0b                 jl 0x864931
// 00864926  6aff                 push -1
// 00864928  8d4701               lea eax, [edi + 1]
// 0086492b  50                   push eax
// 0086492c  e80fa2fdff           call 0x83eb40
// 00864931  8b542410             mov edx, dword ptr [esp + 0x10]
// 00864935  8b4e04               mov ecx, dword ptr [esi + 4]
// 00864938  8b02                 mov eax, dword ptr [edx]
// 0086493a  8904b9               mov dword ptr [ecx + edi*4], eax
// 0086493d  5f                   pop edi
// 0086493e  5e                   pop esi
// 0086493f  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ?SetAtGrow@?$CArray@PAVCXTPCalendarDayViewEvent@@AAPAV1@@@QAEXHAAPAVCXTPCalendarDayViewEvent@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
