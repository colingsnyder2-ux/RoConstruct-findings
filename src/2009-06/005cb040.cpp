// roc 2009-06 005cb040  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb040
//
// 005cb040  64a100000000         mov eax, dword ptr fs:[0]
// 005cb046  6aff                 push -1
// 005cb048  68c0228600           push 0x8622c0
// 005cb04d  50                   push eax
// 005cb04e  64892500000000       mov dword ptr fs:[0], esp
// 005cb055  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cb059  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cb05d  56                   push esi
// 005cb05e  50                   push eax
// 005cb05f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cb063  8bf1                 mov esi, ecx
// 005cb065  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb069  51                   push ecx
// 005cb06a  52                   push edx
// 005cb06b  50                   push eax
// 005cb06c  8d4c2438             lea ecx, [esp + 0x38]
// 005cb070  51                   push ecx
// 005cb071  e8cae5ffff           call 0x5c9640
// 005cb076  8b08                 mov ecx, dword ptr [eax]
// 005cb078  83c40c               add esp, 0xc
// 005cb07b  c70000000000         mov dword ptr [eax], 0
// 005cb081  8bc4                 mov eax, esp
// 005cb083  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cb08b  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cb08f  8908                 mov dword ptr [eax], ecx
// 005cb091  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cb095  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb099  52                   push edx
// 005cb09a  50                   push eax
// 005cb09b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cb0a0  e8abfdffff           call 0x5cae50
// 005cb0a5  50                   push eax
// 005cb0a6  8bce                 mov ecx, esi
// 005cb0a8  c644242000           mov byte ptr [esp + 0x20], 0
// 005cb0ad  e84e50e7ff           call 0x440100
// 005cb0b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb0b6  51                   push ecx
// 005cb0b7  e876d91400           call 0x718a32
// 005cb0bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb0c0  83c404               add esp, 4
// 005cb0c3  c706f0448d00         mov dword ptr [esi], 0x8d44f0
// 005cb0c9  8bc6                 mov eax, esi
// 005cb0cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb0d2  5e                   pop esi
// 005cb0d3  83c40c               add esp, 0xc
// 005cb0d6  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
