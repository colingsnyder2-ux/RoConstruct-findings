// roc 2007-08 00543cf0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543cf0
//
// 00543cf0  64a100000000         mov eax, dword ptr fs:[0]
// 00543cf6  6aff                 push -1
// 00543cf8  6800c67500           push 0x75c600
// 00543cfd  50                   push eax
// 00543cfe  64892500000000       mov dword ptr fs:[0], esp
// 00543d05  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543d09  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00543d0d  56                   push esi
// 00543d0e  50                   push eax
// 00543d0f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543d13  8bf1                 mov esi, ecx
// 00543d15  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543d19  51                   push ecx
// 00543d1a  52                   push edx
// 00543d1b  50                   push eax
// 00543d1c  8d4c2438             lea ecx, [esp + 0x38]
// 00543d20  51                   push ecx
// 00543d21  e84af1ffff           call 0x542e70
// 00543d26  8b10                 mov edx, dword ptr [eax]
// 00543d28  83c40c               add esp, 0xc
// 00543d2b  8bcc                 mov ecx, esp
// 00543d2d  c70000000000         mov dword ptr [eax], 0
// 00543d33  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00543d3b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00543d3f  8911                 mov dword ptr [ecx], edx
// 00543d41  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543d45  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543d49  50                   push eax
// 00543d4a  51                   push ecx
// 00543d4b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543d50  e82bffffff           call 0x543c80
// 00543d55  50                   push eax
// 00543d56  8bce                 mov ecx, esi
// 00543d58  c644242000           mov byte ptr [esp + 0x20], 0
// 00543d5d  e87e15f0ff           call 0x4452e0
// 00543d62  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543d66  52                   push edx
// 00543d67  e8f6be0e00           call 0x62fc62
// 00543d6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543d70  83c404               add esp, 4
// 00543d73  c70660697a00         mov dword ptr [esi], 0x7a6960
// 00543d79  8bc6                 mov eax, esi
// 00543d7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00543d82  5e                   pop esi
// 00543d83  83c40c               add esp, 0xc
// 00543d86  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
