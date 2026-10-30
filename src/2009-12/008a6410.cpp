// roc 2009-12 008a6410  unit: CXTPReportTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6410
//
// 008a6410  57                   push edi
// 008a6411  8bf9                 mov edi, ecx
// 008a6413  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a6416  85c9                 test ecx, ecx
// 008a6418  7472                 je 0x8a648c
// 008a641a  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 008a6420  53                   push ebx
// 008a6421  56                   push esi
// 008a6422  8bf0                 mov esi, eax
// 008a6424  46                   inc esi
// 008a6425  f7de                 neg esi
// 008a6427  1bf6                 sbb esi, esi
// 008a6429  23f0                 and esi, eax
// 008a642b  6a01                 push 1
// 008a642d  56                   push esi
// 008a642e  e84d73f7ff           call 0x81d780
// 008a6433  8d1c30               lea ebx, [eax + esi]
// 008a6436  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a6439  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a643f  e8dc67f8ff           call 0x82cc20
// 008a6444  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a6447  48                   dec eax
// 008a6448  3bc3                 cmp eax, ebx
// 008a644a  7d10                 jge 0x8a645c
// 008a644c  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008a6452  e8c967f8ff           call 0x82cc20
// 008a6457  8bf0                 mov esi, eax
// 008a6459  4e                   dec esi
// 008a645a  eb0a                 jmp 0x8a6466
// 008a645c  6a01                 push 1
// 008a645e  56                   push esi
// 008a645f  e81c73f7ff           call 0x81d780
// 008a6464  03f0                 add esi, eax
// 008a6466  8b5720               mov edx, dword ptr [edi + 0x20]
// 008a6469  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008a646f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a6473  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6477  50                   push eax
// 008a6478  8b01                 mov eax, dword ptr [ecx]
// 008a647a  52                   push edx
// 008a647b  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008a647e  56                   push esi
// 008a647f  ffd2                 call edx
// 008a6481  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a6484  50                   push eax
// 008a6485  e876f6f7ff           call 0x825b00
// 008a648a  5e                   pop esi
// 008a648b  5b                   pop ebx
// 008a648c  5f                   pop edi
// 008a648d  c20800               ret 8
// copied from an identical function in another client (function ?MovePageDown@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp