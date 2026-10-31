// from server: 100% by auto
// roc 2008-06 0046ac90  unit: VCWorkspace::?$CComObject  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ac90
//
// 0046ac90  55                   push ebp
// 0046ac91  8bec                 mov ebp, esp
// 0046ac93  6aff                 push -1
// 0046ac95  68d0387c00           push 0x7c38d0
// 0046ac9a  64a100000000         mov eax, dword ptr fs:[0]
// 0046aca0  50                   push eax
// 0046aca1  64892500000000       mov dword ptr fs:[0], esp
// 0046aca8  83ec10               sub esp, 0x10
// 0046acab  8b4508               mov eax, dword ptr [ebp + 8]
// 0046acae  53                   push ebx
// 0046acaf  56                   push esi
// 0046acb0  57                   push edi
// 0046acb1  33ff                 xor edi, edi
// 0046acb3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046acb6  3bc7                 cmp eax, edi
// 0046acb8  7518                 jne 0x46acd2
// 0046acba  b803400080           mov eax, 0x80004003
// 0046acbf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046acc2  64890d00000000       mov dword ptr fs:[0], ecx
// 0046acc9  5f                   pop edi
// 0046acca  5e                   pop esi
// 0046accb  5b                   pop ebx
// 0046accc  8be5                 mov esp, ebp
// 0046acce  5d                   pop ebp
// 0046accf  c20400               ret 4
// 0046acd2  bb0e000780           mov ebx, 0x8007000e
// 0046acd7  6894000000           push 0x94
// 0046acdc  8938                 mov dword ptr [eax], edi
// 0046acde  895dec               mov dword ptr [ebp - 0x14], ebx
// 0046ace1  897de8               mov dword ptr [ebp - 0x18], edi
// 0046ace4  897dfc               mov dword ptr [ebp - 4], edi
// 0046ace7  e8345c2300           call 0x6a0920
// 0046acec  8bf0                 mov esi, eax
// 0046acee  83c404               add esp, 4
// 0046acf1  3bf7                 cmp esi, edi
// 0046acf3  743a                 je 0x46ad2f
// 0046acf5  6a01                 push 1
// 0046acf7  6a03                 push 3
// 0046acf9  8d4e0c               lea ecx, [esi + 0xc]
// 0046acfc  897e08               mov dword ptr [esi + 8], edi
// 0046acff  ff1528248000         call dword ptr [0x802428]
// 0046ad05  c706bcea8000         mov dword ptr [esi], 0x80eabc
// 0046ad0b  c7460498ea8000       mov dword ptr [esi + 4], 0x80ea98
// 0046ad12  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0046ad18  8b01                 mov eax, dword ptr [ecx]
// 0046ad1a  8b5004               mov edx, dword ptr [eax + 4]
// 0046ad1d  ffd2                 call edx
// 0046ad1f  8bc6                 mov eax, esi
// 0046ad21  3bc7                 cmp eax, edi
// 0046ad23  7422                 je 0x46ad47
// 0046ad25  ff4008               inc dword ptr [eax + 8]
// 0046ad28  33db                 xor ebx, ebx
// 0046ad2a  ff4808               dec dword ptr [eax + 8]
// 0046ad2d  eb18                 jmp 0x46ad47
// 0046ad2f  33c0                 xor eax, eax
// 0046ad31  ebee                 jmp 0x46ad21
// 0046ad33  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0046ad36  e8155c2300           call 0x6a0950
// 0046ad3b  b841ad4600           mov eax, 0x46ad41
// 0046ad40  c3                   ret 
// 0046ad41  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0046ad44  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0046ad47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046ad4a  8901                 mov dword ptr [ecx], eax
// 0046ad4c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046ad4f  5f                   pop edi
// 0046ad50  5e                   pop esi
// 0046ad51  8bc3                 mov eax, ebx
// 0046ad53  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ad5a  5b                   pop ebx
// 0046ad5b  8be5                 mov esp, ebp
// 0046ad5d  5d                   pop ebp
// 0046ad5e  c20400               ret 4

// from server: 100% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_workspacecomfactoryfix_556dab054c034434.cpp
