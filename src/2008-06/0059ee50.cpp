// roc 2008-06 0059ee50  unit: RBX::P8SpecialShape::?$GetSetImpl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ee50
//
// 0059ee50  64a100000000         mov eax, dword ptr fs:[0]
// 0059ee56  6aff                 push -1
// 0059ee58  68483a7d00           push 0x7d3a48
// 0059ee5d  50                   push eax
// 0059ee5e  64892500000000       mov dword ptr fs:[0], esp
// 0059ee65  56                   push esi
// 0059ee66  8bf1                 mov esi, ecx
// 0059ee68  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059ee6c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059ee70  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059ee74  50                   push eax
// 0059ee75  51                   push ecx
// 0059ee76  52                   push edx
// 0059ee77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059ee7f  e80c660700           call 0x615490
// 0059ee84  50                   push eax
// 0059ee85  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059ee89  50                   push eax
// 0059ee8a  8bce                 mov ecx, esi
// 0059ee8c  e8bfd7fcff           call 0x56c650
// 0059ee91  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059ee95  c70618338300         mov dword ptr [esi], 0x833318
// 0059ee9b  894e18               mov dword ptr [esi + 0x18], ecx
// 0059ee9e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059eea2  8bc6                 mov eax, esi
// 0059eea4  64890d00000000       mov dword ptr fs:[0], ecx
// 0059eeab  5e                   pop esi
// 0059eeac  83c40c               add esp, 0xc
// 0059eeaf  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
