// roc 2007-08 0058acd0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058acd0
//
// 0058acd0  64a100000000         mov eax, dword ptr fs:[0]
// 0058acd6  6aff                 push -1
// 0058acd8  6800c67500           push 0x75c600
// 0058acdd  50                   push eax
// 0058acde  64892500000000       mov dword ptr fs:[0], esp
// 0058ace5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ace9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058aced  56                   push esi
// 0058acee  50                   push eax
// 0058acef  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058acf3  8bf1                 mov esi, ecx
// 0058acf5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058acf9  51                   push ecx
// 0058acfa  52                   push edx
// 0058acfb  50                   push eax
// 0058acfc  8d4c2438             lea ecx, [esp + 0x38]
// 0058ad00  51                   push ecx
// 0058ad01  e8cad3ffff           call 0x5880d0
// 0058ad06  8b10                 mov edx, dword ptr [eax]
// 0058ad08  83c40c               add esp, 0xc
// 0058ad0b  8bcc                 mov ecx, esp
// 0058ad0d  c70000000000         mov dword ptr [eax], 0
// 0058ad13  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058ad1b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0058ad1f  8911                 mov dword ptr [ecx], edx
// 0058ad21  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058ad25  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058ad29  50                   push eax
// 0058ad2a  51                   push ecx
// 0058ad2b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0058ad30  e81bfaffff           call 0x58a750
// 0058ad35  50                   push eax
// 0058ad36  8bce                 mov ecx, esi
// 0058ad38  c644242000           mov byte ptr [esp + 0x20], 0
// 0058ad3d  e81e80ebff           call 0x442d60
// 0058ad42  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058ad46  52                   push edx
// 0058ad47  e8164f0a00           call 0x62fc62
// 0058ad4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ad50  83c404               add esp, 4
// 0058ad53  c706f4ee7a00         mov dword ptr [esi], 0x7aeef4
// 0058ad59  8bc6                 mov eax, esi
// 0058ad5b  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ad62  5e                   pop esi
// 0058ad63  83c40c               add esp, 0xc
// 0058ad66  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
