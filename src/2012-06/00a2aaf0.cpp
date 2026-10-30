// roc 2012-06 00a2aaf0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2aaf0
//
// 00a2aaf0  53                   push ebx
// 00a2aaf1  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 00a2aaf7  55                   push ebp
// 00a2aaf8  56                   push esi
// 00a2aaf9  57                   push edi
// 00a2aafa  6a00                 push 0
// 00a2aafc  6a00                 push 0
// 00a2aafe  8bf9                 mov edi, ecx
// 00a2ab00  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a2ab03  688b010000           push 0x18b
// 00a2ab08  50                   push eax
// 00a2ab09  ffd3                 call ebx
// 00a2ab0b  8bf0                 mov esi, eax
// 00a2ab0d  83ee01               sub esi, 1
// 00a2ab10  781b                 js 0xa2ab2d
// 00a2ab12  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a2ab16  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00a2ab19  6a00                 push 0
// 00a2ab1b  56                   push esi
// 00a2ab1c  6899010000           push 0x199
// 00a2ab21  51                   push ecx
// 00a2ab22  ffd3                 call ebx
// 00a2ab24  3be8                 cmp ebp, eax
// 00a2ab26  740f                 je 0xa2ab37
// 00a2ab28  83ee01               sub esi, 1
// 00a2ab2b  79e9                 jns 0xa2ab16
// 00a2ab2d  5f                   pop edi
// 00a2ab2e  5e                   pop esi
// 00a2ab2f  5d                   pop ebp
// 00a2ab30  83c8ff               or eax, 0xffffffff
// 00a2ab33  5b                   pop ebx
// 00a2ab34  c20400               ret 4
// 00a2ab37  5f                   pop edi
// 00a2ab38  8bc6                 mov eax, esi
// 00a2ab3a  5e                   pop esi
// 00a2ab3b  5d                   pop ebp
// 00a2ab3c  5b                   pop ebx
// 00a2ab3d  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp