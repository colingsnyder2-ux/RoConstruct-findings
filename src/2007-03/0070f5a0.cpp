// roc 2007-03 0070f5a0  unit: seg_00700000  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f5a0
//
// 0070f5a0  83ec10               sub esp, 0x10
// 0070f5a3  53                   push ebx
// 0070f5a4  55                   push ebp
// 0070f5a5  56                   push esi
// 0070f5a6  8bd9                 mov ebx, ecx
// 0070f5a8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0070f5ab  57                   push edi
// 0070f5ac  33ff                 xor edi, edi
// 0070f5ae  85c0                 test eax, eax
// 0070f5b0  7e61                 jle 0x70f613
// 0070f5b2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0070f5b6  85ff                 test edi, edi
// 0070f5b8  7c11                 jl 0x70f5cb
// 0070f5ba  3bf8                 cmp edi, eax
// 0070f5bc  7d0d                 jge 0x70f5cb
// 0070f5be  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 0070f5c1  7d5c                 jge 0x70f61f
// 0070f5c3  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0070f5c6  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0070f5c9  eb02                 jmp 0x70f5cd
// 0070f5cb  33f6                 xor esi, esi
// 0070f5cd  8bce                 mov ecx, esi
// 0070f5cf  e84cefffff           call 0x70e520
// 0070f5d4  85c0                 test eax, eax
// 0070f5d6  7431                 je 0x70f609
// 0070f5d8  8b5638               mov edx, dword ptr [esi + 0x38]
// 0070f5db  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0070f5de  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0070f5e1  89542414             mov dword ptr [esp + 0x14], edx
// 0070f5e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 0070f5e9  55                   push ebp
// 0070f5ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 0070f5ee  894c2414             mov dword ptr [esp + 0x14], ecx
// 0070f5f2  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0070f5f5  52                   push edx
// 0070f5f6  8d442418             lea eax, [esp + 0x18]
// 0070f5fa  50                   push eax
// 0070f5fb  894c2428             mov dword ptr [esp + 0x28], ecx
// 0070f5ff  ff1598ed7700         call dword ptr [0x77ed98]
// 0070f605  85c0                 test eax, eax
// 0070f607  751b                 jne 0x70f624
// 0070f609  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0070f60c  83c701               add edi, 1
// 0070f60f  3bf8                 cmp edi, eax
// 0070f611  7ca3                 jl 0x70f5b6
// 0070f613  5f                   pop edi
// 0070f614  5e                   pop esi
// 0070f615  5d                   pop ebp
// 0070f616  33c0                 xor eax, eax
// 0070f618  5b                   pop ebx
// 0070f619  83c410               add esp, 0x10
// 0070f61c  c20800               ret 8
// 0070f61f  e88aedf0ff           call 0x61e3ae
// 0070f624  5f                   pop edi
// 0070f625  8bc6                 mov eax, esi
// 0070f627  5e                   pop esi
// 0070f628  5d                   pop ebp
// 0070f629  5b                   pop ebx
// 0070f62a  83c410               add esp, 0x10
// 0070f62d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonGroups.cpp (function ?HitTest@CXTPRibbonGroups@@QBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonGroups.cpp
