// roc 2007-03 00694920  unit: seg_00690000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00694920
//
// 00694920  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00694924  85d2                 test edx, edx
// 00694926  742a                 je 0x694952
// 00694928  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069492c  85c9                 test ecx, ecx
// 0069492e  7408                 je 0x694938
// 00694930  8b442408             mov eax, dword ptr [esp + 8]
// 00694934  85c0                 test eax, eax
// 00694936  7505                 jne 0x69493d
// 00694938  e8719af8ff           call 0x61e3ae
// 0069493d  56                   push esi
// 0069493e  8bff                 mov edi, edi
// 00694940  8b30                 mov esi, dword ptr [eax]
// 00694942  83ea01               sub edx, 1
// 00694945  8931                 mov dword ptr [ecx], esi
// 00694947  83c104               add ecx, 4
// 0069494a  83c004               add eax, 4
// 0069494d  85d2                 test edx, edx
// 0069494f  75ef                 jne 0x694940
// 00694951  5e                   pop esi
// 00694952  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarEventLabel.cpp (function ??$CopyElements@I@@YGXPAIPBIH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventLabel.cpp
