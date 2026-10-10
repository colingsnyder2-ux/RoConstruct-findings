// roc 2008-06 0074ece0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ece0
//
// 0074ece0  56                   push esi
// 0074ece1  57                   push edi
// 0074ece2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074ece6  8bf1                 mov esi, ecx
// 0074ece8  8b06                 mov eax, dword ptr [esi]
// 0074ecea  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0074ecf0  57                   push edi
// 0074ecf1  ffd2                 call edx
// 0074ecf3  85c0                 test eax, eax
// 0074ecf5  7d0a                 jge 0x74ed01
// 0074ecf7  8b06                 mov eax, dword ptr [esi]
// 0074ecf9  8b5078               mov edx, dword ptr [eax + 0x78]
// 0074ecfc  57                   push edi
// 0074ecfd  8bce                 mov ecx, esi
// 0074ecff  ffd2                 call edx
// 0074ed01  5f                   pop edi
// 0074ed02  5e                   pop esi
// 0074ed03  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?AddIfNeed@?$CXTPArrayT@IIJ@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
