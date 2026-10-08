// roc 2007-03 00534bf0  unit: seg_00530000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534bf0
//
// 00534bf0  64a100000000         mov eax, dword ptr fs:[0]
// 00534bf6  6aff                 push -1
// 00534bf8  6808647500           push 0x756408
// 00534bfd  50                   push eax
// 00534bfe  64892500000000       mov dword ptr fs:[0], esp
// 00534c05  56                   push esi
// 00534c06  8bf1                 mov esi, ecx
// 00534c08  8b442424             mov eax, dword ptr [esp + 0x24]
// 00534c0c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00534c10  8b542418             mov edx, dword ptr [esp + 0x18]
// 00534c14  50                   push eax
// 00534c15  51                   push ecx
// 00534c16  52                   push edx
// 00534c17  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00534c1f  e8dce00300           call 0x572d00
// 00534c24  50                   push eax
// 00534c25  8b442424             mov eax, dword ptr [esp + 0x24]
// 00534c29  50                   push eax
// 00534c2a  8bce                 mov ecx, esi
// 00534c2c  e89fed0400           call 0x5839d0
// 00534c31  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00534c35  c70600537a00         mov dword ptr [esi], 0x7a5300
// 00534c3b  6a00                 push 0
// 00534c3d  894e18               mov dword ptr [esi + 0x18], ecx
// 00534c40  e8ab940e00           call 0x61e0f0
// 00534c45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534c49  83c404               add esp, 4
// 00534c4c  8bc6                 mov eax, esi
// 00534c4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00534c55  5e                   pop esi
// 00534c56  83c40c               add esp, 0xc
// 00534c59  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
