// roc 2008-06 00563c60  unit: RBX::VDebugSettings::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563c60
//
// 00563c60  64a100000000         mov eax, dword ptr fs:[0]
// 00563c66  6aff                 push -1
// 00563c68  68483a7d00           push 0x7d3a48
// 00563c6d  50                   push eax
// 00563c6e  64892500000000       mov dword ptr fs:[0], esp
// 00563c75  56                   push esi
// 00563c76  8bf1                 mov esi, ecx
// 00563c78  8b442424             mov eax, dword ptr [esp + 0x24]
// 00563c7c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00563c80  8b542418             mov edx, dword ptr [esp + 0x18]
// 00563c84  50                   push eax
// 00563c85  51                   push ecx
// 00563c86  52                   push edx
// 00563c87  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00563c8f  e87c900000           call 0x56cd10
// 00563c94  50                   push eax
// 00563c95  8b442424             mov eax, dword ptr [esp + 0x24]
// 00563c99  50                   push eax
// 00563c9a  8bce                 mov ecx, esi
// 00563c9c  e8af890000           call 0x56c650
// 00563ca1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00563ca5  c706e8e18200         mov dword ptr [esi], 0x82e1e8
// 00563cab  894e18               mov dword ptr [esi + 0x18], ecx
// 00563cae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00563cb2  8bc6                 mov eax, esi
// 00563cb4  64890d00000000       mov dword ptr fs:[0], ecx
// 00563cbb  5e                   pop esi
// 00563cbc  83c40c               add esp, 0xc
// 00563cbf  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
