// roc 2007-08 00530ed0  unit: RBX::ModelInstance  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530ed0
//
// 00530ed0  64a100000000         mov eax, dword ptr fs:[0]
// 00530ed6  6aff                 push -1
// 00530ed8  6848117500           push 0x751148
// 00530edd  50                   push eax
// 00530ede  64892500000000       mov dword ptr fs:[0], esp
// 00530ee5  56                   push esi
// 00530ee6  8bf1                 mov esi, ecx
// 00530ee8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00530eec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00530ef0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00530ef4  50                   push eax
// 00530ef5  51                   push ecx
// 00530ef6  52                   push edx
// 00530ef7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00530eff  e8ac330400           call 0x5742b0
// 00530f04  50                   push eax
// 00530f05  8b442424             mov eax, dword ptr [esp + 0x24]
// 00530f09  50                   push eax
// 00530f0a  8bce                 mov ecx, esi
// 00530f0c  e8cf640500           call 0x5873e0
// 00530f11  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00530f15  c7063c4f7a00         mov dword ptr [esi], 0x7a4f3c
// 00530f1b  6a00                 push 0
// 00530f1d  894e18               mov dword ptr [esi + 0x18], ecx
// 00530f20  e83ded0f00           call 0x62fc62
// 00530f25  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530f29  83c404               add esp, 4
// 00530f2c  8bc6                 mov eax, esi
// 00530f2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00530f35  5e                   pop esi
// 00530f36  83c40c               add esp, 0xc
// 00530f39  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
