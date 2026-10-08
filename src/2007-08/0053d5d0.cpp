// roc 2007-08 0053d5d0  unit: RBX::VLocalScript::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d5d0
//
// 0053d5d0  64a100000000         mov eax, dword ptr fs:[0]
// 0053d5d6  6aff                 push -1
// 0053d5d8  6848117500           push 0x751148
// 0053d5dd  50                   push eax
// 0053d5de  64892500000000       mov dword ptr fs:[0], esp
// 0053d5e5  56                   push esi
// 0053d5e6  8bf1                 mov esi, ecx
// 0053d5e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053d5ec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053d5f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053d5f4  50                   push eax
// 0053d5f5  51                   push ecx
// 0053d5f6  52                   push edx
// 0053d5f7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053d5ff  e88c030300           call 0x56d990
// 0053d604  50                   push eax
// 0053d605  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053d609  50                   push eax
// 0053d60a  8bce                 mov ecx, esi
// 0053d60c  e8cf9d0400           call 0x5873e0
// 0053d611  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053d615  c706f45f7a00         mov dword ptr [esi], 0x7a5ff4
// 0053d61b  6a00                 push 0
// 0053d61d  894e18               mov dword ptr [esi + 0x18], ecx
// 0053d620  e83d260f00           call 0x62fc62
// 0053d625  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053d629  83c404               add esp, 4
// 0053d62c  8bc6                 mov eax, esi
// 0053d62e  64890d00000000       mov dword ptr fs:[0], ecx
// 0053d635  5e                   pop esi
// 0053d636  83c40c               add esp, 0xc
// 0053d639  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
