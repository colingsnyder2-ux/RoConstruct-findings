// from server: 100% by king_originala
// roc 2008-06 004057f0  unit: VCWorkspace::?$CComObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004057f0
//
// 004057f0  55                   push ebp
// 004057f1  8bec                 mov ebp, esp
// 004057f3  81ec40090000         sub esp, 0x940
// 004057f9  53                   push ebx
// 004057fa  33db                 xor ebx, ebx
// 004057fc  56                   push esi
// 004057fd  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00405800  57                   push edi
// 00405801  c745ec84b18000       mov dword ptr [ebp - 0x14], 0x80b184
// 00405808  895df0               mov dword ptr [ebp - 0x10], ebx
// 0040580b  895df4               mov dword ptr [ebp - 0xc], ebx
// 0040580e  895df8               mov dword ptr [ebp - 8], ebx
// 00405811  3bf3                 cmp esi, ebx
// 00405813  7423                 je 0x405838
// 00405815  8b06                 mov eax, dword ptr [esi]
// 00405817  3bc3                 cmp eax, ebx
// 00405819  741d                 je 0x405838
// 0040581b  eb03                 jmp 0x405820
// 0040581d  8d4900               lea ecx, [ecx]
// 00405820  8b4e04               mov ecx, dword ptr [esi + 4]
// 00405823  51                   push ecx
// 00405824  50                   push eax
// 00405825  8d55ec               lea edx, [ebp - 0x14]
// 00405828  52                   push edx
// 00405829  e812e7ffff           call 0x403f40
// 0040582e  8b4608               mov eax, dword ptr [esi + 8]
// 00405831  83c608               add esi, 8
// 00405834  3bc3                 cmp eax, ebx
// 00405836  75e8                 jne 0x405820
// 00405838  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040583b  8b01                 mov eax, dword ptr [ecx]
// 0040583d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00405840  8d55ec               lea edx, [ebp - 0x14]
// 00405843  52                   push edx
// 00405844  ffd0                 call eax
// 00405846  8bf0                 mov esi, eax
// 00405848  3bf3                 cmp esi, ebx
// 0040584a  0f8c09020000         jl 0x405a59
// 00405850  8b3dacf29700         mov edi, dword ptr [0x97f2ac]
// 00405856  6804010000           push 0x104
// 0040585b  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00405861  51                   push ecx
// 00405862  57                   push edi
// 00405863  895d14               mov dword ptr [ebp + 0x14], ebx
// 00405866  ff15a4218000         call dword ptr [0x8021a4]
// 0040586c  3bc3                 cmp eax, ebx
// 0040586e  750a                 jne 0x40587a
// 00405870  e85bc0ffff           call 0x4018d0
// 00405875  e9d5010000           jmp 0x405a4f
// 0040587a  3d04010000           cmp eax, 0x104
// 0040587f  7524                 jne 0x4058a5
// 00405881  8d4d14               lea ecx, [ebp + 0x14]
// 00405884  e8c7b8ffff           call 0x401150
// 00405889  8d4dec               lea ecx, [ebp - 0x14]
// 0040588c  e80fddffff           call 0x4035a0
// 00405891  b87a000780           mov eax, 0x8007007a
// 00405896  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 0040589c  5f                   pop edi
// 0040589d  5e                   pop esi
// 0040589e  5b                   pop ebx
// 0040589f  8be5                 mov esp, ebp
// 004058a1  5d                   pop ebp
// 004058a2  c21000               ret 0x10
// 004058a5  8d95e8feffff         lea edx, [ebp - 0x118]
// 004058ab  52                   push edx
// 004058ac  ff15b8218000         call dword ptr [0x8021b8]
// 004058b2  40                   inc eax
// 004058b3  6a02                 push 2
// 004058b5  50                   push eax
// 004058b6  894508               mov dword ptr [ebp + 8], eax
// 004058b9  8d4508               lea eax, [ebp + 8]
// 004058bc  50                   push eax
// 004058bd  e84ebeffff           call 0x401710
// 004058c2  83c40c               add esp, 0xc
// 004058c5  85c0                 test eax, eax
// 004058c7  7c44                 jl 0x40590d
// 004058c9  8b7508               mov esi, dword ptr [ebp + 8]
// 004058cc  81fe00040000         cmp esi, 0x400
// 004058d2  7f18                 jg 0x4058ec
// 004058d4  56                   push esi
// 004058d5  e836cdffff           call 0x402610
// 004058da  83c404               add esp, 4
// 004058dd  84c0                 test al, al
// 004058df  740b                 je 0x4058ec
// 004058e1  8bc6                 mov eax, esi
// 004058e3  e878bc2900           call 0x6a1560
// 004058e8  8bc4                 mov eax, esp
// 004058ea  eb09                 jmp 0x4058f5
// 004058ec  56                   push esi
// 004058ed  8d4d14               lea ecx, [ebp + 0x14]
// 004058f0  e85bd6ffff           call 0x402f50
// 004058f5  6a03                 push 3
// 004058f7  d1ee                 shr esi, 1
// 004058f9  56                   push esi
// 004058fa  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00405900  51                   push ecx
// 00405901  50                   push eax
// 00405902  e859beffff           call 0x401760
// 00405907  8bf0                 mov esi, eax
// 00405909  3bf3                 cmp esi, ebx
// 0040590b  7524                 jne 0x405931
// 0040590d  8d4d14               lea ecx, [ebp + 0x14]
// 00405910  e83bb8ffff           call 0x401150
// 00405915  8d4dec               lea ecx, [ebp - 0x14]
// 00405918  e883dcffff           call 0x4035a0
// 0040591d  b80e000780           mov eax, 0x8007000e
// 00405922  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00405928  5f                   pop edi
// 00405929  5e                   pop esi
// 0040592a  5b                   pop ebx
// 0040592b  8be5                 mov esp, ebp
// 0040592d  5d                   pop ebp
// 0040592e  c21000               ret 0x10
// 00405931  56                   push esi
// 00405932  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00405938  6808020000           push 0x208
// 0040593d  52                   push edx
// 0040593e  e84dc2ffff           call 0x401b90
// 00405943  83c40c               add esp, 0xc
// 00405946  3bfb                 cmp edi, ebx
// 00405948  7413                 je 0x40595d
// 0040594a  53                   push ebx
// 0040594b  ff15bc218000         call dword ptr [0x8021bc]
// 00405951  3bf8                 cmp edi, eax
// 00405953  7408                 je 0x40595d
// 00405955  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 0040595b  eb79                 jmp 0x4059d6
// 0040595d  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 00405963  50                   push eax
// 00405964  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 0040596a  ba22000000           mov edx, 0x22
// 0040596f  680b020000           push 0x20b
// 00405974  51                   push ecx
// 00405975  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 0040597c  e85fbeffff           call 0x4017e0
// 00405981  83c40c               add esp, 0xc
// 00405984  84c0                 test al, al
// 00405986  7524                 jne 0x4059ac
// 00405988  8d4d14               lea ecx, [ebp + 0x14]
// 0040598b  e8c0b7ffff           call 0x401150
// 00405990  8d4dec               lea ecx, [ebp - 0x14]
// 00405993  e808dcffff           call 0x4035a0
// 00405998  b805400080           mov eax, 0x80004005
// 0040599d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004059a3  5f                   pop edi
// 004059a4  5e                   pop esi
// 004059a5  5b                   pop ebx
// 004059a6  8be5                 mov esp, ebp
// 004059a8  5d                   pop ebp
// 004059a9  c21000               ret 0x10
// 004059ac  8d95d0faffff         lea edx, [ebp - 0x530]
// 004059b2  52                   push edx
// 004059b3  ff15e8228000         call dword ptr [0x8022e8]
// 004059b9  b922000000           mov ecx, 0x22
// 004059be  33d2                 xor edx, edx
// 004059c0  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 004059c8  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 004059d0  8d85d0faffff         lea eax, [ebp - 0x530]
// 004059d6  50                   push eax
// 004059d7  68ccb28000           push 0x80b2cc
// 004059dc  8d4dec               lea ecx, [ebp - 0x14]
// 004059df  51                   push ecx
// 004059e0  e85be5ffff           call 0x403f40
// 004059e5  8bf8                 mov edi, eax
// 004059e7  3bfb                 cmp edi, ebx
// 004059e9  7d21                 jge 0x405a0c
// 004059eb  8d4d14               lea ecx, [ebp + 0x14]
// 004059ee  e85db7ffff           call 0x401150
// 004059f3  8d4dec               lea ecx, [ebp - 0x14]
// 004059f6  e8a5dbffff           call 0x4035a0
// 004059fb  8bc7                 mov eax, edi
// 004059fd  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00405a03  5f                   pop edi
// 00405a04  5e                   pop esi
// 00405a05  5b                   pop ebx
// 00405a06  8be5                 mov esp, ebp
// 00405a08  5d                   pop ebp
// 00405a09  c21000               ret 0x10
// 00405a0c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00405a12  52                   push edx
// 00405a13  68b4b28000           push 0x80b2b4
// 00405a18  8d45ec               lea eax, [ebp - 0x14]
// 00405a1b  50                   push eax
// 00405a1c  e81fe5ffff           call 0x403f40
// 00405a21  8bf8                 mov edi, eax
// 00405a23  3bfb                 cmp edi, ebx
// 00405a25  7cc4                 jl 0x4059eb
// 00405a27  68a0b28000           push 0x80b2a0
// 00405a2c  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00405a2f  7410                 je 0x405a41
// 00405a31  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00405a34  51                   push ecx
// 00405a35  56                   push esi
// 00405a36  8d55ec               lea edx, [ebp - 0x14]
// 00405a39  52                   push edx
// 00405a3a  e8b1fbffff           call 0x4055f0
// 00405a3f  eb0e                 jmp 0x405a4f
// 00405a41  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00405a44  50                   push eax
// 00405a45  56                   push esi
// 00405a46  8d4dec               lea ecx, [ebp - 0x14]
// 00405a49  51                   push ecx
// 00405a4a  e8a1fcffff           call 0x4056f0
// 00405a4f  8d4d14               lea ecx, [ebp + 0x14]
// 00405a52  8bf0                 mov esi, eax
// 00405a54  e8f7b6ffff           call 0x401150
// 00405a59  8d4dec               lea ecx, [ebp - 0x14]
// 00405a5c  e83fdbffff           call 0x4035a0
// 00405a61  8bc6                 mov eax, esi
// 00405a63  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00405a69  5f                   pop edi
// 00405a6a  5e                   pop esi
// 00405a6b  5b                   pop ebx
// 00405a6c  8be5                 mov esp, ebp
// 00405a6e  5d                   pop ebp
// 00405a6f  c21000               ret 0x10

// from server: 100% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp
