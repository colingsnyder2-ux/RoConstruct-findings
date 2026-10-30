// roc 2009-06 008050d0  unit: CXTPRichRender::XTextHost  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008050d0
//
// 008050d0  6aff                 push -1
// 008050d2  6856188800           push 0x881856
// 008050d7  64a100000000         mov eax, dword ptr fs:[0]
// 008050dd  50                   push eax
// 008050de  81ec64010000         sub esp, 0x164
// 008050e4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008050e9  33c4                 xor eax, esp
// 008050eb  89842460010000       mov dword ptr [esp + 0x160], eax
// 008050f2  53                   push ebx
// 008050f3  55                   push ebp
// 008050f4  56                   push esi
// 008050f5  57                   push edi
// 008050f6  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008050fb  33c4                 xor eax, esp
// 008050fd  50                   push eax
// 008050fe  8d842478010000       lea eax, [esp + 0x178]
// 00805105  64a300000000         mov dword ptr fs:[0], eax
// 0080510b  8bf1                 mov esi, ecx
// 0080510d  8974241c             mov dword ptr [esp + 0x1c], esi
// 00805111  e8146e0400           call 0x84bf2a
// 00805116  6854010000           push 0x154
// 0080511b  8d442424             lea eax, [esp + 0x24]
// 0080511f  6a00                 push 0
// 00805121  8d5e20               lea ebx, [esi + 0x20]
// 00805124  c70624b89000         mov dword ptr [esi], 0x90b824
// 0080512a  50                   push eax
// 0080512b  c784248c01000000000000 mov dword ptr [esp + 0x18c], 0
// 00805136  c70384b89000         mov dword ptr [ebx], 0x90b884
// 0080513c  e8334bf1ff           call 0x719c74
// 00805141  83c40c               add esp, 0xc
// 00805144  6a00                 push 0
// 00805146  8d4c2424             lea ecx, [esp + 0x24]
// 0080514a  51                   push ecx
// 0080514b  6854010000           push 0x154
// 00805150  6a29                 push 0x29
// 00805152  c744243054010000     mov dword ptr [esp + 0x30], 0x154
// 0080515a  ff1564ee8900         call dword ptr [0x89ee64]
// 00805160  6a00                 push 0
// 00805162  ff1550ed8900         call dword ptr [0x89ed50]
// 00805168  6a5c                 push 0x5c
// 0080516a  8d6e28               lea ebp, [esi + 0x28]
// 0080516d  6a00                 push 0
// 0080516f  55                   push ebp
// 00805170  8bf8                 mov edi, eax
// 00805172  e8fd4af1ff           call 0x719c74
// 00805177  83c40c               add esp, 0xc
// 0080517a  6a5a                 push 0x5a
// 0080517c  57                   push edi
// 0080517d  c745005c000000       mov dword ptr [ebp], 0x5c
// 00805184  c7462c0f0000e8       mov dword ptr [esi + 0x2c], 0xe800000f
// 0080518b  ff1558e18900         call dword ptr [0x89e158]
// 00805191  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 00805198  50                   push eax
// 00805199  68a0050000           push 0x5a0
// 0080519e  52                   push edx
// 0080519f  ff1574e28900         call dword ptr [0x89e274]
// 008051a5  f7d8                 neg eax
// 008051a7  6a12                 push 0x12
// 008051a9  894634               mov dword ptr [esi + 0x34], eax
// 008051ac  ff15e4ee8900         call dword ptr [0x89eee4]
// 008051b2  89463c               mov dword ptr [esi + 0x3c], eax
// 008051b5  8d842454010000       lea eax, [esp + 0x154]
// 008051bc  50                   push eax
// 008051bd  8d4c241c             lea ecx, [esp + 0x1c]
// 008051c1  c6464100             mov byte ptr [esi + 0x41], 0
// 008051c5  e86660f9ff           call 0x79b230
// 008051ca  8bc8                 mov ecx, eax
// 008051cc  c684248001000001     mov byte ptr [esp + 0x180], 1
// 008051d4  e88750cdff           call 0x4da260
// 008051d9  6a20                 push 0x20
// 008051db  50                   push eax
// 008051dc  8d4e42               lea ecx, [esi + 0x42]
// 008051df  6a20                 push 0x20
// 008051e1  51                   push ecx
// 008051e2  ff1534e98900         call dword ptr [0x89e934]
// 008051e8  83c410               add esp, 0x10
// 008051eb  8d4c2418             lea ecx, [esp + 0x18]
// 008051ef  c684248001000000     mov byte ptr [esp + 0x180], 0
// 008051f7  e8a49ecaff           call 0x4af0a0
// 008051fc  57                   push edi
// 008051fd  6a00                 push 0
// 008051ff  ff1540ed8900         call dword ptr [0x89ed40]
// 00805205  689c000000           push 0x9c
// 0080520a  8dbe84000000         lea edi, [esi + 0x84]
// 00805210  6a00                 push 0
// 00805212  57                   push edi
// 00805213  e85c4af1ff           call 0x719c74
// 00805218  83c40c               add esp, 0xc
// 0080521b  c7079c000000         mov dword ptr [edi], 0x9c
// 00805221  ba01000000           mov edx, 1
// 00805226  8d7e24               lea edi, [esi + 0x24]
// 00805229  6840b99000           push 0x90b940
// 0080522e  c786880000003f000180 mov dword ptr [esi + 0x88], 0x8001003f
// 00805238  6689969c000000       mov word ptr [esi + 0x9c], dx
// 0080523f  c70700000000         mov dword ptr [edi], 0
// 00805245  ff15d4e18900         call dword ptr [0x89e1d4]
// 0080524b  898620010000         mov dword ptr [esi + 0x120], eax
// 00805251  85c0                 test eax, eax
// 00805253  743f                 je 0x805294
// 00805255  682cb99000           push 0x90b92c
// 0080525a  50                   push eax
// 0080525b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00805263  ff15e8e18900         call dword ptr [0x89e1e8]
// 00805269  8d4c2414             lea ecx, [esp + 0x14]
// 0080526d  51                   push ecx
// 0080526e  53                   push ebx
// 0080526f  6a00                 push 0
// 00805271  ffd0                 call eax
// 00805273  85c0                 test eax, eax
// 00805275  7c1d                 jl 0x805294
// 00805277  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080527b  8b10                 mov edx, dword ptr [eax]
// 0080527d  57                   push edi
// 0080527e  68f8b79000           push 0x90b7f8
// 00805283  50                   push eax
// 00805284  8b02                 mov eax, dword ptr [edx]
// 00805286  ffd0                 call eax
// 00805288  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080528c  8b08                 mov ecx, dword ptr [eax]
// 0080528e  8b5108               mov edx, dword ptr [ecx + 8]
// 00805291  50                   push eax
// 00805292  ffd2                 call edx
// 00805294  8bc6                 mov eax, esi
// 00805296  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 0080529d  64890d00000000       mov dword ptr fs:[0], ecx
// 008052a4  59                   pop ecx
// 008052a5  5f                   pop edi
// 008052a6  5e                   pop esi
// 008052a7  5d                   pop ebp
// 008052a8  5b                   pop ebx
// 008052a9  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008052b0  33cc                 xor ecx, esp
// 008052b2  e8c352f1ff           call 0x71a57a
// 008052b7  81c470010000         add esp, 0x170
// 008052bd  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRichRender@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPRichRender.cpp