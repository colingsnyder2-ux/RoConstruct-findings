// roc 2009-12 008e4410  unit: PAVCXTShadowWnd::?$CList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4410
//
// 008e4410  53                   push ebx
// 008e4411  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008e4415  56                   push esi
// 008e4416  8b742410             mov esi, dword ptr [esp + 0x10]
// 008e441a  8b5604               mov edx, dword ptr [esi + 4]
// 008e441d  57                   push edi
// 008e441e  83ec10               sub esp, 0x10
// 008e4421  8bc4                 mov eax, esp
// 008e4423  8bf9                 mov edi, ecx
// 008e4425  8b0e                 mov ecx, dword ptr [esi]
// 008e4427  8908                 mov dword ptr [eax], ecx
// 008e4429  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e442c  895004               mov dword ptr [eax + 4], edx
// 008e442f  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e4432  894808               mov dword ptr [eax + 8], ecx
// 008e4435  53                   push ebx
// 008e4436  6a01                 push 1
// 008e4438  8bcf                 mov ecx, edi
// 008e443a  89500c               mov dword ptr [eax + 0xc], edx
// 008e443d  e83effffff           call 0x8e4380
// 008e4442  8b0e                 mov ecx, dword ptr [esi]
// 008e4444  8b5604               mov edx, dword ptr [esi + 4]
// 008e4447  83ec10               sub esp, 0x10
// 008e444a  8bc4                 mov eax, esp
// 008e444c  8908                 mov dword ptr [eax], ecx
// 008e444e  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e4451  895004               mov dword ptr [eax + 4], edx
// 008e4454  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e4457  894808               mov dword ptr [eax + 8], ecx
// 008e445a  53                   push ebx
// 008e445b  6a00                 push 0
// 008e445d  8bcf                 mov ecx, edi
// 008e445f  89500c               mov dword ptr [eax + 0xc], edx
// 008e4462  e819ffffff           call 0x8e4380
// 008e4467  5f                   pop edi
// 008e4468  5e                   pop esi
// 008e4469  5b                   pop ebx
// 008e446a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
