// roc 2007-08 0061af60  unit: RBX::P8Camera::?$GetSetImpl  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061af60
//
// 0061af60  64a100000000         mov eax, dword ptr fs:[0]
// 0061af66  6aff                 push -1
// 0061af68  6800c67500           push 0x75c600
// 0061af6d  50                   push eax
// 0061af6e  64892500000000       mov dword ptr fs:[0], esp
// 0061af75  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061af79  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061af7d  56                   push esi
// 0061af7e  50                   push eax
// 0061af7f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061af83  8bf1                 mov esi, ecx
// 0061af85  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061af89  51                   push ecx
// 0061af8a  52                   push edx
// 0061af8b  50                   push eax
// 0061af8c  8d4c2438             lea ecx, [esp + 0x38]
// 0061af90  51                   push ecx
// 0061af91  e87afeffff           call 0x61ae10
// 0061af96  8b10                 mov edx, dword ptr [eax]
// 0061af98  83c40c               add esp, 0xc
// 0061af9b  8bcc                 mov ecx, esp
// 0061af9d  c70000000000         mov dword ptr [eax], 0
// 0061afa3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061afab  8964242c             mov dword ptr [esp + 0x2c], esp
// 0061afaf  8911                 mov dword ptr [ecx], edx
// 0061afb1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061afb5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061afb9  50                   push eax
// 0061afba  51                   push ecx
// 0061afbb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0061afc0  e8eb85fbff           call 0x5d35b0
// 0061afc5  50                   push eax
// 0061afc6  8bce                 mov ecx, esi
// 0061afc8  c644242000           mov byte ptr [esp + 0x20], 0
// 0061afcd  e8fe5ef1ff           call 0x530ed0
// 0061afd2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061afd6  52                   push edx
// 0061afd7  e8864c0100           call 0x62fc62
// 0061afdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061afe0  83c404               add esp, 4
// 0061afe3  c706ec3a7c00         mov dword ptr [esi], 0x7c3aec
// 0061afe9  8bc6                 mov eax, esi
// 0061afeb  64890d00000000       mov dword ptr fs:[0], ecx
// 0061aff2  5e                   pop esi
// 0061aff3  83c40c               add esp, 0xc
// 0061aff6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
