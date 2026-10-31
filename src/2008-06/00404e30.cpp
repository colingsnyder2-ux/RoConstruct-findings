// from server: 100% by auto
// roc 2008-06 00404e30  unit: VCWorkspace::?$CComObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404e30
//
// 00404e30  55                   push ebp
// 00404e31  8bec                 mov ebp, esp
// 00404e33  6aff                 push -1
// 00404e35  6840cd7b00           push 0x7bcd40
// 00404e3a  64a100000000         mov eax, dword ptr fs:[0]
// 00404e40  50                   push eax
// 00404e41  64892500000000       mov dword ptr fs:[0], esp
// 00404e48  83ec0c               sub esp, 0xc
// 00404e4b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00404e4e  53                   push ebx
// 00404e4f  56                   push esi
// 00404e50  33db                 xor ebx, ebx
// 00404e52  57                   push edi
// 00404e53  8965f0               mov dword ptr [ebp - 0x10], esp
// 00404e56  3bc3                 cmp eax, ebx
// 00404e58  7518                 jne 0x404e72
// 00404e5a  b803400080           mov eax, 0x80004003
// 00404e5f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404e62  64890d00000000       mov dword ptr fs:[0], ecx
// 00404e69  5f                   pop edi
// 00404e6a  5e                   pop esi
// 00404e6b  5b                   pop ebx
// 00404e6c  8be5                 mov esp, ebp
// 00404e6e  5d                   pop ebp
// 00404e6f  c20c00               ret 0xc
// 00404e72  bf0e000780           mov edi, 0x8007000e
// 00404e77  6a28                 push 0x28
// 00404e79  8918                 mov dword ptr [eax], ebx
// 00404e7b  897dec               mov dword ptr [ebp - 0x14], edi
// 00404e7e  895dfc               mov dword ptr [ebp - 4], ebx
// 00404e81  e89aba2900           call 0x6a0920
// 00404e86  83c404               add esp, 4
// 00404e89  3bc3                 cmp eax, ebx
// 00404e8b  7424                 je 0x404eb1
// 00404e8d  895804               mov dword ptr [eax + 4], ebx
// 00404e90  33c9                 xor ecx, ecx
// 00404e92  894808               mov dword ptr [eax + 8], ecx
// 00404e95  89480c               mov dword ptr [eax + 0xc], ecx
// 00404e98  894810               mov dword ptr [eax + 0x10], ecx
// 00404e9b  894814               mov dword ptr [eax + 0x14], ecx
// 00404e9e  894818               mov dword ptr [eax + 0x18], ecx
// 00404ea1  89481c               mov dword ptr [eax + 0x1c], ecx
// 00404ea4  885820               mov byte ptr [eax + 0x20], bl
// 00404ea7  c70030b28000         mov dword ptr [eax], 0x80b230
// 00404ead  8bf0                 mov esi, eax
// 00404eaf  eb02                 jmp 0x404eb3
// 00404eb1  33f6                 xor esi, esi
// 00404eb3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00404eba  3bf3                 cmp esi, ebx
// 00404ebc  7451                 je 0x404f0f
// 00404ebe  8b4508               mov eax, dword ptr [ebp + 8]
// 00404ec1  8d7e08               lea edi, [esi + 8]
// 00404ec4  8bcf                 mov ecx, edi
// 00404ec6  894624               mov dword ptr [esi + 0x24], eax
// 00404ec9  e892c9ffff           call 0x401860
// 00404ece  3bc3                 cmp eax, ebx
// 00404ed0  7c04                 jl 0x404ed6
// 00404ed2  c6471801             mov byte ptr [edi + 0x18], 1
// 00404ed6  3bc3                 cmp eax, ebx
// 00404ed8  8bf8                 mov edi, eax
// 00404eda  7c15                 jl 0x404ef1
// 00404edc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00404edf  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00404ee2  8b0e                 mov ecx, dword ptr [esi]
// 00404ee4  8b09                 mov ecx, dword ptr [ecx]
// 00404ee6  52                   push edx
// 00404ee7  50                   push eax
// 00404ee8  56                   push esi
// 00404ee9  ffd1                 call ecx
// 00404eeb  8bf8                 mov edi, eax
// 00404eed  3bfb                 cmp edi, ebx
// 00404eef  741e                 je 0x404f0f
// 00404ef1  8b16                 mov edx, dword ptr [esi]
// 00404ef3  8b4214               mov eax, dword ptr [edx + 0x14]
// 00404ef6  6a01                 push 1
// 00404ef8  8bce                 mov ecx, esi
// 00404efa  ffd0                 call eax
// 00404efc  eb11                 jmp 0x404f0f
// 00404efe  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00404f01  e84aba2900           call 0x6a0950
// 00404f06  b80c4f4000           mov eax, 0x404f0c
// 00404f0b  c3                   ret 
// 00404f0c  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00404f0f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404f12  8bc7                 mov eax, edi
// 00404f14  5f                   pop edi
// 00404f15  5e                   pop esi
// 00404f16  64890d00000000       mov dword ptr fs:[0], ecx
// 00404f1d  5b                   pop ebx
// 00404f1e  8be5                 mov esp, ebp
// 00404f20  5d                   pop ebp
// 00404f21  c20c00               ret 0xc

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_1f2246b5cad71147.cpp
