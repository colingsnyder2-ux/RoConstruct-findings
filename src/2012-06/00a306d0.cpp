// roc 2012-06 00a306d0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a306d0
//
// 00a306d0  56                   push esi
// 00a306d1  57                   push edi
// 00a306d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a306d6  8bf1                 mov esi, ecx
// 00a306d8  8b06                 mov eax, dword ptr [esi]
// 00a306da  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a306e0  57                   push edi
// 00a306e1  ffd2                 call edx
// 00a306e3  85c0                 test eax, eax
// 00a306e5  7d0a                 jge 0xa306f1
// 00a306e7  8b06                 mov eax, dword ptr [esi]
// 00a306e9  8b5078               mov edx, dword ptr [eax + 0x78]
// 00a306ec  57                   push edi
// 00a306ed  8bce                 mov ecx, esi
// 00a306ef  ffd2                 call edx
// 00a306f1  5f                   pop edi
// 00a306f2  5e                   pop esi
// 00a306f3  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?AddIfNeed@?$CXTPArrayT@IIJ@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
