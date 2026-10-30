// roc 2010-06 008750b0  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008750b0
//
// 008750b0  83ec10               sub esp, 0x10
// 008750b3  53                   push ebx
// 008750b4  56                   push esi
// 008750b5  57                   push edi
// 008750b6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008750ba  8bd9                 mov ebx, ecx
// 008750bc  8bcf                 mov ecx, edi
// 008750be  e83d35f4ff           call 0x7b8600
// 008750c3  85c0                 test eax, eax
// 008750c5  0f85dd000000         jne 0x8751a8
// 008750cb  8bcf                 mov ecx, edi
// 008750cd  e8be35f4ff           call 0x7b8690
// 008750d2  f6802801000001       test byte ptr [eax + 0x128], 1
// 008750d9  7531                 jne 0x87510c
// 008750db  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008750df  0f84c3000000         je 0x8751a8
// 008750e5  6a00                 push 0
// 008750e7  8d442424             lea eax, [esp + 0x24]
// 008750eb  50                   push eax
// 008750ec  6a00                 push 0
// 008750ee  6824100000           push 0x1024
// 008750f3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008750fb  ff1594ba9e00         call dword ptr [0x9eba94]
// 00875101  837c242000           cmp dword ptr [esp + 0x20], 0
// 00875106  0f849c000000         je 0x8751a8
// 0087510c  57                   push edi
// 0087510d  8d4c2410             lea ecx, [esp + 0x10]
// 00875111  e89aa1f8ff           call 0x7ff2b0
// 00875116  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087511a  8b0e                 mov ecx, dword ptr [esi]
// 0087511c  8b5604               mov edx, dword ptr [esi + 4]
// 0087511f  6a00                 push 0
// 00875121  57                   push edi
// 00875122  83ec10               sub esp, 0x10
// 00875125  8bc4                 mov eax, esp
// 00875127  8908                 mov dword ptr [eax], ecx
// 00875129  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087512c  895004               mov dword ptr [eax + 4], edx
// 0087512f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00875132  894808               mov dword ptr [eax + 8], ecx
// 00875135  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00875139  89500c               mov dword ptr [eax + 0xc], edx
// 0087513c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00875140  83ec10               sub esp, 0x10
// 00875143  8bc4                 mov eax, esp
// 00875145  8908                 mov dword ptr [eax], ecx
// 00875147  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0087514b  895004               mov dword ptr [eax + 4], edx
// 0087514e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00875152  894808               mov dword ptr [eax + 8], ecx
// 00875155  6a01                 push 1
// 00875157  8bcb                 mov ecx, ebx
// 00875159  89500c               mov dword ptr [eax + 0xc], edx
// 0087515c  e8bffdffff           call 0x874f20
// 00875161  8b0e                 mov ecx, dword ptr [esi]
// 00875163  8b5604               mov edx, dword ptr [esi + 4]
// 00875166  6a00                 push 0
// 00875168  57                   push edi
// 00875169  83ec10               sub esp, 0x10
// 0087516c  8bc4                 mov eax, esp
// 0087516e  8908                 mov dword ptr [eax], ecx
// 00875170  8b4e08               mov ecx, dword ptr [esi + 8]
// 00875173  895004               mov dword ptr [eax + 4], edx
// 00875176  8b560c               mov edx, dword ptr [esi + 0xc]
// 00875179  894808               mov dword ptr [eax + 8], ecx
// 0087517c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00875180  89500c               mov dword ptr [eax + 0xc], edx
// 00875183  8b542428             mov edx, dword ptr [esp + 0x28]
// 00875187  83ec10               sub esp, 0x10
// 0087518a  8bc4                 mov eax, esp
// 0087518c  8908                 mov dword ptr [eax], ecx
// 0087518e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00875192  895004               mov dword ptr [eax + 4], edx
// 00875195  8b542440             mov edx, dword ptr [esp + 0x40]
// 00875199  894808               mov dword ptr [eax + 8], ecx
// 0087519c  6a00                 push 0
// 0087519e  8bcb                 mov ecx, ebx
// 008751a0  89500c               mov dword ptr [eax + 0xc], edx
// 008751a3  e878fdffff           call 0x874f20
// 008751a8  5f                   pop edi
// 008751a9  5e                   pop esi
// 008751aa  5b                   pop ebx
// 008751ab  83c410               add esp, 0x10
// 008751ae  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
