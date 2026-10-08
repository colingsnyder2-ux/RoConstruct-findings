// roc 2009-06 005cb180  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb180
//
// 005cb180  64a100000000         mov eax, dword ptr fs:[0]
// 005cb186  6aff                 push -1
// 005cb188  68c0228600           push 0x8622c0
// 005cb18d  50                   push eax
// 005cb18e  64892500000000       mov dword ptr fs:[0], esp
// 005cb195  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cb199  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cb19d  56                   push esi
// 005cb19e  50                   push eax
// 005cb19f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cb1a3  8bf1                 mov esi, ecx
// 005cb1a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb1a9  51                   push ecx
// 005cb1aa  52                   push edx
// 005cb1ab  50                   push eax
// 005cb1ac  8d4c2438             lea ecx, [esp + 0x38]
// 005cb1b0  51                   push ecx
// 005cb1b1  e82ae5ffff           call 0x5c96e0
// 005cb1b6  8b08                 mov ecx, dword ptr [eax]
// 005cb1b8  83c40c               add esp, 0xc
// 005cb1bb  c70000000000         mov dword ptr [eax], 0
// 005cb1c1  8bc4                 mov eax, esp
// 005cb1c3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cb1cb  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cb1cf  8908                 mov dword ptr [eax], ecx
// 005cb1d1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cb1d5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb1d9  52                   push edx
// 005cb1da  50                   push eax
// 005cb1db  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cb1e0  e86bfcffff           call 0x5cae50
// 005cb1e5  50                   push eax
// 005cb1e6  8bce                 mov ecx, esi
// 005cb1e8  c644242000           mov byte ptr [esp + 0x20], 0
// 005cb1ed  e81e9ef0ff           call 0x4d5010
// 005cb1f2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb1f6  51                   push ecx
// 005cb1f7  e836d81400           call 0x718a32
// 005cb1fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb200  83c404               add esp, 4
// 005cb203  c70658458d00         mov dword ptr [esi], 0x8d4558
// 005cb209  8bc6                 mov eax, esi
// 005cb20b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb212  5e                   pop esi
// 005cb213  83c40c               add esp, 0xc
// 005cb216  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
