// roc 2012-06 00a64e00  unit: CXTPRichRender::XTextHost  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64e00
//
// 00a64e00  6aff                 push -1
// 00a64e02  687680ae00           push 0xae8076
// 00a64e07  64a100000000         mov eax, dword ptr fs:[0]
// 00a64e0d  50                   push eax
// 00a64e0e  81ec64010000         sub esp, 0x164
// 00a64e14  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a64e19  33c4                 xor eax, esp
// 00a64e1b  89842460010000       mov dword ptr [esp + 0x160], eax
// 00a64e22  53                   push ebx
// 00a64e23  55                   push ebp
// 00a64e24  56                   push esi
// 00a64e25  57                   push edi
// 00a64e26  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a64e2b  33c4                 xor eax, esp
// 00a64e2d  50                   push eax
// 00a64e2e  8d842478010000       lea eax, [esp + 0x178]
// 00a64e35  64a300000000         mov dword ptr fs:[0], eax
// 00a64e3b  8bf1                 mov esi, ecx
// 00a64e3d  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a64e41  e83e470300           call 0xa99584
// 00a64e46  6854010000           push 0x154
// 00a64e4b  8d442424             lea eax, [esp + 0x24]
// 00a64e4f  6a00                 push 0
// 00a64e51  8d5e20               lea ebx, [esi + 0x20]
// 00a64e54  c7064c51c200         mov dword ptr [esi], 0xc2514c
// 00a64e5a  50                   push eax
// 00a64e5b  c784248c01000000000000 mov dword ptr [esp + 0x18c], 0
// 00a64e66  c703ac51c200         mov dword ptr [ebx], 0xc251ac
// 00a64e6c  e803e5f1ff           call 0x983374
// 00a64e71  83c40c               add esp, 0xc
// 00a64e74  6a00                 push 0
// 00a64e76  8d4c2424             lea ecx, [esp + 0x24]
// 00a64e7a  51                   push ecx
// 00a64e7b  6854010000           push 0x154
// 00a64e80  6a29                 push 0x29
// 00a64e82  c744243054010000     mov dword ptr [esp + 0x30], 0x154
// 00a64e8a  ff15543ab200         call dword ptr [0xb23a54]
// 00a64e90  6a00                 push 0
// 00a64e92  ff15f83bb200         call dword ptr [0xb23bf8]
// 00a64e98  6a5c                 push 0x5c
// 00a64e9a  8d6e28               lea ebp, [esi + 0x28]
// 00a64e9d  6a00                 push 0
// 00a64e9f  55                   push ebp
// 00a64ea0  8bf8                 mov edi, eax
// 00a64ea2  e8cde4f1ff           call 0x983374
// 00a64ea7  83c40c               add esp, 0xc
// 00a64eaa  6a5a                 push 0x5a
// 00a64eac  57                   push edi
// 00a64ead  c745005c000000       mov dword ptr [ebp], 0x5c
// 00a64eb4  c7462c0f0000e8       mov dword ptr [esi + 0x2c], 0xe800000f
// 00a64ebb  ff154821b200         call dword ptr [0xb22148]
// 00a64ec1  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 00a64ec8  50                   push eax
// 00a64ec9  68a0050000           push 0x5a0
// 00a64ece  52                   push edx
// 00a64ecf  ff150423b200         call dword ptr [0xb22304]
// 00a64ed5  f7d8                 neg eax
// 00a64ed7  6a12                 push 0x12
// 00a64ed9  894634               mov dword ptr [esi + 0x34], eax
// 00a64edc  ff15d83cb200         call dword ptr [0xb23cd8]
// 00a64ee2  89463c               mov dword ptr [esi + 0x3c], eax
// 00a64ee5  8d842454010000       lea eax, [esp + 0x154]
// 00a64eec  50                   push eax
// 00a64eed  8d4c241c             lea ecx, [esp + 0x1c]
// 00a64ef1  c6464100             mov byte ptr [esi + 0x41], 0
// 00a64ef5  e8e636f9ff           call 0x9f85e0
// 00a64efa  8bc8                 mov ecx, eax
// 00a64efc  c684248001000001     mov byte ptr [esp + 0x180], 1
// 00a64f04  e8178da1ff           call 0x47dc20
// 00a64f09  6a20                 push 0x20
// 00a64f0b  50                   push eax
// 00a64f0c  8d4e42               lea ecx, [esi + 0x42]
// 00a64f0f  6a20                 push 0x20
// 00a64f11  51                   push ecx
// 00a64f12  ff15502ab200         call dword ptr [0xb22a50]
// 00a64f18  83c410               add esp, 0x10
// 00a64f1b  8d4c2418             lea ecx, [esp + 0x18]
// 00a64f1f  c684248001000000     mov byte ptr [esp + 0x180], 0
// 00a64f27  e8242ef9ff           call 0x9f7d50
// 00a64f2c  57                   push edi
// 00a64f2d  6a00                 push 0
// 00a64f2f  ff15003cb200         call dword ptr [0xb23c00]
// 00a64f35  689c000000           push 0x9c
// 00a64f3a  8dbe84000000         lea edi, [esi + 0x84]
// 00a64f40  6a00                 push 0
// 00a64f42  57                   push edi
// 00a64f43  e82ce4f1ff           call 0x983374
// 00a64f48  83c40c               add esp, 0xc
// 00a64f4b  c7079c000000         mov dword ptr [edi], 0x9c
// 00a64f51  ba01000000           mov edx, 1
// 00a64f56  8d7e24               lea edi, [esi + 0x24]
// 00a64f59  686852c200           push 0xc25268
// 00a64f5e  c786880000003f000180 mov dword ptr [esi + 0x88], 0x8001003f
// 00a64f68  6689969c000000       mov word ptr [esi + 0x9c], dx
// 00a64f6f  c70700000000         mov dword ptr [edi], 0
// 00a64f75  ff154822b200         call dword ptr [0xb22248]
// 00a64f7b  898620010000         mov dword ptr [esi + 0x120], eax
// 00a64f81  85c0                 test eax, eax
// 00a64f83  743f                 je 0xa64fc4
// 00a64f85  685452c200           push 0xc25254
// 00a64f8a  50                   push eax
// 00a64f8b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a64f93  ff15b021b200         call dword ptr [0xb221b0]
// 00a64f99  8d4c2414             lea ecx, [esp + 0x14]
// 00a64f9d  51                   push ecx
// 00a64f9e  53                   push ebx
// 00a64f9f  6a00                 push 0
// 00a64fa1  ffd0                 call eax
// 00a64fa3  85c0                 test eax, eax
// 00a64fa5  7c1d                 jl 0xa64fc4
// 00a64fa7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a64fab  8b10                 mov edx, dword ptr [eax]
// 00a64fad  57                   push edi
// 00a64fae  682051c200           push 0xc25120
// 00a64fb3  50                   push eax
// 00a64fb4  8b02                 mov eax, dword ptr [edx]
// 00a64fb6  ffd0                 call eax
// 00a64fb8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a64fbc  8b08                 mov ecx, dword ptr [eax]
// 00a64fbe  8b5108               mov edx, dword ptr [ecx + 8]
// 00a64fc1  50                   push eax
// 00a64fc2  ffd2                 call edx
// 00a64fc4  8bc6                 mov eax, esi
// 00a64fc6  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 00a64fcd  64890d00000000       mov dword ptr fs:[0], ecx
// 00a64fd4  59                   pop ecx
// 00a64fd5  5f                   pop edi
// 00a64fd6  5e                   pop esi
// 00a64fd7  5d                   pop ebp
// 00a64fd8  5b                   pop ebx
// 00a64fd9  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00a64fe0  33cc                 xor ecx, esp
// 00a64fe2  e850eaf1ff           call 0x983a37
// 00a64fe7  81c470010000         add esp, 0x170
// 00a64fed  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRichRender@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPRichRender.cpp