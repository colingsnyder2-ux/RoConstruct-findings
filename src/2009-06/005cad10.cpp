// roc 2009-06 005cad10  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cad10
//
// 005cad10  64a100000000         mov eax, dword ptr fs:[0]
// 005cad16  6aff                 push -1
// 005cad18  68c0228600           push 0x8622c0
// 005cad1d  50                   push eax
// 005cad1e  64892500000000       mov dword ptr fs:[0], esp
// 005cad25  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cad29  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cad2d  56                   push esi
// 005cad2e  50                   push eax
// 005cad2f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cad33  8bf1                 mov esi, ecx
// 005cad35  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cad39  51                   push ecx
// 005cad3a  52                   push edx
// 005cad3b  50                   push eax
// 005cad3c  8d4c2438             lea ecx, [esp + 0x38]
// 005cad40  51                   push ecx
// 005cad41  e83aeaffff           call 0x5c9780
// 005cad46  8b08                 mov ecx, dword ptr [eax]
// 005cad48  83c40c               add esp, 0xc
// 005cad4b  c70000000000         mov dword ptr [eax], 0
// 005cad51  8bc4                 mov eax, esp
// 005cad53  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cad5b  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cad5f  8908                 mov dword ptr [eax], ecx
// 005cad61  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cad65  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cad69  52                   push edx
// 005cad6a  50                   push eax
// 005cad6b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cad70  e82bffffff           call 0x5caca0
// 005cad75  50                   push eax
// 005cad76  8bce                 mov ecx, esi
// 005cad78  c644242000           mov byte ptr [esp + 0x20], 0
// 005cad7d  e86e2fe7ff           call 0x43dcf0
// 005cad82  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cad86  51                   push ecx
// 005cad87  e8a6dc1400           call 0x718a32
// 005cad8c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cad90  83c404               add esp, 4
// 005cad93  c70654448d00         mov dword ptr [esi], 0x8d4454
// 005cad99  8bc6                 mov eax, esi
// 005cad9b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cada2  5e                   pop esi
// 005cada3  83c40c               add esp, 0xc
// 005cada6  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
