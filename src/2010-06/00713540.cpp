// roc 2010-06 00713540  unit: RBX::BallBallContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713540
//
// 00713540  6aff                 push -1
// 00713542  6808809a00           push 0x9a8008
// 00713547  64a100000000         mov eax, dword ptr fs:[0]
// 0071354d  50                   push eax
// 0071354e  64892500000000       mov dword ptr fs:[0], esp
// 00713555  83ec2c               sub esp, 0x2c
// 00713558  53                   push ebx
// 00713559  56                   push esi
// 0071355a  8bf1                 mov esi, ecx
// 0071355c  8d442444             lea eax, [esp + 0x44]
// 00713560  50                   push eax
// 00713561  8d4c2448             lea ecx, [esp + 0x48]
// 00713565  51                   push ecx
// 00713566  8d4c241c             lea ecx, [esp + 0x1c]
// 0071356a  e851c00400           call 0x75f5c0
// 0071356f  8d542444             lea edx, [esp + 0x44]
// 00713573  52                   push edx
// 00713574  8d44240c             lea eax, [esp + 0xc]
// 00713578  50                   push eax
// 00713579  8d4c241c             lea ecx, [esp + 0x1c]
// 0071357d  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00713585  e8562dd2ff           call 0x4362e0
// 0071358a  d9442448             fld dword ptr [esp + 0x48]
// 0071358e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00713592  51                   push ecx
// 00713593  d91c24               fstp dword ptr [esp]
// 00713596  8d4c2418             lea ecx, [esp + 0x18]
// 0071359a  51                   push ecx
// 0071359b  52                   push edx
// 0071359c  8bce                 mov ecx, esi
// 0071359e  e86df8ffff           call 0x712e10
// 007135a3  8d4c2414             lea ecx, [esp + 0x14]
// 007135a7  8ad8                 mov bl, al
// 007135a9  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007135b1  e8eaeeceff           call 0x4024a0
// 007135b6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007135ba  5e                   pop esi
// 007135bb  8ac3                 mov al, bl
// 007135bd  5b                   pop ebx
// 007135be  64890d00000000       mov dword ptr fs:[0], ecx
// 007135c5  83c438               add esp, 0x38
// 007135c8  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
