// roc 2009-06 005cb220  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb220
//
// 005cb220  64a100000000         mov eax, dword ptr fs:[0]
// 005cb226  6aff                 push -1
// 005cb228  68c0228600           push 0x8622c0
// 005cb22d  50                   push eax
// 005cb22e  64892500000000       mov dword ptr fs:[0], esp
// 005cb235  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cb239  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cb23d  56                   push esi
// 005cb23e  50                   push eax
// 005cb23f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cb243  8bf1                 mov esi, ecx
// 005cb245  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb249  51                   push ecx
// 005cb24a  52                   push edx
// 005cb24b  50                   push eax
// 005cb24c  8d4c2438             lea ecx, [esp + 0x38]
// 005cb250  51                   push ecx
// 005cb251  e8dae4ffff           call 0x5c9730
// 005cb256  8b08                 mov ecx, dword ptr [eax]
// 005cb258  83c40c               add esp, 0xc
// 005cb25b  c70000000000         mov dword ptr [eax], 0
// 005cb261  8bc4                 mov eax, esp
// 005cb263  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cb26b  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cb26f  8908                 mov dword ptr [eax], ecx
// 005cb271  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cb275  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb279  52                   push edx
// 005cb27a  50                   push eax
// 005cb27b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cb280  e8cbfbffff           call 0x5cae50
// 005cb285  50                   push eax
// 005cb286  8bce                 mov ecx, esi
// 005cb288  c644242000           mov byte ptr [esp + 0x20], 0
// 005cb28d  e85e2ae7ff           call 0x43dcf0
// 005cb292  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb296  51                   push ecx
// 005cb297  e896d71400           call 0x718a32
// 005cb29c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb2a0  83c404               add esp, 4
// 005cb2a3  c70624458d00         mov dword ptr [esi], 0x8d4524
// 005cb2a9  8bc6                 mov eax, esi
// 005cb2ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb2b2  5e                   pop esi
// 005cb2b3  83c40c               add esp, 0xc
// 005cb2b6  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
