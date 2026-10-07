// roc 2008-06 0048b180  unit: RBX::Network::P8Player::?$GetSetImpl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b180
//
// 0048b180  64a100000000         mov eax, dword ptr fs:[0]
// 0048b186  6aff                 push -1
// 0048b188  68483a7d00           push 0x7d3a48
// 0048b18d  50                   push eax
// 0048b18e  64892500000000       mov dword ptr fs:[0], esp
// 0048b195  56                   push esi
// 0048b196  8bf1                 mov esi, ecx
// 0048b198  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048b19c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048b1a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048b1a4  50                   push eax
// 0048b1a5  51                   push ecx
// 0048b1a6  52                   push edx
// 0048b1a7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048b1af  e86c1f0e00           call 0x56d120
// 0048b1b4  50                   push eax
// 0048b1b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048b1b9  50                   push eax
// 0048b1ba  8bce                 mov ecx, esi
// 0048b1bc  e88f140e00           call 0x56c650
// 0048b1c1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048b1c5  c70690168200         mov dword ptr [esi], 0x821690
// 0048b1cb  894e18               mov dword ptr [esi + 0x18], ecx
// 0048b1ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b1d2  8bc6                 mov eax, esi
// 0048b1d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b1db  5e                   pop esi
// 0048b1dc  83c40c               add esp, 0xc
// 0048b1df  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
