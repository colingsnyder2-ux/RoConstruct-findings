// roc 2008-06 0060dcd0  unit: RBX::BlockBlockContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dcd0
//
// 0060dcd0  6aff                 push -1
// 0060dcd2  68988c7d00           push 0x7d8c98
// 0060dcd7  64a100000000         mov eax, dword ptr fs:[0]
// 0060dcdd  50                   push eax
// 0060dcde  64892500000000       mov dword ptr fs:[0], esp
// 0060dce5  83ec2c               sub esp, 0x2c
// 0060dce8  53                   push ebx
// 0060dce9  56                   push esi
// 0060dcea  8bf1                 mov esi, ecx
// 0060dcec  8d442444             lea eax, [esp + 0x44]
// 0060dcf0  50                   push eax
// 0060dcf1  8d4c2448             lea ecx, [esp + 0x48]
// 0060dcf5  51                   push ecx
// 0060dcf6  8d4c241c             lea ecx, [esp + 0x1c]
// 0060dcfa  e8a1d50300           call 0x64b2a0
// 0060dcff  8d542444             lea edx, [esp + 0x44]
// 0060dd03  52                   push edx
// 0060dd04  8d44240c             lea eax, [esp + 0xc]
// 0060dd08  50                   push eax
// 0060dd09  8d4c241c             lea ecx, [esp + 0x1c]
// 0060dd0d  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0060dd15  e826affdff           call 0x5e8c40
// 0060dd1a  d9442448             fld dword ptr [esp + 0x48]
// 0060dd1e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0060dd22  51                   push ecx
// 0060dd23  d91c24               fstp dword ptr [esp]
// 0060dd26  8d4c2418             lea ecx, [esp + 0x18]
// 0060dd2a  51                   push ecx
// 0060dd2b  52                   push edx
// 0060dd2c  8bce                 mov ecx, esi
// 0060dd2e  e8fdf8ffff           call 0x60d630
// 0060dd33  8d4c2414             lea ecx, [esp + 0x14]
// 0060dd37  8ad8                 mov bl, al
// 0060dd39  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0060dd41  e8ead40300           call 0x64b230
// 0060dd46  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060dd4a  5e                   pop esi
// 0060dd4b  8ac3                 mov al, bl
// 0060dd4d  5b                   pop ebx
// 0060dd4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0060dd55  83c438               add esp, 0x38
// 0060dd58  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
