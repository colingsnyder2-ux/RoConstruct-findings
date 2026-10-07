// roc 2008-06 004432a0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004432a0
//
// 004432a0  64a100000000         mov eax, dword ptr fs:[0]
// 004432a6  6aff                 push -1
// 004432a8  68483a7d00           push 0x7d3a48
// 004432ad  50                   push eax
// 004432ae  64892500000000       mov dword ptr fs:[0], esp
// 004432b5  56                   push esi
// 004432b6  8bf1                 mov esi, ecx
// 004432b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004432bc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004432c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 004432c4  50                   push eax
// 004432c5  51                   push ecx
// 004432c6  52                   push edx
// 004432c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004432cf  e8ec981200           call 0x56cbc0
// 004432d4  50                   push eax
// 004432d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 004432d9  50                   push eax
// 004432da  8bce                 mov ecx, esi
// 004432dc  e86f931200           call 0x56c650
// 004432e1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004432e5  c70608598100         mov dword ptr [esi], 0x815908
// 004432eb  894e18               mov dword ptr [esi + 0x18], ecx
// 004432ee  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004432f2  8bc6                 mov eax, esi
// 004432f4  64890d00000000       mov dword ptr fs:[0], ecx
// 004432fb  5e                   pop esi
// 004432fc  83c40c               add esp, 0xc
// 004432ff  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
