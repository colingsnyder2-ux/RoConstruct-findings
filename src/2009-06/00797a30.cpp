// roc 2009-06 00797a30  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00797a30
//
// 00797a30  83ec10               sub esp, 0x10
// 00797a33  837c242800           cmp dword ptr [esp + 0x28], 0
// 00797a38  7408                 je 0x797a42
// 00797a3a  81c1dc040000         add ecx, 0x4dc
// 00797a40  eb06                 jmp 0x797a48
// 00797a42  81c184060000         add ecx, 0x684
// 00797a48  8b442418             mov eax, dword ptr [esp + 0x18]
// 00797a4c  53                   push ebx
// 00797a4d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00797a51  55                   push ebp
// 00797a52  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00797a56  56                   push esi
// 00797a57  8b742428             mov esi, dword ptr [esp + 0x28]
// 00797a5b  57                   push edi
// 00797a5c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00797a60  40                   inc eax
// 00797a61  6a00                 push 0
// 00797a63  89442414             mov dword ptr [esp + 0x14], eax
// 00797a67  8d4428ff             lea eax, [eax + ebp - 1]
// 00797a6b  6a01                 push 1
// 00797a6d  89442420             mov dword ptr [esp + 0x20], eax
// 00797a71  51                   push ecx
// 00797a72  8d44241c             lea eax, [esp + 0x1c]
// 00797a76  50                   push eax
// 00797a77  8d143e               lea edx, [esi + edi]
// 00797a7a  53                   push ebx
// 00797a7b  89742428             mov dword ptr [esp + 0x28], esi
// 00797a7f  89542430             mov dword ptr [esp + 0x30], edx
// 00797a83  e8e8aafdff           call 0x772570
// 00797a88  8bc8                 mov ecx, eax
// 00797a8a  e801aefdff           call 0x772890
// 00797a8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00797a93  68c5c5c500           push 0xc5c5c5
// 00797a98  57                   push edi
// 00797a99  03e9                 add ebp, ecx
// 00797a9b  6a01                 push 1
// 00797a9d  56                   push esi
// 00797a9e  8d55ff               lea edx, [ebp - 1]
// 00797aa1  52                   push edx
// 00797aa2  8bcb                 mov ecx, ebx
// 00797aa4  e887440b00           call 0x84bf30
// 00797aa9  68f5f5f500           push 0xf5f5f5
// 00797aae  57                   push edi
// 00797aaf  6a01                 push 1
// 00797ab1  56                   push esi
// 00797ab2  55                   push ebp
// 00797ab3  8bcb                 mov ecx, ebx
// 00797ab5  e876440b00           call 0x84bf30
// 00797aba  5f                   pop edi
// 00797abb  5e                   pop esi
// 00797abc  5d                   pop ebp
// 00797abd  5b                   pop ebx
// 00797abe  83c410               add esp, 0x10
// 00797ac1  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
