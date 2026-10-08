// roc 2007-08 00574f50  unit: RBX::PartInstance  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574f50
//
// 00574f50  64a100000000         mov eax, dword ptr fs:[0]
// 00574f56  6aff                 push -1
// 00574f58  6848117500           push 0x751148
// 00574f5d  50                   push eax
// 00574f5e  64892500000000       mov dword ptr fs:[0], esp
// 00574f65  56                   push esi
// 00574f66  8bf1                 mov esi, ecx
// 00574f68  8b442424             mov eax, dword ptr [esp + 0x24]
// 00574f6c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00574f70  8b542418             mov edx, dword ptr [esp + 0x18]
// 00574f74  50                   push eax
// 00574f75  51                   push ecx
// 00574f76  52                   push edx
// 00574f77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00574f7f  e8cc8bffff           call 0x56db50
// 00574f84  50                   push eax
// 00574f85  8b442424             mov eax, dword ptr [esp + 0x24]
// 00574f89  50                   push eax
// 00574f8a  8bce                 mov ecx, esi
// 00574f8c  e84f240100           call 0x5873e0
// 00574f91  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00574f95  c70664aa7a00         mov dword ptr [esi], 0x7aaa64
// 00574f9b  6a00                 push 0
// 00574f9d  894e18               mov dword ptr [esi + 0x18], ecx
// 00574fa0  e8bdac0b00           call 0x62fc62
// 00574fa5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574fa9  83c404               add esp, 4
// 00574fac  8bc6                 mov eax, esi
// 00574fae  64890d00000000       mov dword ptr fs:[0], ecx
// 00574fb5  5e                   pop esi
// 00574fb6  83c40c               add esp, 0xc
// 00574fb9  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
