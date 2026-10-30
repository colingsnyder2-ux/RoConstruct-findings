// roc 2009-06 007869e0  unit: CXTPToolTipContext::CHTMLToolTip  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007869e0
//
// 007869e0  6aff                 push -1
// 007869e2  68cda68700           push 0x87a6cd
// 007869e7  64a100000000         mov eax, dword ptr fs:[0]
// 007869ed  50                   push eax
// 007869ee  81ec5c010000         sub esp, 0x15c
// 007869f4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007869f9  33c4                 xor eax, esp
// 007869fb  89842458010000       mov dword ptr [esp + 0x158], eax
// 00786a02  53                   push ebx
// 00786a03  55                   push ebp
// 00786a04  56                   push esi
// 00786a05  57                   push edi
// 00786a06  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00786a0b  33c4                 xor eax, esp
// 00786a0d  50                   push eax
// 00786a0e  8d842470010000       lea eax, [esp + 0x170]
// 00786a15  64a300000000         mov dword ptr fs:[0], eax
// 00786a1b  8bf1                 mov esi, ecx
// 00786a1d  89742414             mov dword ptr [esp + 0x14], esi
// 00786a21  e804550c00           call 0x84bf2a
// 00786a26  33db                 xor ebx, ebx
// 00786a28  8dbe98000000         lea edi, [esi + 0x98]
// 00786a2e  c70604db8f00         mov dword ptr [esi], 0x8fdb04
// 00786a34  899c2478010000       mov dword ptr [esp + 0x178], ebx
// 00786a3b  895f04               mov dword ptr [edi + 4], ebx
// 00786a3e  c707e8bb8b00         mov dword ptr [edi], 0x8bbbe8
// 00786a44  8daea0000000         lea ebp, [esi + 0xa0]
// 00786a4a  895d04               mov dword ptr [ebp + 4], ebx
// 00786a4d  c74500e8bb8b00       mov dword ptr [ebp], 0x8bbbe8
// 00786a54  53                   push ebx
// 00786a55  c684247c01000002     mov byte ptr [esp + 0x17c], 2
// 00786a5d  895e60               mov dword ptr [esi + 0x60], ebx
// 00786a60  895e20               mov dword ptr [esi + 0x20], ebx
// 00786a63  895e24               mov dword ptr [esi + 0x24], ebx
// 00786a66  c7462801000000       mov dword ptr [esi + 0x28], 1
// 00786a6d  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00786a70  895e30               mov dword ptr [esi + 0x30], ebx
// 00786a73  ff15dced8900         call dword ptr [0x89eddc]
// 00786a79  99                   cdq 
// 00786a7a  2bc2                 sub eax, edx
// 00786a7c  d1f8                 sar eax, 1
// 00786a7e  6a2c                 push 0x2c
// 00786a80  89463c               mov dword ptr [esi + 0x3c], eax
// 00786a83  8d4664               lea eax, [esi + 0x64]
// 00786a86  53                   push ebx
// 00786a87  50                   push eax
// 00786a88  e8e731f9ff           call 0x719c74
// 00786a8d  83c40c               add esp, 0xc
// 00786a90  e8bb9efdff           call 0x760950
// 00786a95  8bc8                 mov ecx, eax
// 00786a97  e884aefdff           call 0x761920
// 00786a9c  53                   push ebx
// 00786a9d  53                   push ebx
// 00786a9e  53                   push ebx
// 00786a9f  894634               mov dword ptr [esi + 0x34], eax
// 00786aa2  83c8ff               or eax, 0xffffffff
// 00786aa5  53                   push ebx
// 00786aa6  8d4e44               lea ecx, [esi + 0x44]
// 00786aa9  51                   push ecx
// 00786aaa  898690000000         mov dword ptr [esi + 0x90], eax
// 00786ab0  898694000000         mov dword ptr [esi + 0x94], eax
// 00786ab6  c7463801000000       mov dword ptr [esi + 0x38], 1
// 00786abd  c7464002000000       mov dword ptr [esi + 0x40], 2
// 00786ac4  ff15a4ed8900         call dword ptr [0x89eda4]
// 00786aca  6854010000           push 0x154
// 00786acf  83c8ff               or eax, 0xffffffff
// 00786ad2  8d54241c             lea edx, [esp + 0x1c]
// 00786ad6  53                   push ebx
// 00786ad7  52                   push edx
// 00786ad8  894658               mov dword ptr [esi + 0x58], eax
// 00786adb  894654               mov dword ptr [esi + 0x54], eax
// 00786ade  89465c               mov dword ptr [esi + 0x5c], eax
// 00786ae1  e88e31f9ff           call 0x719c74
// 00786ae6  83c40c               add esp, 0xc
// 00786ae9  53                   push ebx
// 00786aea  8d44241c             lea eax, [esp + 0x1c]
// 00786aee  50                   push eax
// 00786aef  6854010000           push 0x154
// 00786af4  6a29                 push 0x29
// 00786af6  c744242854010000     mov dword ptr [esp + 0x28], 0x154
// 00786afe  ff1564ee8900         call dword ptr [0x89ee64]
// 00786b04  8b1dece08900         mov ebx, dword ptr [0x89e0ec]
// 00786b0a  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00786b11  51                   push ecx
// 00786b12  c784240801000090010000 mov dword ptr [esp + 0x108], 0x190
// 00786b1d  ffd3                 call ebx
// 00786b1f  50                   push eax
// 00786b20  8bcf                 mov ecx, edi
// 00786b22  e8db24f9ff           call 0x719002
// 00786b27  8d9424f4000000       lea edx, [esp + 0xf4]
// 00786b2e  52                   push edx
// 00786b2f  c7842408010000bc020000 mov dword ptr [esp + 0x108], 0x2bc
// 00786b3a  ffd3                 call ebx
// 00786b3c  50                   push eax
// 00786b3d  8bcd                 mov ecx, ebp
// 00786b3f  e8be24f9ff           call 0x719002
// 00786b44  8bc6                 mov eax, esi
// 00786b46  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 00786b4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00786b54  59                   pop ecx
// 00786b55  5f                   pop edi
// 00786b56  5e                   pop esi
// 00786b57  5d                   pop ebp
// 00786b58  5b                   pop ebx
// 00786b59  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00786b60  33cc                 xor ecx, esp
// 00786b62  e8133af9ff           call 0x71a57a
// 00786b67  81c468010000         add esp, 0x168
// 00786b6d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolTipContext@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp