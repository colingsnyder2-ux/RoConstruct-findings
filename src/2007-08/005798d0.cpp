// roc 2007-08 005798d0  unit: RBX::P8SpecialShape::?$GetSetImpl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005798d0
//
// 005798d0  64a100000000         mov eax, dword ptr fs:[0]
// 005798d6  6aff                 push -1
// 005798d8  6848117500           push 0x751148
// 005798dd  50                   push eax
// 005798de  64892500000000       mov dword ptr fs:[0], esp
// 005798e5  56                   push esi
// 005798e6  8bf1                 mov esi, ecx
// 005798e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005798ec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005798f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005798f4  50                   push eax
// 005798f5  51                   push ecx
// 005798f6  52                   push edx
// 005798f7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005798ff  e88c9e0600           call 0x5e3790
// 00579904  50                   push eax
// 00579905  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579909  50                   push eax
// 0057990a  8bce                 mov ecx, esi
// 0057990c  e8cfda0000           call 0x5873e0
// 00579911  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579915  c706d4b17a00         mov dword ptr [esi], 0x7ab1d4
// 0057991b  6a00                 push 0
// 0057991d  894e18               mov dword ptr [esi + 0x18], ecx
// 00579920  e83d630b00           call 0x62fc62
// 00579925  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00579929  83c404               add esp, 4
// 0057992c  8bc6                 mov eax, esi
// 0057992e  64890d00000000       mov dword ptr fs:[0], ecx
// 00579935  5e                   pop esi
// 00579936  83c40c               add esp, 0xc
// 00579939  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
