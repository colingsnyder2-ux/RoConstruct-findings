// roc 2012-06 00a06410  unit: CXTPRibbonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a06410
//
// 00a06410  83ec10               sub esp, 0x10
// 00a06413  53                   push ebx
// 00a06414  56                   push esi
// 00a06415  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a06419  8bd9                 mov ebx, ecx
// 00a0641b  57                   push edi
// 00a0641c  8bce                 mov ecx, esi
// 00a0641e  e88dfbd2ff           call 0x735fb0
// 00a06423  8bb8c0000000         mov edi, dword ptr [eax + 0xc0]
// 00a06429  8bce                 mov ecx, esi
// 00a0642b  e840e9a5ff           call 0x464d70
// 00a06430  3bc7                 cmp eax, edi
// 00a06432  7d7d                 jge 0xa064b1
// 00a06434  68b0c1c100           push 0xc1c1b0
// 00a06439  8bcb                 mov ecx, ebx
// 00a0643b  e830140000           call 0xa07870
// 00a06440  8bf0                 mov esi, eax
// 00a06442  85f6                 test esi, esi
// 00a06444  746b                 je 0xa064b1
// 00a06446  6a01                 push 1
// 00a06448  6a00                 push 0
// 00a0644a  8d442414             lea eax, [esp + 0x14]
// 00a0644e  50                   push eax
// 00a0644f  8bce                 mov ecx, esi
// 00a06451  e89af60500           call 0xa65af0
// 00a06456  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a0645a  83c1fe               add ecx, -2
// 00a0645d  83ec10               sub esp, 0x10
// 00a06460  8bc4                 mov eax, esp
// 00a06462  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a06466  33c9                 xor ecx, ecx
// 00a06468  8908                 mov dword ptr [eax], ecx
// 00a0646a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0646e  bb02000000           mov ebx, 2
// 00a06473  295c2438             sub dword ptr [esp + 0x38], ebx
// 00a06477  8bd3                 mov edx, ebx
// 00a06479  895004               mov dword ptr [eax + 4], edx
// 00a0647c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a06480  33ff                 xor edi, edi
// 00a06482  897808               mov dword ptr [eax + 8], edi
// 00a06485  89580c               mov dword ptr [eax + 0xc], ebx
// 00a06488  83ec10               sub esp, 0x10
// 00a0648b  8bc4                 mov eax, esp
// 00a0648d  8910                 mov dword ptr [eax], edx
// 00a0648f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a06493  894804               mov dword ptr [eax + 4], ecx
// 00a06496  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0649a  895008               mov dword ptr [eax + 8], edx
// 00a0649d  89480c               mov dword ptr [eax + 0xc], ecx
// 00a064a0  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a064a4  8d542444             lea edx, [esp + 0x44]
// 00a064a8  52                   push edx
// 00a064a9  50                   push eax
// 00a064aa  8bce                 mov ecx, esi
// 00a064ac  e80fef0500           call 0xa653c0
// 00a064b1  5f                   pop edi
// 00a064b2  5e                   pop esi
// 00a064b3  5b                   pop ebx
// 00a064b4  83c410               add esp, 0x10
// 00a064b7  c21c00               ret 0x1c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
