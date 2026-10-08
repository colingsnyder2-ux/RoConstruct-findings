// roc 2007-08 00587360  unit: RBX::Reflection::EnumDescriptor  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587360
//
// 00587360  6aff                 push -1
// 00587362  68635f7500           push 0x755f63
// 00587367  64a100000000         mov eax, dword ptr fs:[0]
// 0058736d  50                   push eax
// 0058736e  64892500000000       mov dword ptr fs:[0], esp
// 00587375  51                   push ecx
// 00587376  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058737a  56                   push esi
// 0058737b  8bf1                 mov esi, ecx
// 0058737d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00587381  68d88f7a00           push 0x7a8fd8
// 00587386  50                   push eax
// 00587387  51                   push ecx
// 00587388  8bce                 mov ecx, esi
// 0058738a  89742410             mov dword ptr [esp + 0x10], esi
// 0058738e  e8edf3efff           call 0x486780
// 00587393  33c0                 xor eax, eax
// 00587395  c70680cf7a00         mov dword ptr [esi], 0x7acf80
// 0058739b  89442410             mov dword ptr [esp + 0x10], eax
// 0058739f  894614               mov dword ptr [esi + 0x14], eax
// 005873a2  894618               mov dword ptr [esi + 0x18], eax
// 005873a5  89461c               mov dword ptr [esi + 0x1c], eax
// 005873a8  8d54241c             lea edx, [esp + 0x1c]
// 005873ac  52                   push edx
// 005873ad  c644241401           mov byte ptr [esp + 0x14], 1
// 005873b2  894620               mov dword ptr [esi + 0x20], eax
// 005873b5  894624               mov dword ptr [esi + 0x24], eax
// 005873b8  89742420             mov dword ptr [esp + 0x20], esi
// 005873bc  e8fffdffff           call 0x5871c0
// 005873c1  8bc8                 mov ecx, eax
// 005873c3  e8a8cc0200           call 0x5b4070
// 005873c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005873cc  8bc6                 mov eax, esi
// 005873ce  5e                   pop esi
// 005873cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005873d6  83c410               add esp, 0x10
// 005873d9  c20800               ret 8
// library rbxgs/reflection\reflection_property.cpp (function ??0EnumDescriptor@Reflection@RBX@@IAE@PBDABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
