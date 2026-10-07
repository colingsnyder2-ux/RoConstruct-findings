// roc 2012-06 00a0a900  unit: CXTPOffice2007Theme  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0a900
//
// 00a0a900  83ec10               sub esp, 0x10
// 00a0a903  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0a907  53                   push ebx
// 00a0a908  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a0a90c  55                   push ebp
// 00a0a90d  bd03000000           mov ebp, 3
// 00a0a912  56                   push esi
// 00a0a913  83c0fd               add eax, -3
// 00a0a916  83c3fd               add ebx, -3
// 00a0a919  57                   push edi
// 00a0a91a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a0a91e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a0a922  89442418             mov dword ptr [esp + 0x18], eax
// 00a0a926  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a0a92a  85ed                 test ebp, ebp
// 00a0a92c  7e41                 jle 0xa0a96f
// 00a0a92e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a0a932  68ffffff00           push 0xffffff
// 00a0a937  6a02                 push 2
// 00a0a939  6a02                 push 2
// 00a0a93b  8d4301               lea eax, [ebx + 1]
// 00a0a93e  50                   push eax
// 00a0a93f  8d4e01               lea ecx, [esi + 1]
// 00a0a942  51                   push ecx
// 00a0a943  8bcf                 mov ecx, edi
// 00a0a945  e846ec0800           call 0xa99590
// 00a0a94a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a0a94e  6a27                 push 0x27
// 00a0a950  e83bcff7ff           call 0x987890
// 00a0a955  50                   push eax
// 00a0a956  6a02                 push 2
// 00a0a958  6a02                 push 2
// 00a0a95a  53                   push ebx
// 00a0a95b  56                   push esi
// 00a0a95c  8bcf                 mov ecx, edi
// 00a0a95e  e82dec0800           call 0xa99590
// 00a0a963  83ee04               sub esi, 4
// 00a0a966  83ed01               sub ebp, 1
// 00a0a969  75c7                 jne 0xa0a932
// 00a0a96b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a0a96f  4d                   dec ebp
// 00a0a970  83eb04               sub ebx, 4
// 00a0a973  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a0a977  85ed                 test ebp, ebp
// 00a0a979  7fb3                 jg 0xa0a92e
// 00a0a97b  5f                   pop edi
// 00a0a97c  5e                   pop esi
// 00a0a97d  5d                   pop ebp
// 00a0a97e  5b                   pop ebx
// 00a0a97f  83c410               add esp, 0x10
// 00a0a982  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?DrawStatusBarGripper@CXTPResourceTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp
