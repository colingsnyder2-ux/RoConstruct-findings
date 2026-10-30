// roc 2010-06 00893e40  unit: CXTPRichRender::XTextHost  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893e40
//
// 00893e40  6aff                 push -1
// 00893e42  6826b99b00           push 0x9bb926
// 00893e47  64a100000000         mov eax, dword ptr fs:[0]
// 00893e4d  50                   push eax
// 00893e4e  81ec64010000         sub esp, 0x164
// 00893e54  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00893e59  33c4                 xor eax, esp
// 00893e5b  89842460010000       mov dword ptr [esp + 0x160], eax
// 00893e62  53                   push ebx
// 00893e63  55                   push ebp
// 00893e64  56                   push esi
// 00893e65  57                   push edi
// 00893e66  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00893e6b  33c4                 xor eax, esp
// 00893e6d  50                   push eax
// 00893e6e  8d842478010000       lea eax, [esp + 0x178]
// 00893e75  64a300000000         mov dword ptr fs:[0], eax
// 00893e7b  8bf1                 mov esi, ecx
// 00893e7d  8974241c             mov dword ptr [esp + 0x1c], esi
// 00893e81  e8f88e0e00           call 0x97cd7e
// 00893e86  6854010000           push 0x154
// 00893e8b  8d442424             lea eax, [esp + 0x24]
// 00893e8f  6a00                 push 0
// 00893e91  8d5e20               lea ebx, [esi + 0x20]
// 00893e94  c7068cffa600         mov dword ptr [esi], 0xa6ff8c
// 00893e9a  50                   push eax
// 00893e9b  c784248c01000000000000 mov dword ptr [esp + 0x18c], 0
// 00893ea6  c703ecffa600         mov dword ptr [ebx], 0xa6ffec
// 00893eac  e8334df1ff           call 0x7a8be4
// 00893eb1  83c40c               add esp, 0xc
// 00893eb4  6a00                 push 0
// 00893eb6  8d4c2424             lea ecx, [esp + 0x24]
// 00893eba  51                   push ecx
// 00893ebb  6854010000           push 0x154
// 00893ec0  6a29                 push 0x29
// 00893ec2  c744243054010000     mov dword ptr [esp + 0x30], 0x154
// 00893eca  ff1594ba9e00         call dword ptr [0x9eba94]
// 00893ed0  6a00                 push 0
// 00893ed2  ff1570ba9e00         call dword ptr [0x9eba70]
// 00893ed8  6a5c                 push 0x5c
// 00893eda  8d6e28               lea ebp, [esi + 0x28]
// 00893edd  6a00                 push 0
// 00893edf  55                   push ebp
// 00893ee0  8bf8                 mov edi, eax
// 00893ee2  e8fd4cf1ff           call 0x7a8be4
// 00893ee7  83c40c               add esp, 0xc
// 00893eea  6a5a                 push 0x5a
// 00893eec  57                   push edi
// 00893eed  c745005c000000       mov dword ptr [ebp], 0x5c
// 00893ef4  c7462c0f0000e8       mov dword ptr [esi + 0x2c], 0xe800000f
// 00893efb  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 00893f01  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 00893f08  50                   push eax
// 00893f09  68a0050000           push 0x5a0
// 00893f0e  52                   push edx
// 00893f0f  ff15c8a29e00         call dword ptr [0x9ea2c8]
// 00893f15  f7d8                 neg eax
// 00893f17  6a12                 push 0x12
// 00893f19  894634               mov dword ptr [esi + 0x34], eax
// 00893f1c  ff1504ba9e00         call dword ptr [0x9eba04]
// 00893f22  89463c               mov dword ptr [esi + 0x3c], eax
// 00893f25  8d842454010000       lea eax, [esp + 0x154]
// 00893f2c  50                   push eax
// 00893f2d  8d4c241c             lea ecx, [esp + 0x1c]
// 00893f31  c6464100             mov byte ptr [esi + 0x41], 0
// 00893f35  e866eaf8ff           call 0x8229a0
// 00893f3a  8bc8                 mov ecx, eax
// 00893f3c  c684248001000001     mov byte ptr [esp + 0x180], 1
// 00893f44  e887cebfff           call 0x490dd0
// 00893f49  6a20                 push 0x20
// 00893f4b  50                   push eax
// 00893f4c  8d4e42               lea ecx, [esi + 0x42]
// 00893f4f  6a20                 push 0x20
// 00893f51  51                   push ecx
// 00893f52  ff1560a89e00         call dword ptr [0x9ea860]
// 00893f58  83c410               add esp, 0x10
// 00893f5b  8d4c2418             lea ecx, [esp + 0x18]
// 00893f5f  c684248001000000     mov byte ptr [esp + 0x180], 0
// 00893f67  e814e1f8ff           call 0x822080
// 00893f6c  57                   push edi
// 00893f6d  6a00                 push 0
// 00893f6f  ff1568ba9e00         call dword ptr [0x9eba68]
// 00893f75  689c000000           push 0x9c
// 00893f7a  8dbe84000000         lea edi, [esi + 0x84]
// 00893f80  6a00                 push 0
// 00893f82  57                   push edi
// 00893f83  e85c4cf1ff           call 0x7a8be4
// 00893f88  83c40c               add esp, 0xc
// 00893f8b  c7079c000000         mov dword ptr [edi], 0x9c
// 00893f91  ba01000000           mov edx, 1
// 00893f96  8d7e24               lea edi, [esi + 0x24]
// 00893f99  68a800a700           push 0xa700a8
// 00893f9e  c786880000003f000180 mov dword ptr [esi + 0x88], 0x8001003f
// 00893fa8  6689969c000000       mov word ptr [esi + 0x9c], dx
// 00893faf  c70700000000         mov dword ptr [edi], 0
// 00893fb5  ff1548a39e00         call dword ptr [0x9ea348]
// 00893fbb  898620010000         mov dword ptr [esi + 0x120], eax
// 00893fc1  85c0                 test eax, eax
// 00893fc3  743f                 je 0x894004
// 00893fc5  689400a700           push 0xa70094
// 00893fca  50                   push eax
// 00893fcb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00893fd3  ff1590a39e00         call dword ptr [0x9ea390]
// 00893fd9  8d4c2414             lea ecx, [esp + 0x14]
// 00893fdd  51                   push ecx
// 00893fde  53                   push ebx
// 00893fdf  6a00                 push 0
// 00893fe1  ffd0                 call eax
// 00893fe3  85c0                 test eax, eax
// 00893fe5  7c1d                 jl 0x894004
// 00893fe7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00893feb  8b10                 mov edx, dword ptr [eax]
// 00893fed  57                   push edi
// 00893fee  6860ffa600           push 0xa6ff60
// 00893ff3  50                   push eax
// 00893ff4  8b02                 mov eax, dword ptr [edx]
// 00893ff6  ffd0                 call eax
// 00893ff8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00893ffc  8b08                 mov ecx, dword ptr [eax]
// 00893ffe  8b5108               mov edx, dword ptr [ecx + 8]
// 00894001  50                   push eax
// 00894002  ffd2                 call edx
// 00894004  8bc6                 mov eax, esi
// 00894006  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 0089400d  64890d00000000       mov dword ptr fs:[0], ecx
// 00894014  59                   pop ecx
// 00894015  5f                   pop edi
// 00894016  5e                   pop esi
// 00894017  5d                   pop ebp
// 00894018  5b                   pop ebx
// 00894019  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00894020  33cc                 xor ecx, esp
// 00894022  e8ad54f1ff           call 0x7a94d4
// 00894027  81c470010000         add esp, 0x170
// 0089402d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRichRender@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPRichRender.cpp