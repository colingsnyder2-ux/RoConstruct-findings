// roc 2009-12 008743d0  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008743d0
//
// 008743d0  83ec10               sub esp, 0x10
// 008743d3  837c242800           cmp dword ptr [esp + 0x28], 0
// 008743d8  7408                 je 0x8743e2
// 008743da  81c1dc040000         add ecx, 0x4dc
// 008743e0  eb06                 jmp 0x8743e8
// 008743e2  81c184060000         add ecx, 0x684
// 008743e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008743ec  53                   push ebx
// 008743ed  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008743f1  55                   push ebp
// 008743f2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008743f6  56                   push esi
// 008743f7  8b742428             mov esi, dword ptr [esp + 0x28]
// 008743fb  57                   push edi
// 008743fc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00874400  40                   inc eax
// 00874401  6a00                 push 0
// 00874403  89442414             mov dword ptr [esp + 0x14], eax
// 00874407  8d4428ff             lea eax, [eax + ebp - 1]
// 0087440b  6a01                 push 1
// 0087440d  89442420             mov dword ptr [esp + 0x20], eax
// 00874411  51                   push ecx
// 00874412  8d44241c             lea eax, [esp + 0x1c]
// 00874416  50                   push eax
// 00874417  8d143e               lea edx, [esi + edi]
// 0087441a  53                   push ebx
// 0087441b  89742428             mov dword ptr [esp + 0x28], esi
// 0087441f  89542430             mov dword ptr [esp + 0x30], edx
// 00874423  e8788efdff           call 0x84d2a0
// 00874428  8bc8                 mov ecx, eax
// 0087442a  e89191fdff           call 0x84d5c0
// 0087442f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00874433  68c5c5c500           push 0xc5c5c5
// 00874438  57                   push edi
// 00874439  03e9                 add ebp, ecx
// 0087443b  6a01                 push 1
// 0087443d  56                   push esi
// 0087443e  8d55ff               lea edx, [ebp - 1]
// 00874441  52                   push edx
// 00874442  8bcb                 mov ecx, ebx
// 00874444  e84d200b00           call 0x926496
// 00874449  68f5f5f500           push 0xf5f5f5
// 0087444e  57                   push edi
// 0087444f  6a01                 push 1
// 00874451  56                   push esi
// 00874452  55                   push ebp
// 00874453  8bcb                 mov ecx, ebx
// 00874455  e83c200b00           call 0x926496
// 0087445a  5f                   pop edi
// 0087445b  5e                   pop esi
// 0087445c  5d                   pop ebp
// 0087445d  5b                   pop ebx
// 0087445e  83c410               add esp, 0x10
// 00874461  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
