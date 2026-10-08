// roc 2007-08 00543e30  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543e30
//
// 00543e30  64a100000000         mov eax, dword ptr fs:[0]
// 00543e36  6aff                 push -1
// 00543e38  6800c67500           push 0x75c600
// 00543e3d  50                   push eax
// 00543e3e  64892500000000       mov dword ptr fs:[0], esp
// 00543e45  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543e49  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00543e4d  56                   push esi
// 00543e4e  50                   push eax
// 00543e4f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543e53  8bf1                 mov esi, ecx
// 00543e55  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543e59  51                   push ecx
// 00543e5a  52                   push edx
// 00543e5b  50                   push eax
// 00543e5c  8d4c2438             lea ecx, [esp + 0x38]
// 00543e60  51                   push ecx
// 00543e61  e8aaf0ffff           call 0x542f10
// 00543e66  8b10                 mov edx, dword ptr [eax]
// 00543e68  83c40c               add esp, 0xc
// 00543e6b  8bcc                 mov ecx, esp
// 00543e6d  c70000000000         mov dword ptr [eax], 0
// 00543e73  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00543e7b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00543e7f  8911                 mov dword ptr [ecx], edx
// 00543e81  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543e85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543e89  50                   push eax
// 00543e8a  51                   push ecx
// 00543e8b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543e90  e8ebfdffff           call 0x543c80
// 00543e95  50                   push eax
// 00543e96  8bce                 mov ecx, esi
// 00543e98  c644242000           mov byte ptr [esp + 0x20], 0
// 00543e9d  e83eefefff           call 0x442de0
// 00543ea2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543ea6  52                   push edx
// 00543ea7  e8b6bd0e00           call 0x62fc62
// 00543eac  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543eb0  83c404               add esp, 4
// 00543eb3  c706b0697a00         mov dword ptr [esi], 0x7a69b0
// 00543eb9  8bc6                 mov eax, esi
// 00543ebb  64890d00000000       mov dword ptr fs:[0], ecx
// 00543ec2  5e                   pop esi
// 00543ec3  83c40c               add esp, 0xc
// 00543ec6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
