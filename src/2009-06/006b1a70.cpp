// roc 2009-06 006b1a70  unit: RBX::BlockBlockContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b1a70
//
// 006b1a70  6aff                 push -1
// 006b1a72  68e8038700           push 0x8703e8
// 006b1a77  64a100000000         mov eax, dword ptr fs:[0]
// 006b1a7d  50                   push eax
// 006b1a7e  64892500000000       mov dword ptr fs:[0], esp
// 006b1a85  83ec2c               sub esp, 0x2c
// 006b1a88  53                   push ebx
// 006b1a89  56                   push esi
// 006b1a8a  8bf1                 mov esi, ecx
// 006b1a8c  8d442444             lea eax, [esp + 0x44]
// 006b1a90  50                   push eax
// 006b1a91  8d4c2448             lea ecx, [esp + 0x48]
// 006b1a95  51                   push ecx
// 006b1a96  8d4c241c             lea ecx, [esp + 0x1c]
// 006b1a9a  e8a1d7fcff           call 0x67f240
// 006b1a9f  8d542444             lea edx, [esp + 0x44]
// 006b1aa3  52                   push edx
// 006b1aa4  8d44240c             lea eax, [esp + 0xc]
// 006b1aa8  50                   push eax
// 006b1aa9  8d4c241c             lea ecx, [esp + 0x1c]
// 006b1aad  c744244400000000     mov dword ptr [esp + 0x44], 0
// 006b1ab5  e87656e3ff           call 0x4e7130
// 006b1aba  d9442448             fld dword ptr [esp + 0x48]
// 006b1abe  8b542444             mov edx, dword ptr [esp + 0x44]
// 006b1ac2  51                   push ecx
// 006b1ac3  d91c24               fstp dword ptr [esp]
// 006b1ac6  8d4c2418             lea ecx, [esp + 0x18]
// 006b1aca  51                   push ecx
// 006b1acb  52                   push edx
// 006b1acc  8bce                 mov ecx, esi
// 006b1ace  e89dfbffff           call 0x6b1670
// 006b1ad3  8d4c2414             lea ecx, [esp + 0x14]
// 006b1ad7  8ad8                 mov bl, al
// 006b1ad9  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 006b1ae1  e8ca6d0000           call 0x6b88b0
// 006b1ae6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b1aea  5e                   pop esi
// 006b1aeb  8ac3                 mov al, bl
// 006b1aed  5b                   pop ebx
// 006b1aee  64890d00000000       mov dword ptr fs:[0], ecx
// 006b1af5  83c438               add esp, 0x38
// 006b1af8  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
