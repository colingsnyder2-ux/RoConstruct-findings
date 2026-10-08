// roc 2009-06 007994d0  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007994d0
//
// 007994d0  83ec10               sub esp, 0x10
// 007994d3  53                   push ebx
// 007994d4  56                   push esi
// 007994d5  8b742430             mov esi, dword ptr [esp + 0x30]
// 007994d9  8bd9                 mov ebx, ecx
// 007994db  57                   push edi
// 007994dc  8bce                 mov ecx, esi
// 007994de  e86d13c8ff           call 0x41a850
// 007994e3  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 007994e9  8bce                 mov ecx, esi
// 007994eb  e89013c8ff           call 0x41a880
// 007994f0  3bc7                 cmp eax, edi
// 007994f2  7d7d                 jge 0x799571
// 007994f4  68b80b9000           push 0x900bb8
// 007994f9  8bcb                 mov ecx, ebx
// 007994fb  e8c0a80000           call 0x7a3dc0
// 00799500  8bf0                 mov esi, eax
// 00799502  85f6                 test esi, esi
// 00799504  746b                 je 0x799571
// 00799506  6a01                 push 1
// 00799508  6a00                 push 0
// 0079950a  8d442414             lea eax, [esp + 0x14]
// 0079950e  50                   push eax
// 0079950f  8bce                 mov ecx, esi
// 00799511  e8aac80600           call 0x805dc0
// 00799516  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079951a  83c1fe               add ecx, -2
// 0079951d  83ec10               sub esp, 0x10
// 00799520  8bc4                 mov eax, esp
// 00799522  894c2434             mov dword ptr [esp + 0x34], ecx
// 00799526  33c9                 xor ecx, ecx
// 00799528  8908                 mov dword ptr [eax], ecx
// 0079952a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079952e  bb02000000           mov ebx, 2
// 00799533  295c2438             sub dword ptr [esp + 0x38], ebx
// 00799537  8bd3                 mov edx, ebx
// 00799539  895004               mov dword ptr [eax + 4], edx
// 0079953c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00799540  33ff                 xor edi, edi
// 00799542  897808               mov dword ptr [eax + 8], edi
// 00799545  89580c               mov dword ptr [eax + 0xc], ebx
// 00799548  83ec10               sub esp, 0x10
// 0079954b  8bc4                 mov eax, esp
// 0079954d  8910                 mov dword ptr [eax], edx
// 0079954f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00799553  894804               mov dword ptr [eax + 4], ecx
// 00799556  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0079955a  895008               mov dword ptr [eax + 8], edx
// 0079955d  89480c               mov dword ptr [eax + 0xc], ecx
// 00799560  8b442440             mov eax, dword ptr [esp + 0x40]
// 00799564  8d542444             lea edx, [esp + 0x44]
// 00799568  52                   push edx
// 00799569  50                   push eax
// 0079956a  8bce                 mov ecx, esi
// 0079956c  e81fc10600           call 0x805690
// 00799571  5f                   pop edi
// 00799572  5e                   pop esi
// 00799573  5b                   pop ebx
// 00799574  83c410               add esp, 0x10
// 00799577  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
