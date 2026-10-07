// roc 2008-06 0076dce0  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076dce0
//
// 0076dce0  83ec10               sub esp, 0x10
// 0076dce3  53                   push ebx
// 0076dce4  56                   push esi
// 0076dce5  57                   push edi
// 0076dce6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0076dcea  8bd9                 mov ebx, ecx
// 0076dcec  8bcf                 mov ecx, edi
// 0076dcee  e84d71f4ff           call 0x6b4e40
// 0076dcf3  85c0                 test eax, eax
// 0076dcf5  0f85dd000000         jne 0x76ddd8
// 0076dcfb  8bcf                 mov ecx, edi
// 0076dcfd  e8ce71f4ff           call 0x6b4ed0
// 0076dd02  f6802801000001       test byte ptr [eax + 0x128], 1
// 0076dd09  7531                 jne 0x76dd3c
// 0076dd0b  837b2000             cmp dword ptr [ebx + 0x20], 0
// 0076dd0f  0f84c3000000         je 0x76ddd8
// 0076dd15  6a00                 push 0
// 0076dd17  8d442424             lea eax, [esp + 0x24]
// 0076dd1b  50                   push eax
// 0076dd1c  6a00                 push 0
// 0076dd1e  6824100000           push 0x1024
// 0076dd23  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0076dd2b  ff15902c8000         call dword ptr [0x802c90]
// 0076dd31  837c242000           cmp dword ptr [esp + 0x20], 0
// 0076dd36  0f849c000000         je 0x76ddd8
// 0076dd3c  57                   push edi
// 0076dd3d  8d4c2410             lea ecx, [esp + 0x10]
// 0076dd41  e88a9df8ff           call 0x6f7ad0
// 0076dd46  8b742424             mov esi, dword ptr [esp + 0x24]
// 0076dd4a  8b0e                 mov ecx, dword ptr [esi]
// 0076dd4c  8b5604               mov edx, dword ptr [esi + 4]
// 0076dd4f  6a00                 push 0
// 0076dd51  57                   push edi
// 0076dd52  83ec10               sub esp, 0x10
// 0076dd55  8bc4                 mov eax, esp
// 0076dd57  8908                 mov dword ptr [eax], ecx
// 0076dd59  8b4e08               mov ecx, dword ptr [esi + 8]
// 0076dd5c  895004               mov dword ptr [eax + 4], edx
// 0076dd5f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0076dd62  894808               mov dword ptr [eax + 8], ecx
// 0076dd65  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076dd69  89500c               mov dword ptr [eax + 0xc], edx
// 0076dd6c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0076dd70  83ec10               sub esp, 0x10
// 0076dd73  8bc4                 mov eax, esp
// 0076dd75  8908                 mov dword ptr [eax], ecx
// 0076dd77  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076dd7b  895004               mov dword ptr [eax + 4], edx
// 0076dd7e  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076dd82  894808               mov dword ptr [eax + 8], ecx
// 0076dd85  6a01                 push 1
// 0076dd87  8bcb                 mov ecx, ebx
// 0076dd89  89500c               mov dword ptr [eax + 0xc], edx
// 0076dd8c  e8bffdffff           call 0x76db50
// 0076dd91  8b0e                 mov ecx, dword ptr [esi]
// 0076dd93  8b5604               mov edx, dword ptr [esi + 4]
// 0076dd96  6a00                 push 0
// 0076dd98  57                   push edi
// 0076dd99  83ec10               sub esp, 0x10
// 0076dd9c  8bc4                 mov eax, esp
// 0076dd9e  8908                 mov dword ptr [eax], ecx
// 0076dda0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0076dda3  895004               mov dword ptr [eax + 4], edx
// 0076dda6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0076dda9  894808               mov dword ptr [eax + 8], ecx
// 0076ddac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076ddb0  89500c               mov dword ptr [eax + 0xc], edx
// 0076ddb3  8b542428             mov edx, dword ptr [esp + 0x28]
// 0076ddb7  83ec10               sub esp, 0x10
// 0076ddba  8bc4                 mov eax, esp
// 0076ddbc  8908                 mov dword ptr [eax], ecx
// 0076ddbe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076ddc2  895004               mov dword ptr [eax + 4], edx
// 0076ddc5  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076ddc9  894808               mov dword ptr [eax + 8], ecx
// 0076ddcc  6a00                 push 0
// 0076ddce  8bcb                 mov ecx, ebx
// 0076ddd0  89500c               mov dword ptr [eax + 0xc], edx
// 0076ddd3  e878fdffff           call 0x76db50
// 0076ddd8  5f                   pop edi
// 0076ddd9  5e                   pop esi
// 0076ddda  5b                   pop ebx
// 0076dddb  83c410               add esp, 0x10
// 0076ddde  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
