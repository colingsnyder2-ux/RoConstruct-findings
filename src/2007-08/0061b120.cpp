// roc 2007-08 0061b120  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b120
//
// 0061b120  64a100000000         mov eax, dword ptr fs:[0]
// 0061b126  6aff                 push -1
// 0061b128  6800c67500           push 0x75c600
// 0061b12d  50                   push eax
// 0061b12e  64892500000000       mov dword ptr fs:[0], esp
// 0061b135  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061b139  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061b13d  56                   push esi
// 0061b13e  50                   push eax
// 0061b13f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061b143  8bf1                 mov esi, ecx
// 0061b145  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061b149  51                   push ecx
// 0061b14a  52                   push edx
// 0061b14b  50                   push eax
// 0061b14c  8d4c2438             lea ecx, [esp + 0x38]
// 0061b150  51                   push ecx
// 0061b151  e85afdffff           call 0x61aeb0
// 0061b156  8b10                 mov edx, dword ptr [eax]
// 0061b158  83c40c               add esp, 0xc
// 0061b15b  8bcc                 mov ecx, esp
// 0061b15d  c70000000000         mov dword ptr [eax], 0
// 0061b163  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061b16b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0061b16f  8911                 mov dword ptr [ecx], edx
// 0061b171  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061b175  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061b179  50                   push eax
// 0061b17a  51                   push ecx
// 0061b17b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0061b180  e82b84fbff           call 0x5d35b0
// 0061b185  50                   push eax
// 0061b186  8bce                 mov ecx, esi
// 0061b188  c644242000           mov byte ptr [esp + 0x20], 0
// 0061b18d  e8ce7ce2ff           call 0x442e60
// 0061b192  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061b196  52                   push edx
// 0061b197  e8c64a0100           call 0x62fc62
// 0061b19c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061b1a0  83c404               add esp, 4
// 0061b1a3  c7064c3b7c00         mov dword ptr [esi], 0x7c3b4c
// 0061b1a9  8bc6                 mov eax, esi
// 0061b1ab  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b1b2  5e                   pop esi
// 0061b1b3  83c40c               add esp, 0xc
// 0061b1b6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
