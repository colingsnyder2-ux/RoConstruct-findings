// roc 2007-08 00543d90  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543d90
//
// 00543d90  64a100000000         mov eax, dword ptr fs:[0]
// 00543d96  6aff                 push -1
// 00543d98  6800c67500           push 0x75c600
// 00543d9d  50                   push eax
// 00543d9e  64892500000000       mov dword ptr fs:[0], esp
// 00543da5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543da9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00543dad  56                   push esi
// 00543dae  50                   push eax
// 00543daf  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543db3  8bf1                 mov esi, ecx
// 00543db5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543db9  51                   push ecx
// 00543dba  52                   push edx
// 00543dbb  50                   push eax
// 00543dbc  8d4c2438             lea ecx, [esp + 0x38]
// 00543dc0  51                   push ecx
// 00543dc1  e8faf0ffff           call 0x542ec0
// 00543dc6  8b10                 mov edx, dword ptr [eax]
// 00543dc8  83c40c               add esp, 0xc
// 00543dcb  8bcc                 mov ecx, esp
// 00543dcd  c70000000000         mov dword ptr [eax], 0
// 00543dd3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00543ddb  8964242c             mov dword ptr [esp + 0x2c], esp
// 00543ddf  8911                 mov dword ptr [ecx], edx
// 00543de1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00543de5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543de9  50                   push eax
// 00543dea  51                   push ecx
// 00543deb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543df0  e88bfeffff           call 0x543c80
// 00543df5  50                   push eax
// 00543df6  8bce                 mov ecx, esi
// 00543df8  c644242000           mov byte ptr [esp + 0x20], 0
// 00543dfd  e85ef0efff           call 0x442e60
// 00543e02  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543e06  52                   push edx
// 00543e07  e856be0e00           call 0x62fc62
// 00543e0c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543e10  83c404               add esp, 4
// 00543e13  c70688697a00         mov dword ptr [esi], 0x7a6988
// 00543e19  8bc6                 mov eax, esi
// 00543e1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00543e22  5e                   pop esi
// 00543e23  83c40c               add esp, 0xc
// 00543e26  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
