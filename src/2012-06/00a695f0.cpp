// roc 2012-06 00a695f0  unit: PAVCXTShadowWnd::?$CList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a695f0
//
// 00a695f0  53                   push ebx
// 00a695f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a695f5  56                   push esi
// 00a695f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a695fa  8b5604               mov edx, dword ptr [esi + 4]
// 00a695fd  57                   push edi
// 00a695fe  83ec10               sub esp, 0x10
// 00a69601  8bc4                 mov eax, esp
// 00a69603  8bf9                 mov edi, ecx
// 00a69605  8b0e                 mov ecx, dword ptr [esi]
// 00a69607  8908                 mov dword ptr [eax], ecx
// 00a69609  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a6960c  895004               mov dword ptr [eax + 4], edx
// 00a6960f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a69612  894808               mov dword ptr [eax + 8], ecx
// 00a69615  53                   push ebx
// 00a69616  6a01                 push 1
// 00a69618  8bcf                 mov ecx, edi
// 00a6961a  89500c               mov dword ptr [eax + 0xc], edx
// 00a6961d  e83effffff           call 0xa69560
// 00a69622  8b0e                 mov ecx, dword ptr [esi]
// 00a69624  8b5604               mov edx, dword ptr [esi + 4]
// 00a69627  83ec10               sub esp, 0x10
// 00a6962a  8bc4                 mov eax, esp
// 00a6962c  8908                 mov dword ptr [eax], ecx
// 00a6962e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a69631  895004               mov dword ptr [eax + 4], edx
// 00a69634  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a69637  894808               mov dword ptr [eax + 8], ecx
// 00a6963a  53                   push ebx
// 00a6963b  6a00                 push 0
// 00a6963d  8bcf                 mov ecx, edi
// 00a6963f  89500c               mov dword ptr [eax + 0xc], edx
// 00a69642  e819ffffff           call 0xa69560
// 00a69647  5f                   pop edi
// 00a69648  5e                   pop esi
// 00a69649  5b                   pop ebx
// 00a6964a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
