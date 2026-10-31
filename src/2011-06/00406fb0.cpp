// roc 2011-06 00406fb0  unit: VCApp::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00406fb0
//
// 00406fb0  55                   push ebp
// 00406fb1  8bec                 mov ebp, esp
// 00406fb3  6aff                 push -1
// 00406fb5  68e0d29c00           push 0x9cd2e0
// 00406fba  64a100000000         mov eax, dword ptr fs:[0]
// 00406fc0  50                   push eax
// 00406fc1  64892500000000       mov dword ptr fs:[0], esp
// 00406fc8  83ec0c               sub esp, 0xc
// 00406fcb  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00406fce  53                   push ebx
// 00406fcf  56                   push esi
// 00406fd0  33db                 xor ebx, ebx
// 00406fd2  57                   push edi
// 00406fd3  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406fd6  3bc3                 cmp eax, ebx
// 00406fd8  7518                 jne 0x406ff2
// 00406fda  b803400080           mov eax, 0x80004003
// 00406fdf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406fe2  64890d00000000       mov dword ptr fs:[0], ecx
// 00406fe9  5f                   pop edi
// 00406fea  5e                   pop esi
// 00406feb  5b                   pop ebx
// 00406fec  8be5                 mov esp, ebp
// 00406fee  5d                   pop ebp
// 00406fef  c20c00               ret 0xc
// 00406ff2  bf0e000780           mov edi, 0x8007000e
// 00406ff7  6a28                 push 0x28
// 00406ff9  8918                 mov dword ptr [eax], ebx
// 00406ffb  897dec               mov dword ptr [ebp - 0x14], edi
// 00406ffe  895dfc               mov dword ptr [ebp - 4], ebx
// 00407001  e858304000           call 0x80a05e
// 00407006  83c404               add esp, 4
// 00407009  3bc3                 cmp eax, ebx
// 0040700b  7424                 je 0x407031
// 0040700d  895804               mov dword ptr [eax + 4], ebx
// 00407010  33c9                 xor ecx, ecx
// 00407012  894808               mov dword ptr [eax + 8], ecx
// 00407015  89480c               mov dword ptr [eax + 0xc], ecx
// 00407018  894810               mov dword ptr [eax + 0x10], ecx
// 0040701b  894814               mov dword ptr [eax + 0x14], ecx
// 0040701e  894818               mov dword ptr [eax + 0x18], ecx
// 00407021  89481c               mov dword ptr [eax + 0x1c], ecx
// 00407024  885820               mov byte ptr [eax + 0x20], bl
// 00407027  c700acbba500         mov dword ptr [eax], 0xa5bbac
// 0040702d  8bf0                 mov esi, eax
// 0040702f  eb02                 jmp 0x407033
// 00407031  33f6                 xor esi, esi
// 00407033  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040703a  3bf3                 cmp esi, ebx
// 0040703c  7451                 je 0x40708f
// 0040703e  8b4508               mov eax, dword ptr [ebp + 8]
// 00407041  8d7e08               lea edi, [esi + 8]
// 00407044  8bcf                 mov ecx, edi
// 00407046  894624               mov dword ptr [esi + 0x24], eax
// 00407049  e8c2c5ffff           call 0x403610
// 0040704e  3bc3                 cmp eax, ebx
// 00407050  7c04                 jl 0x407056
// 00407052  c6471801             mov byte ptr [edi + 0x18], 1
// 00407056  3bc3                 cmp eax, ebx
// 00407058  8bf8                 mov edi, eax
// 0040705a  7c15                 jl 0x407071
// 0040705c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0040705f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00407062  8b0e                 mov ecx, dword ptr [esi]
// 00407064  8b09                 mov ecx, dword ptr [ecx]
// 00407066  52                   push edx
// 00407067  50                   push eax
// 00407068  56                   push esi
// 00407069  ffd1                 call ecx
// 0040706b  8bf8                 mov edi, eax
// 0040706d  3bfb                 cmp edi, ebx
// 0040706f  741e                 je 0x40708f
// 00407071  8b16                 mov edx, dword ptr [esi]
// 00407073  8b4214               mov eax, dword ptr [edx + 0x14]
// 00407076  6a01                 push 1
// 00407078  8bce                 mov ecx, esi
// 0040707a  ffd0                 call eax
// 0040707c  eb11                 jmp 0x40708f
// 0040707e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00407081  e8b4324000           call 0x80a33a
// 00407086  b88c704000           mov eax, 0x40708c
// 0040708b  c3                   ret 
// 0040708c  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 0040708f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407092  8bc7                 mov eax, edi
// 00407094  5f                   pop edi
// 00407095  5e                   pop esi
// 00407096  64890d00000000       mov dword ptr fs:[0], ecx
// 0040709d  5b                   pop ebx
// 0040709e  8be5                 mov esp, ebp
// 004070a0  5d                   pop ebp
// 004070a1  c20c00               ret 0xc
// copied from an identical function in another client (function ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SGJPAXABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp