// roc 2008-06 00753000  unit: CXTPReportTip  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753000
//
// 00753000  57                   push edi
// 00753001  8bf9                 mov edi, ecx
// 00753003  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00753006  85c9                 test ecx, ecx
// 00753008  7472                 je 0x75307c
// 0075300a  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00753010  53                   push ebx
// 00753011  56                   push esi
// 00753012  8bf0                 mov esi, eax
// 00753014  46                   inc esi
// 00753015  f7de                 neg esi
// 00753017  1bf6                 sbb esi, esi
// 00753019  23f0                 and esi, eax
// 0075301b  6a01                 push 1
// 0075301d  56                   push esi
// 0075301e  e8ad72f7ff           call 0x6ca2d0
// 00753023  8d1c30               lea ebx, [eax + esi]
// 00753026  8b4720               mov eax, dword ptr [edi + 0x20]
// 00753029  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0075302f  e81c70f8ff           call 0x6da050
// 00753034  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00753037  48                   dec eax
// 00753038  3bc3                 cmp eax, ebx
// 0075303a  7d10                 jge 0x75304c
// 0075303c  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00753042  e80970f8ff           call 0x6da050
// 00753047  8bf0                 mov esi, eax
// 00753049  4e                   dec esi
// 0075304a  eb0a                 jmp 0x753056
// 0075304c  6a01                 push 1
// 0075304e  56                   push esi
// 0075304f  e87c72f7ff           call 0x6ca2d0
// 00753054  03f0                 add esi, eax
// 00753056  8b5720               mov edx, dword ptr [edi + 0x20]
// 00753059  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 0075305f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00753063  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753067  50                   push eax
// 00753068  8b01                 mov eax, dword ptr [ecx]
// 0075306a  52                   push edx
// 0075306b  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0075306e  56                   push esi
// 0075306f  ffd2                 call edx
// 00753071  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00753074  50                   push eax
// 00753075  e836f5f7ff           call 0x6d25b0
// 0075307a  5e                   pop esi
// 0075307b  5b                   pop ebx
// 0075307c  5f                   pop edi
// 0075307d  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MovePageDown@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
