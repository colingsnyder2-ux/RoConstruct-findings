// roc 2009-12 008dfbd0  unit: CXTPRichRender::XTextHost  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfbd0
//
// 008dfbd0  6aff                 push -1
// 008dfbd2  68f6599600           push 0x9659f6
// 008dfbd7  64a100000000         mov eax, dword ptr fs:[0]
// 008dfbdd  50                   push eax
// 008dfbde  81ec64010000         sub esp, 0x164
// 008dfbe4  a10052b600           mov eax, dword ptr [0xb65200]
// 008dfbe9  33c4                 xor eax, esp
// 008dfbeb  89842460010000       mov dword ptr [esp + 0x160], eax
// 008dfbf2  53                   push ebx
// 008dfbf3  55                   push ebp
// 008dfbf4  56                   push esi
// 008dfbf5  57                   push edi
// 008dfbf6  a10052b600           mov eax, dword ptr [0xb65200]
// 008dfbfb  33c4                 xor eax, esp
// 008dfbfd  50                   push eax
// 008dfbfe  8d842478010000       lea eax, [esp + 0x178]
// 008dfc05  64a300000000         mov dword ptr fs:[0], eax
// 008dfc0b  8bf1                 mov esi, ecx
// 008dfc0d  8974241c             mov dword ptr [esp + 0x1c], esi
// 008dfc11  e82c680400           call 0x926442
// 008dfc16  6854010000           push 0x154
// 008dfc1b  8d442424             lea eax, [esp + 0x24]
// 008dfc1f  6a00                 push 0
// 008dfc21  8d5e20               lea ebx, [esi + 0x20]
// 008dfc24  c70694bca000         mov dword ptr [esi], 0xa0bc94
// 008dfc2a  50                   push eax
// 008dfc2b  c784248c01000000000000 mov dword ptr [esp + 0x18c], 0
// 008dfc36  c703f4bca000         mov dword ptr [ebx], 0xa0bcf4
// 008dfc3c  e8634ef1ff           call 0x7f4aa4
// 008dfc41  83c40c               add esp, 0xc
// 008dfc44  6a00                 push 0
// 008dfc46  8d4c2424             lea ecx, [esp + 0x24]
// 008dfc4a  51                   push ecx
// 008dfc4b  6854010000           push 0x154
// 008dfc50  6a29                 push 0x29
// 008dfc52  c744243054010000     mov dword ptr [esp + 0x30], 0x154
// 008dfc5a  ff1500cc9800         call dword ptr [0x98cc00]
// 008dfc60  6a00                 push 0
// 008dfc62  ff15e0cb9800         call dword ptr [0x98cbe0]
// 008dfc68  6a5c                 push 0x5c
// 008dfc6a  8d6e28               lea ebp, [esi + 0x28]
// 008dfc6d  6a00                 push 0
// 008dfc6f  55                   push ebp
// 008dfc70  8bf8                 mov edi, eax
// 008dfc72  e82d4ef1ff           call 0x7f4aa4
// 008dfc77  83c40c               add esp, 0xc
// 008dfc7a  6a5a                 push 0x5a
// 008dfc7c  57                   push edi
// 008dfc7d  c745005c000000       mov dword ptr [ebp], 0x5c
// 008dfc84  c7462c0f0000e8       mov dword ptr [esi + 0x2c], 0xe800000f
// 008dfc8b  ff1564b19800         call dword ptr [0x98b164]
// 008dfc91  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 008dfc98  50                   push eax
// 008dfc99  68a0050000           push 0x5a0
// 008dfc9e  52                   push edx
// 008dfc9f  ff15a0b29800         call dword ptr [0x98b2a0]
// 008dfca5  f7d8                 neg eax
// 008dfca7  6a12                 push 0x12
// 008dfca9  894634               mov dword ptr [esi + 0x34], eax
// 008dfcac  ff15d8ca9800         call dword ptr [0x98cad8]
// 008dfcb2  89463c               mov dword ptr [esi + 0x3c], eax
// 008dfcb5  8d842454010000       lea eax, [esp + 0x154]
// 008dfcbc  50                   push eax
// 008dfcbd  8d4c241c             lea ecx, [esp + 0x1c]
// 008dfcc1  c6464100             mov byte ptr [esi + 0x41], 0
// 008dfcc5  e8c6ecf8ff           call 0x86e990
// 008dfcca  8bc8                 mov ecx, eax
// 008dfccc  c684248001000001     mov byte ptr [esp + 0x180], 1
// 008dfcd4  e897f9c4ff           call 0x52f670
// 008dfcd9  6a20                 push 0x20
// 008dfcdb  50                   push eax
// 008dfcdc  8d4e42               lea ecx, [esi + 0x42]
// 008dfcdf  6a20                 push 0x20
// 008dfce1  51                   push ecx
// 008dfce2  ff15e4b79800         call dword ptr [0x98b7e4]
// 008dfce8  83c410               add esp, 0x10
// 008dfceb  8d4c2418             lea ecx, [esp + 0x18]
// 008dfcef  c684248001000000     mov byte ptr [esp + 0x180], 0
// 008dfcf7  e874e3f8ff           call 0x86e070
// 008dfcfc  57                   push edi
// 008dfcfd  6a00                 push 0
// 008dfcff  ff15d8cb9800         call dword ptr [0x98cbd8]
// 008dfd05  689c000000           push 0x9c
// 008dfd0a  8dbe84000000         lea edi, [esi + 0x84]
// 008dfd10  6a00                 push 0
// 008dfd12  57                   push edi
// 008dfd13  e88c4df1ff           call 0x7f4aa4
// 008dfd18  83c40c               add esp, 0xc
// 008dfd1b  c7079c000000         mov dword ptr [edi], 0x9c
// 008dfd21  ba01000000           mov edx, 1
// 008dfd26  8d7e24               lea edi, [esi + 0x24]
// 008dfd29  68b0bda000           push 0xa0bdb0
// 008dfd2e  c786880000003f000180 mov dword ptr [esi + 0x88], 0x8001003f
// 008dfd38  6689969c000000       mov word ptr [esi + 0x9c], dx
// 008dfd3f  c70700000000         mov dword ptr [edi], 0
// 008dfd45  ff15d8b19800         call dword ptr [0x98b1d8]
// 008dfd4b  898620010000         mov dword ptr [esi + 0x120], eax
// 008dfd51  85c0                 test eax, eax
// 008dfd53  743f                 je 0x8dfd94
// 008dfd55  689cbda000           push 0xa0bd9c
// 008dfd5a  50                   push eax
// 008dfd5b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008dfd63  ff1520b29800         call dword ptr [0x98b220]
// 008dfd69  8d4c2414             lea ecx, [esp + 0x14]
// 008dfd6d  51                   push ecx
// 008dfd6e  53                   push ebx
// 008dfd6f  6a00                 push 0
// 008dfd71  ffd0                 call eax
// 008dfd73  85c0                 test eax, eax
// 008dfd75  7c1d                 jl 0x8dfd94
// 008dfd77  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dfd7b  8b10                 mov edx, dword ptr [eax]
// 008dfd7d  57                   push edi
// 008dfd7e  6868bca000           push 0xa0bc68
// 008dfd83  50                   push eax
// 008dfd84  8b02                 mov eax, dword ptr [edx]
// 008dfd86  ffd0                 call eax
// 008dfd88  8b442414             mov eax, dword ptr [esp + 0x14]
// 008dfd8c  8b08                 mov ecx, dword ptr [eax]
// 008dfd8e  8b5108               mov edx, dword ptr [ecx + 8]
// 008dfd91  50                   push eax
// 008dfd92  ffd2                 call edx
// 008dfd94  8bc6                 mov eax, esi
// 008dfd96  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 008dfd9d  64890d00000000       mov dword ptr fs:[0], ecx
// 008dfda4  59                   pop ecx
// 008dfda5  5f                   pop edi
// 008dfda6  5e                   pop esi
// 008dfda7  5d                   pop ebp
// 008dfda8  5b                   pop ebx
// 008dfda9  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008dfdb0  33cc                 xor ecx, esp
// 008dfdb2  e8e355f1ff           call 0x7f539a
// 008dfdb7  81c470010000         add esp, 0x170
// 008dfdbd  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRichRender@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPRichRender.cpp