// roc 2010-06 0082f300  unit: CXTPRibbonTheme  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082f300
//
// 0082f300  83ec10               sub esp, 0x10
// 0082f303  837c242800           cmp dword ptr [esp + 0x28], 0
// 0082f308  7408                 je 0x82f312
// 0082f30a  81c1dc040000         add ecx, 0x4dc
// 0082f310  eb06                 jmp 0x82f318
// 0082f312  81c184060000         add ecx, 0x684
// 0082f318  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082f31c  53                   push ebx
// 0082f31d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0082f321  55                   push ebp
// 0082f322  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0082f326  56                   push esi
// 0082f327  8b742428             mov esi, dword ptr [esp + 0x28]
// 0082f32b  57                   push edi
// 0082f32c  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0082f330  40                   inc eax
// 0082f331  6a00                 push 0
// 0082f333  89442414             mov dword ptr [esp + 0x14], eax
// 0082f337  8d4428ff             lea eax, [eax + ebp - 1]
// 0082f33b  6a01                 push 1
// 0082f33d  89442420             mov dword ptr [esp + 0x20], eax
// 0082f341  51                   push ecx
// 0082f342  8d44241c             lea eax, [esp + 0x1c]
// 0082f346  50                   push eax
// 0082f347  8d143e               lea edx, [esi + edi]
// 0082f34a  53                   push ebx
// 0082f34b  89742428             mov dword ptr [esp + 0x28], esi
// 0082f34f  89542430             mov dword ptr [esp + 0x30], edx
// 0082f353  e8a81ffdff           call 0x801300
// 0082f358  8bc8                 mov ecx, eax
// 0082f35a  e8c122fdff           call 0x801620
// 0082f35f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082f363  68c5c5c500           push 0xc5c5c5
// 0082f368  57                   push edi
// 0082f369  03e9                 add ebp, ecx
// 0082f36b  6a01                 push 1
// 0082f36d  56                   push esi
// 0082f36e  8d55ff               lea edx, [ebp - 1]
// 0082f371  52                   push edx
// 0082f372  8bcb                 mov ecx, ebx
// 0082f374  e811da1400           call 0x97cd8a
// 0082f379  68f5f5f500           push 0xf5f5f5
// 0082f37e  57                   push edi
// 0082f37f  6a01                 push 1
// 0082f381  56                   push esi
// 0082f382  55                   push ebp
// 0082f383  8bcb                 mov ecx, ebx
// 0082f385  e800da1400           call 0x97cd8a
// 0082f38a  5f                   pop edi
// 0082f38b  5e                   pop esi
// 0082f38c  5d                   pop ebp
// 0082f38d  5b                   pop ebx
// 0082f38e  83c410               add esp, 0x10
// 0082f391  c21800               ret 0x18
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupBarGripper@CXTPRibbonTheme@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
