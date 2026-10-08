// roc 2007-08 00540840  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540840
//
// 00540840  64a100000000         mov eax, dword ptr fs:[0]
// 00540846  6aff                 push -1
// 00540848  6800c67500           push 0x75c600
// 0054084d  50                   push eax
// 0054084e  64892500000000       mov dword ptr fs:[0], esp
// 00540855  8b442424             mov eax, dword ptr [esp + 0x24]
// 00540859  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054085d  56                   push esi
// 0054085e  50                   push eax
// 0054085f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00540863  8bf1                 mov esi, ecx
// 00540865  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00540869  51                   push ecx
// 0054086a  52                   push edx
// 0054086b  50                   push eax
// 0054086c  8d4c2438             lea ecx, [esp + 0x38]
// 00540870  51                   push ecx
// 00540871  e8eae5ffff           call 0x53ee60
// 00540876  8b10                 mov edx, dword ptr [eax]
// 00540878  83c40c               add esp, 0xc
// 0054087b  8bcc                 mov ecx, esp
// 0054087d  c70000000000         mov dword ptr [eax], 0
// 00540883  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054088b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0054088f  8911                 mov dword ptr [ecx], edx
// 00540891  8b442420             mov eax, dword ptr [esp + 0x20]
// 00540895  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00540899  50                   push eax
// 0054089a  51                   push ecx
// 0054089b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005408a0  e8eb7dedff           call 0x418690
// 005408a5  50                   push eax
// 005408a6  8bce                 mov ecx, esi
// 005408a8  c644242000           mov byte ptr [esp + 0x20], 0
// 005408ad  e82e25f0ff           call 0x442de0
// 005408b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005408b6  52                   push edx
// 005408b7  e8a6f30e00           call 0x62fc62
// 005408bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005408c0  83c404               add esp, 4
// 005408c3  c706f4657a00         mov dword ptr [esi], 0x7a65f4
// 005408c9  8bc6                 mov eax, esi
// 005408cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005408d2  5e                   pop esi
// 005408d3  83c40c               add esp, 0xc
// 005408d6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
