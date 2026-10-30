// from server: 100% by auto
// roc 2012-06 00a5fb10  unit: CXTColorPageStandard  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fb10
//
// 00a5fb10  8b5104               mov edx, dword ptr [ecx + 4]
// 00a5fb13  85d2                 test edx, edx
// 00a5fb15  7505                 jne 0xa5fb1c
// 00a5fb17  e8a428f2ff           call 0x9823c0
// 00a5fb1c  8b02                 mov eax, dword ptr [edx]
// 00a5fb1e  56                   push esi
// 00a5fb1f  8b7208               mov esi, dword ptr [edx + 8]
// 00a5fb22  894104               mov dword ptr [ecx + 4], eax
// 00a5fb25  85c0                 test eax, eax
// 00a5fb27  7411                 je 0xa5fb3a
// 00a5fb29  52                   push edx
// 00a5fb2a  c7400400000000       mov dword ptr [eax + 4], 0
// 00a5fb31  e8ea63fbff           call 0xa15f20
// 00a5fb36  8bc6                 mov eax, esi
// 00a5fb38  5e                   pop esi
// 00a5fb39  c3                   ret 
// 00a5fb3a  52                   push edx
// 00a5fb3b  c7410800000000       mov dword ptr [ecx + 8], 0
// 00a5fb42  e8d963fbff           call 0xa15f20
// 00a5fb47  8bc6                 mov eax, esi
// 00a5fb49  5e                   pop esi
// 00a5fb4a  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?RemoveHead@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAEPAVCXTPCalendarViewPart@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
