// roc 2008-06 0040a290  unit: VAuthoringSettings::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a290
//
// 0040a290  64a100000000         mov eax, dword ptr fs:[0]
// 0040a296  6aff                 push -1
// 0040a298  68483a7d00           push 0x7d3a48
// 0040a29d  50                   push eax
// 0040a29e  64892500000000       mov dword ptr fs:[0], esp
// 0040a2a5  56                   push esi
// 0040a2a6  8bf1                 mov esi, ecx
// 0040a2a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a2ac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0040a2b0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0040a2b4  50                   push eax
// 0040a2b5  51                   push ecx
// 0040a2b6  52                   push edx
// 0040a2b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040a2bf  e86c291600           call 0x56cc30
// 0040a2c4  50                   push eax
// 0040a2c5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a2c9  50                   push eax
// 0040a2ca  8bce                 mov ecx, esi
// 0040a2cc  e87f231600           call 0x56c650
// 0040a2d1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0040a2d5  c706e8b98000         mov dword ptr [esi], 0x80b9e8
// 0040a2db  894e18               mov dword ptr [esi + 0x18], ecx
// 0040a2de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040a2e2  8bc6                 mov eax, esi
// 0040a2e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a2eb  5e                   pop esi
// 0040a2ec  83c40c               add esp, 0xc
// 0040a2ef  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
