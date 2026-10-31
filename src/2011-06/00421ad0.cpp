// roc 2011-06 00421ad0  unit: RBX::FunctionMarshaller  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00421ad0
//
// 00421ad0  64a100000000         mov eax, dword ptr fs:[0]
// 00421ad6  6aff                 push -1
// 00421ad8  6848ed9c00           push 0x9ced48
// 00421add  50                   push eax
// 00421ade  64892500000000       mov dword ptr fs:[0], esp
// 00421ae5  83ec70               sub esp, 0x70
// 00421ae8  55                   push ebp
// 00421ae9  56                   push esi
// 00421aea  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00421af1  85f6                 test esi, esi
// 00421af3  0f84a0010000         je 0x421c99
// 00421af9  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00421b00  85c0                 test eax, eax
// 00421b02  0f8491010000         je 0x421c99
// 00421b08  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00421b0f  85ed                 test ebp, ebp
// 00421b11  0f8482010000         je 0x421c99
// 00421b17  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 00421b1f  0f8474010000         je 0x421c99
// 00421b25  66837d4000           cmp word ptr [ebp + 0x40], 0
// 00421b2a  53                   push ebx
// 00421b2b  57                   push edi
// 00421b2c  0f853e010000         jne 0x421c70
// 00421b32  83c004               add eax, 4
// 00421b35  89442418             mov dword ptr [esp + 0x18], eax
// 00421b39  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00421b3e  8d4c2418             lea ecx, [esp + 0x18]
// 00421b42  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00421b4d  e82e56feff           call 0x407180
// 00421b52  85c0                 test eax, eax
// 00421b54  7c4f                 jl 0x421ba5
// 00421b56  66837d4000           cmp word ptr [ebp + 0x40], 0
// 00421b5b  0f8506010000         jne 0x421c67
// 00421b61  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00421b64  8b1d041aa400         mov ebx, dword ptr [0xa41a04]
// 00421b6a  85c0                 test eax, eax
// 00421b6c  747f                 je 0x421bed
// 00421b6e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00421b71  8b5508               mov edx, dword ptr [ebp + 8]
// 00421b74  894c2410             mov dword ptr [esp + 0x10], ecx
// 00421b78  8d4c2420             lea ecx, [esp + 0x20]
// 00421b7c  51                   push ecx
// 00421b7d  50                   push eax
// 00421b7e  6a00                 push 0
// 00421b80  89542420             mov dword ptr [esp + 0x20], edx
// 00421b84  c744242c30000000     mov dword ptr [esp + 0x2c], 0x30
// 00421b8c  ffd3                 call ebx
// 00421b8e  85c0                 test eax, eax
// 00421b90  7531                 jne 0x421bc3
// 00421b92  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00421b95  8b4e04               mov ecx, dword ptr [esi + 4]
// 00421b98  8d542420             lea edx, [esp + 0x20]
// 00421b9c  52                   push edx
// 00421b9d  50                   push eax
// 00421b9e  51                   push ecx
// 00421b9f  ffd3                 call ebx
// 00421ba1  85c0                 test eax, eax
// 00421ba3  751e                 jne 0x421bc3
// 00421ba5  8d4c2418             lea ecx, [esp + 0x18]
// 00421ba9  e8e258feff           call 0x407490
// 00421bae  5f                   pop edi
// 00421baf  5b                   pop ebx
// 00421bb0  5e                   pop esi
// 00421bb1  33c0                 xor eax, eax
// 00421bb3  5d                   pop ebp
// 00421bb4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00421bb8  64890d00000000       mov dword ptr fs:[0], ecx
// 00421bbf  83c47c               add esp, 0x7c
// 00421bc2  c3                   ret 
// 00421bc3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00421bc7  b90c000000           mov ecx, 0xc
// 00421bcc  8d742420             lea esi, [esp + 0x20]
// 00421bd0  8bfd                 mov edi, ebp
// 00421bd2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00421bd4  8b4508               mov eax, dword ptr [ebp + 8]
// 00421bd7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00421bdb  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00421be2  894534               mov dword ptr [ebp + 0x34], eax
// 00421be5  894d28               mov dword ptr [ebp + 0x28], ecx
// 00421be8  895508               mov dword ptr [ebp + 8], edx
// 00421beb  eb1b                 jmp 0x421c08
// 00421bed  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 00421bf1  7404                 je 0x421bf7
// 00421bf3  33c0                 xor eax, eax
// 00421bf5  eb03                 jmp 0x421bfa
// 00421bf7  8b4608               mov eax, dword ptr [esi + 8]
// 00421bfa  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 00421bfd  51                   push ecx
// 00421bfe  50                   push eax
// 00421bff  ff15081aa400         call dword ptr [0xa41a08]
// 00421c05  89451c               mov dword ptr [ebp + 0x1c], eax
// 00421c08  8b4604               mov eax, dword ptr [esi + 4]
// 00421c0b  816504ffbfffff       and dword ptr [ebp + 4], 0xffffbfff
// 00421c12  837d2800             cmp dword ptr [ebp + 0x28], 0
// 00421c16  894514               mov dword ptr [ebp + 0x14], eax
// 00421c19  7512                 jne 0x421c2d
// 00421c1b  55                   push ebp
// 00421c1c  8d7542               lea esi, [ebp + 0x42]
// 00421c1f  6a25                 push 0x25
// 00421c21  56                   push esi
// 00421c22  e8a9f9ffff           call 0x4215d0
// 00421c27  83c40c               add esp, 0xc
// 00421c2a  897528               mov dword ptr [ebp + 0x28], esi
// 00421c2d  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00421c30  8d542450             lea edx, [esp + 0x50]
// 00421c34  52                   push edx
// 00421c35  b90c000000           mov ecx, 0xc
// 00421c3a  8bf5                 mov esi, ebp
// 00421c3c  8d7c2454             lea edi, [esp + 0x54]
// 00421c40  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00421c42  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00421c45  50                   push eax
// 00421c46  51                   push ecx
// 00421c47  ffd3                 call ebx
// 00421c49  66894540             mov word ptr [ebp + 0x40], ax
// 00421c4d  6685c0               test ax, ax
// 00421c50  7515                 jne 0x421c67
// 00421c52  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00421c59  55                   push ebp
// 00421c5a  50                   push eax
// 00421c5b  e8f0fcffff           call 0x421950
// 00421c60  83c408               add esp, 8
// 00421c63  66894540             mov word ptr [ebp + 0x40], ax
// 00421c67  8d4c2418             lea ecx, [esp + 0x18]
// 00421c6b  e82058feff           call 0x407490
// 00421c70  837d3000             cmp dword ptr [ebp + 0x30], 0
// 00421c74  740c                 je 0x421c82
// 00421c76  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00421c79  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00421c80  890a                 mov dword ptr [edx], ecx
// 00421c82  668b4540             mov ax, word ptr [ebp + 0x40]
// 00421c86  5f                   pop edi
// 00421c87  5b                   pop ebx
// 00421c88  5e                   pop esi
// 00421c89  5d                   pop ebp
// 00421c8a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00421c8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00421c95  83c47c               add esp, 0x7c
// 00421c98  c3                   ret 
// 00421c99  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00421c9d  5e                   pop esi
// 00421c9e  33c0                 xor eax, eax
// 00421ca0  5d                   pop ebp
// 00421ca1  64890d00000000       mov dword ptr fs:[0], ecx
// 00421ca8  83c47c               add esp, 0x7c
// 00421cab  c3                   ret 
// copied from an identical function in another client (function ??$AtlModuleRegisterWndClassInfoT@VAtlModuleRegisterWndClassInfoParamA@ATL@@@ATL@@YAGPAU_ATL_BASE_MODULE70@0@PAU_ATL_WIN_MODULE70@0@PAU_ATL_WNDCLASSINFOA@0@PAP6GJPAUHWND__@@IIJ@ZVAtlModuleRegisterWndClassInfoParamA@0@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp