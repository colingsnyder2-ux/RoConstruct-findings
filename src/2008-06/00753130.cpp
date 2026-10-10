// roc 2008-06 00753130  unit: CXTPReportTip  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753130
//
// 00753130  56                   push esi
// 00753131  8bf1                 mov esi, ecx
// 00753133  8b4620               mov eax, dword ptr [esi + 0x20]
// 00753136  85c0                 test eax, eax
// 00753138  743a                 je 0x753174
// 0075313a  8bc8                 mov ecx, eax
// 0075313c  8b91e0000000         mov edx, dword ptr [ecx + 0xe0]
// 00753142  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00753146  57                   push edi
// 00753147  8b3a                 mov edi, dword ptr [edx]
// 00753149  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0075314d  51                   push ecx
// 0075314e  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00753154  52                   push edx
// 00753155  e8f66ef8ff           call 0x6da050
// 0075315a  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0075315d  48                   dec eax
// 0075315e  50                   push eax
// 0075315f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00753162  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00753168  ffd2                 call edx
// 0075316a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075316d  50                   push eax
// 0075316e  e83df4f7ff           call 0x6d25b0
// 00753173  5f                   pop edi
// 00753174  5e                   pop esi
// 00753175  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MoveLastRow@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
