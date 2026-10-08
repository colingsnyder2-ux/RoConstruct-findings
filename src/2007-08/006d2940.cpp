// from server: 100% by auto
// roc 2007-08 006d2940  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2940
//
// 006d2940  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d2944  85d2                 test edx, edx
// 006d2946  742a                 je 0x6d2972
// 006d2948  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d294c  85c9                 test ecx, ecx
// 006d294e  7408                 je 0x6d2958
// 006d2950  8b442408             mov eax, dword ptr [esp + 8]
// 006d2954  85c0                 test eax, eax
// 006d2956  7505                 jne 0x6d295d
// 006d2958  e8c3d5f5ff           call 0x62ff20
// 006d295d  56                   push esi
// 006d295e  8bff                 mov edi, edi
// 006d2960  8b30                 mov esi, dword ptr [eax]
// 006d2962  83ea01               sub edx, 1
// 006d2965  8931                 mov dword ptr [ecx], esi
// 006d2967  83c104               add ecx, 4
// 006d296a  83c004               add eax, 4
// 006d296d  85d2                 test edx, edx
// 006d296f  75ef                 jne 0x6d2960
// 006d2971  5e                   pop esi
// 006d2972  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarEventLabel.cpp (function ??$CopyElements@I@@YGXPAIPBIH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventLabel.cpp
