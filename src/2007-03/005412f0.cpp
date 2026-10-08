// roc 2007-03 005412f0  unit: seg_00540000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005412f0
//
// 005412f0  64a100000000         mov eax, dword ptr fs:[0]
// 005412f6  6aff                 push -1
// 005412f8  6880cb7500           push 0x75cb80
// 005412fd  50                   push eax
// 005412fe  64892500000000       mov dword ptr fs:[0], esp
// 00541305  8b442424             mov eax, dword ptr [esp + 0x24]
// 00541309  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054130d  56                   push esi
// 0054130e  50                   push eax
// 0054130f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00541313  8bf1                 mov esi, ecx
// 00541315  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00541319  51                   push ecx
// 0054131a  52                   push edx
// 0054131b  50                   push eax
// 0054131c  8d4c2438             lea ecx, [esp + 0x38]
// 00541320  51                   push ecx
// 00541321  e84aeaffff           call 0x53fd70
// 00541326  8b10                 mov edx, dword ptr [eax]
// 00541328  83c40c               add esp, 0xc
// 0054132b  8bcc                 mov ecx, esp
// 0054132d  c70000000000         mov dword ptr [eax], 0
// 00541333  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054133b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0054133f  8911                 mov dword ptr [ecx], edx
// 00541341  8b442420             mov eax, dword ptr [esp + 0x20]
// 00541345  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00541349  50                   push eax
// 0054134a  51                   push ecx
// 0054134b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00541350  e80b88edff           call 0x419b60
// 00541355  50                   push eax
// 00541356  8bce                 mov ecx, esi
// 00541358  c644242000           mov byte ptr [esp + 0x20], 0
// 0054135d  e8be15f0ff           call 0x442920
// 00541362  8b542428             mov edx, dword ptr [esp + 0x28]
// 00541366  52                   push edx
// 00541367  e884cd0d00           call 0x61e0f0
// 0054136c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541370  83c404               add esp, 4
// 00541373  c706f8667a00         mov dword ptr [esi], 0x7a66f8
// 00541379  8bc6                 mov eax, esi
// 0054137b  64890d00000000       mov dword ptr fs:[0], ecx
// 00541382  5e                   pop esi
// 00541383  83c40c               add esp, 0xc
// 00541386  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
