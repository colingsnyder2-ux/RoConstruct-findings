// roc 2010-06 00898720  unit: CXTShadowHook  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898720
//
// 00898720  53                   push ebx
// 00898721  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00898725  56                   push esi
// 00898726  8b742410             mov esi, dword ptr [esp + 0x10]
// 0089872a  8b5604               mov edx, dword ptr [esi + 4]
// 0089872d  57                   push edi
// 0089872e  83ec10               sub esp, 0x10
// 00898731  8bc4                 mov eax, esp
// 00898733  8bf9                 mov edi, ecx
// 00898735  8b0e                 mov ecx, dword ptr [esi]
// 00898737  8908                 mov dword ptr [eax], ecx
// 00898739  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089873c  895004               mov dword ptr [eax + 4], edx
// 0089873f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00898742  894808               mov dword ptr [eax + 8], ecx
// 00898745  53                   push ebx
// 00898746  6a01                 push 1
// 00898748  8bcf                 mov ecx, edi
// 0089874a  89500c               mov dword ptr [eax + 0xc], edx
// 0089874d  e83effffff           call 0x898690
// 00898752  8b0e                 mov ecx, dword ptr [esi]
// 00898754  8b5604               mov edx, dword ptr [esi + 4]
// 00898757  83ec10               sub esp, 0x10
// 0089875a  8bc4                 mov eax, esp
// 0089875c  8908                 mov dword ptr [eax], ecx
// 0089875e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00898761  895004               mov dword ptr [eax + 4], edx
// 00898764  8b560c               mov edx, dword ptr [esi + 0xc]
// 00898767  894808               mov dword ptr [eax + 8], ecx
// 0089876a  53                   push ebx
// 0089876b  6a00                 push 0
// 0089876d  8bcf                 mov ecx, edi
// 0089876f  89500c               mov dword ptr [eax + 0xc], edx
// 00898772  e819ffffff           call 0x898690
// 00898777  5f                   pop edi
// 00898778  5e                   pop esi
// 00898779  5b                   pop ebx
// 0089877a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
