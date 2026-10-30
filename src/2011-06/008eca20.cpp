// roc 2011-06 008eca20  unit: CXTPRichRender::XTextHost  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eca20
//
// 008eca20  6aff                 push -1
// 008eca22  6846e4a000           push 0xa0e446
// 008eca27  64a100000000         mov eax, dword ptr fs:[0]
// 008eca2d  50                   push eax
// 008eca2e  81ec64010000         sub esp, 0x164
// 008eca34  a12058c900           mov eax, dword ptr [0xc95820]
// 008eca39  33c4                 xor eax, esp
// 008eca3b  89842460010000       mov dword ptr [esp + 0x160], eax
// 008eca42  53                   push ebx
// 008eca43  55                   push ebp
// 008eca44  56                   push esi
// 008eca45  57                   push edi
// 008eca46  a12058c900           mov eax, dword ptr [0xc95820]
// 008eca4b  33c4                 xor eax, esp
// 008eca4d  50                   push eax
// 008eca4e  8d842478010000       lea eax, [esp + 0x178]
// 008eca55  64a300000000         mov dword ptr fs:[0], eax
// 008eca5b  8bf1                 mov esi, ecx
// 008eca5d  8974241c             mov dword ptr [esp + 0x1c], esi
// 008eca61  e864fb0d00           call 0x9cc5ca
// 008eca66  6854010000           push 0x154
// 008eca6b  8d442424             lea eax, [esp + 0x24]
// 008eca6f  6a00                 push 0
// 008eca71  8d5e20               lea ebx, [esi + 0x20]
// 008eca74  c706b49aad00         mov dword ptr [esi], 0xad9ab4
// 008eca7a  50                   push eax
// 008eca7b  c784248c01000000000000 mov dword ptr [esp + 0x18c], 0
// 008eca86  c703149bad00         mov dword ptr [ebx], 0xad9b14
// 008eca8c  e853e8f1ff           call 0x80b2e4
// 008eca91  83c40c               add esp, 0xc
// 008eca94  6a00                 push 0
// 008eca96  8d4c2424             lea ecx, [esp + 0x24]
// 008eca9a  51                   push ecx
// 008eca9b  6854010000           push 0x154
// 008ecaa0  6a29                 push 0x29
// 008ecaa2  c744243054010000     mov dword ptr [esp + 0x30], 0x154
// 008ecaaa  ff155c1ba400         call dword ptr [0xa41b5c]
// 008ecab0  6a00                 push 0
// 008ecab2  ff15e419a400         call dword ptr [0xa419e4]
// 008ecab8  6a5c                 push 0x5c
// 008ecaba  8d6e28               lea ebp, [esi + 0x28]
// 008ecabd  6a00                 push 0
// 008ecabf  55                   push ebp
// 008ecac0  8bf8                 mov edi, eax
// 008ecac2  e81de8f1ff           call 0x80b2e4
// 008ecac7  83c40c               add esp, 0xc
// 008ecaca  6a5a                 push 0x5a
// 008ecacc  57                   push edi
// 008ecacd  c745005c000000       mov dword ptr [ebp], 0x5c
// 008ecad4  c7462c0f0000e8       mov dword ptr [esi + 0x2c], 0xe800000f
// 008ecadb  ff157401a400         call dword ptr [0xa40174]
// 008ecae1  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 008ecae8  50                   push eax
// 008ecae9  68a0050000           push 0x5a0
// 008ecaee  52                   push edx
// 008ecaef  ff15dc01a400         call dword ptr [0xa401dc]
// 008ecaf5  f7d8                 neg eax
// 008ecaf7  6a12                 push 0x12
// 008ecaf9  894634               mov dword ptr [esi + 0x34], eax
// 008ecafc  ff15181ba400         call dword ptr [0xa41b18]
// 008ecb02  89463c               mov dword ptr [esi + 0x3c], eax
// 008ecb05  8d842454010000       lea eax, [esp + 0x154]
// 008ecb0c  50                   push eax
// 008ecb0d  8d4c241c             lea ecx, [esp + 0x1c]
// 008ecb11  c6464100             mov byte ptr [esi + 0x41], 0
// 008ecb15  e81635f9ff           call 0x880030
// 008ecb1a  8bc8                 mov ecx, eax
// 008ecb1c  c684248001000001     mov byte ptr [esp + 0x180], 1
// 008ecb24  e8d770d6ff           call 0x653c00
// 008ecb29  6a20                 push 0x20
// 008ecb2b  50                   push eax
// 008ecb2c  8d4e42               lea ecx, [esi + 0x42]
// 008ecb2f  6a20                 push 0x20
// 008ecb31  51                   push ecx
// 008ecb32  ff15b409a400         call dword ptr [0xa409b4]
// 008ecb38  83c410               add esp, 0x10
// 008ecb3b  8d4c2418             lea ecx, [esp + 0x18]
// 008ecb3f  c684248001000000     mov byte ptr [esp + 0x180], 0
// 008ecb47  e8542cf9ff           call 0x87f7a0
// 008ecb4c  57                   push edi
// 008ecb4d  6a00                 push 0
// 008ecb4f  ff15dc19a400         call dword ptr [0xa419dc]
// 008ecb55  689c000000           push 0x9c
// 008ecb5a  8dbe84000000         lea edi, [esi + 0x84]
// 008ecb60  6a00                 push 0
// 008ecb62  57                   push edi
// 008ecb63  e87ce7f1ff           call 0x80b2e4
// 008ecb68  83c40c               add esp, 0xc
// 008ecb6b  c7079c000000         mov dword ptr [edi], 0x9c
// 008ecb71  ba01000000           mov edx, 1
// 008ecb76  8d7e24               lea edi, [esi + 0x24]
// 008ecb79  68d09bad00           push 0xad9bd0
// 008ecb7e  c786880000003f000180 mov dword ptr [esi + 0x88], 0x8001003f
// 008ecb88  6689969c000000       mov word ptr [esi + 0x9c], dx
// 008ecb8f  c70700000000         mov dword ptr [edi], 0
// 008ecb95  ff152403a400         call dword ptr [0xa40324]
// 008ecb9b  898620010000         mov dword ptr [esi + 0x120], eax
// 008ecba1  85c0                 test eax, eax
// 008ecba3  743f                 je 0x8ecbe4
// 008ecba5  68bc9bad00           push 0xad9bbc
// 008ecbaa  50                   push eax
// 008ecbab  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008ecbb3  ff156c03a400         call dword ptr [0xa4036c]
// 008ecbb9  8d4c2414             lea ecx, [esp + 0x14]
// 008ecbbd  51                   push ecx
// 008ecbbe  53                   push ebx
// 008ecbbf  6a00                 push 0
// 008ecbc1  ffd0                 call eax
// 008ecbc3  85c0                 test eax, eax
// 008ecbc5  7c1d                 jl 0x8ecbe4
// 008ecbc7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ecbcb  8b10                 mov edx, dword ptr [eax]
// 008ecbcd  57                   push edi
// 008ecbce  68889aad00           push 0xad9a88
// 008ecbd3  50                   push eax
// 008ecbd4  8b02                 mov eax, dword ptr [edx]
// 008ecbd6  ffd0                 call eax
// 008ecbd8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ecbdc  8b08                 mov ecx, dword ptr [eax]
// 008ecbde  8b5108               mov edx, dword ptr [ecx + 8]
// 008ecbe1  50                   push eax
// 008ecbe2  ffd2                 call edx
// 008ecbe4  8bc6                 mov eax, esi
// 008ecbe6  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 008ecbed  64890d00000000       mov dword ptr fs:[0], ecx
// 008ecbf4  59                   pop ecx
// 008ecbf5  5f                   pop edi
// 008ecbf6  5e                   pop esi
// 008ecbf7  5d                   pop ebp
// 008ecbf8  5b                   pop ebx
// 008ecbf9  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008ecc00  33cc                 xor ecx, esp
// 008ecc02  e8f0ecf1ff           call 0x80b8f7
// 008ecc07  81c470010000         add esp, 0x170
// 008ecc0d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRichRender@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPRichRender.cpp