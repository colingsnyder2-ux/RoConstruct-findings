// roc 2008-06 00445610  unit: G3D::VVector2int16::?$holder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445610
//
// 00445610  64a100000000         mov eax, dword ptr fs:[0]
// 00445616  6aff                 push -1
// 00445618  68483a7d00           push 0x7d3a48
// 0044561d  50                   push eax
// 0044561e  64892500000000       mov dword ptr fs:[0], esp
// 00445625  56                   push esi
// 00445626  8bf1                 mov esi, ecx
// 00445628  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044562c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00445630  8b542418             mov edx, dword ptr [esp + 0x18]
// 00445634  50                   push eax
// 00445635  51                   push ecx
// 00445636  52                   push edx
// 00445637  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044563f  e85c761200           call 0x56cca0
// 00445644  50                   push eax
// 00445645  8b442424             mov eax, dword ptr [esp + 0x24]
// 00445649  50                   push eax
// 0044564a  8bce                 mov ecx, esi
// 0044564c  e8ff6f1200           call 0x56c650
// 00445651  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00445655  c706d45d8100         mov dword ptr [esi], 0x815dd4
// 0044565b  894e18               mov dword ptr [esi + 0x18], ecx
// 0044565e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00445662  8bc6                 mov eax, esi
// 00445664  64890d00000000       mov dword ptr fs:[0], ecx
// 0044566b  5e                   pop esi
// 0044566c  83c40c               add esp, 0xc
// 0044566f  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
