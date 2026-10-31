// roc 2012-06 004b1c40  unit: VCContent::?$CComObject  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b1c40
//
// 004b1c40  55                   push ebp
// 004b1c41  8bec                 mov ebp, esp
// 004b1c43  6aff                 push -1
// 004b1c45  68c04baa00           push 0xaa4bc0
// 004b1c4a  64a100000000         mov eax, dword ptr fs:[0]
// 004b1c50  50                   push eax
// 004b1c51  64892500000000       mov dword ptr fs:[0], esp
// 004b1c58  83ec10               sub esp, 0x10
// 004b1c5b  8b4508               mov eax, dword ptr [ebp + 8]
// 004b1c5e  53                   push ebx
// 004b1c5f  56                   push esi
// 004b1c60  57                   push edi
// 004b1c61  33ff                 xor edi, edi
// 004b1c63  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b1c66  3bc7                 cmp eax, edi
// 004b1c68  7518                 jne 0x4b1c82
// 004b1c6a  b803400080           mov eax, 0x80004003
// 004b1c6f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b1c72  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1c79  5f                   pop edi
// 004b1c7a  5e                   pop esi
// 004b1c7b  5b                   pop ebx
// 004b1c7c  8be5                 mov esp, ebp
// 004b1c7e  5d                   pop ebp
// 004b1c7f  c20400               ret 4
// 004b1c82  bb0e000780           mov ebx, 0x8007000e
// 004b1c87  6894000000           push 0x94
// 004b1c8c  8938                 mov dword ptr [eax], edi
// 004b1c8e  895dec               mov dword ptr [ebp - 0x14], ebx
// 004b1c91  897de8               mov dword ptr [ebp - 0x18], edi
// 004b1c94  897dfc               mov dword ptr [ebp - 4], edi
// 004b1c97  e87e044d00           call 0x98211a
// 004b1c9c  8bf0                 mov esi, eax
// 004b1c9e  83c404               add esp, 4
// 004b1ca1  3bf7                 cmp esi, edi
// 004b1ca3  743a                 je 0x4b1cdf
// 004b1ca5  6a01                 push 1
// 004b1ca7  6a03                 push 3
// 004b1ca9  8d4e0c               lea ecx, [esi + 0xc]
// 004b1cac  897e08               mov dword ptr [esi + 8], edi
// 004b1caf  ff156827b200         call dword ptr [0xb22768]
// 004b1cb5  c7062c3ab600         mov dword ptr [esi], 0xb63a2c
// 004b1cbb  c74604083ab600       mov dword ptr [esi + 4], 0xb63a08
// 004b1cc2  8b0dc463e100         mov ecx, dword ptr [0xe163c4]
// 004b1cc8  8b01                 mov eax, dword ptr [ecx]
// 004b1cca  8b5004               mov edx, dword ptr [eax + 4]
// 004b1ccd  ffd2                 call edx
// 004b1ccf  8bc6                 mov eax, esi
// 004b1cd1  3bc7                 cmp eax, edi
// 004b1cd3  7422                 je 0x4b1cf7
// 004b1cd5  ff4008               inc dword ptr [eax + 8]
// 004b1cd8  33db                 xor ebx, ebx
// 004b1cda  ff4808               dec dword ptr [eax + 8]
// 004b1cdd  eb18                 jmp 0x4b1cf7
// 004b1cdf  33c0                 xor eax, eax
// 004b1ce1  ebee                 jmp 0x4b1cd1
// 004b1ce3  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004b1ce6  e8ff064d00           call 0x9823ea
// 004b1ceb  b8f11c4b00           mov eax, 0x4b1cf1
// 004b1cf0  c3                   ret 
// 004b1cf1  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 004b1cf4  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004b1cf7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b1cfa  8901                 mov dword ptr [ecx], eax
// 004b1cfc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b1cff  5f                   pop edi
// 004b1d00  5e                   pop esi
// 004b1d01  8bc3                 mov eax, ebx
// 004b1d03  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1d0a  5b                   pop ebx
// 004b1d0b  8be5                 mov esp, ebp
// 004b1d0d  5d                   pop ebp
// 004b1d0e  c20400               ret 4
// copied from an identical function in another client (function ?CreateInstance@?$CComObject@VCContent@@@ATL@@SGJPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp