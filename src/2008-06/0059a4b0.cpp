// roc 2008-06 0059a4b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a4b0
//
// 0059a4b0  64a100000000         mov eax, dword ptr fs:[0]
// 0059a4b6  6aff                 push -1
// 0059a4b8  68483a7d00           push 0x7d3a48
// 0059a4bd  50                   push eax
// 0059a4be  64892500000000       mov dword ptr fs:[0], esp
// 0059a4c5  56                   push esi
// 0059a4c6  8bf1                 mov esi, ecx
// 0059a4c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059a4cc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a4d0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a4d4  50                   push eax
// 0059a4d5  51                   push ecx
// 0059a4d6  52                   push edx
// 0059a4d7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059a4df  e87c29fdff           call 0x56ce60
// 0059a4e4  50                   push eax
// 0059a4e5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059a4e9  50                   push eax
// 0059a4ea  8bce                 mov ecx, esi
// 0059a4ec  e85f21fdff           call 0x56c650
// 0059a4f1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a4f5  c706282c8300         mov dword ptr [esi], 0x832c28
// 0059a4fb  894e18               mov dword ptr [esi + 0x18], ecx
// 0059a4fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059a502  8bc6                 mov eax, esi
// 0059a504  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a50b  5e                   pop esi
// 0059a50c  83c40c               add esp, 0xc
// 0059a50f  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
