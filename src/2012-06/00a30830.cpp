// roc 2012-06 00a30830  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30830
//
// 00a30830  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a30834  85d2                 test edx, edx
// 00a30836  7428                 je 0xa30860
// 00a30838  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a3083c  85c9                 test ecx, ecx
// 00a3083e  7408                 je 0xa30848
// 00a30840  8b442408             mov eax, dword ptr [esp + 8]
// 00a30844  85c0                 test eax, eax
// 00a30846  7505                 jne 0xa3084d
// 00a30848  e8731bf5ff           call 0x9823c0
// 00a3084d  56                   push esi
// 00a3084e  8bff                 mov edi, edi
// 00a30850  8b30                 mov esi, dword ptr [eax]
// 00a30852  4a                   dec edx
// 00a30853  8931                 mov dword ptr [ecx], esi
// 00a30855  83c104               add ecx, 4
// 00a30858  83c004               add eax, 4
// 00a3085b  85d2                 test edx, edx
// 00a3085d  75f1                 jne 0xa30850
// 00a3085f  5e                   pop esi
// 00a30860  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ??$CopyElements@I@@YGXPAIPBIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
