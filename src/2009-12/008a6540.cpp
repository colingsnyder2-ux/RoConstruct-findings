// roc 2009-12 008a6540  unit: CXTPReportTip  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6540
//
// 008a6540  56                   push esi
// 008a6541  8bf1                 mov esi, ecx
// 008a6543  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6546  85c0                 test eax, eax
// 008a6548  743a                 je 0x8a6584
// 008a654a  8bc8                 mov ecx, eax
// 008a654c  8b91e0000000         mov edx, dword ptr [ecx + 0xe0]
// 008a6552  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a6556  57                   push edi
// 008a6557  8b3a                 mov edi, dword ptr [edx]
// 008a6559  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a655d  51                   push ecx
// 008a655e  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6564  52                   push edx
// 008a6565  e8b666f8ff           call 0x82cc20
// 008a656a  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008a656d  48                   dec eax
// 008a656e  50                   push eax
// 008a656f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6572  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6578  ffd2                 call edx
// 008a657a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a657d  50                   push eax
// 008a657e  e87df5f7ff           call 0x825b00
// 008a6583  5f                   pop edi
// 008a6584  5e                   pop esi
// 008a6585  c20800               ret 8
// copied from an identical function in another client (function ?MoveLastRow@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp