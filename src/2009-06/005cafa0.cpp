// roc 2009-06 005cafa0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cafa0
//
// 005cafa0  64a100000000         mov eax, dword ptr fs:[0]
// 005cafa6  6aff                 push -1
// 005cafa8  68c0228600           push 0x8622c0
// 005cafad  50                   push eax
// 005cafae  64892500000000       mov dword ptr fs:[0], esp
// 005cafb5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cafb9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cafbd  56                   push esi
// 005cafbe  50                   push eax
// 005cafbf  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cafc3  8bf1                 mov esi, ecx
// 005cafc5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cafc9  51                   push ecx
// 005cafca  52                   push edx
// 005cafcb  50                   push eax
// 005cafcc  8d4c2438             lea ecx, [esp + 0x38]
// 005cafd0  51                   push ecx
// 005cafd1  e81ae6ffff           call 0x5c95f0
// 005cafd6  8b08                 mov ecx, dword ptr [eax]
// 005cafd8  83c40c               add esp, 0xc
// 005cafdb  c70000000000         mov dword ptr [eax], 0
// 005cafe1  8bc4                 mov eax, esp
// 005cafe3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cafeb  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cafef  8908                 mov dword ptr [eax], ecx
// 005caff1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005caff5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005caff9  52                   push edx
// 005caffa  50                   push eax
// 005caffb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cb000  e84bfeffff           call 0x5cae50
// 005cb005  50                   push eax
// 005cb006  8bce                 mov ecx, esi
// 005cb008  c644242000           mov byte ptr [esp + 0x20], 0
// 005cb00d  e85e2ce7ff           call 0x43dc70
// 005cb012  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb016  51                   push ecx
// 005cb017  e816da1400           call 0x718a32
// 005cb01c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb020  83c404               add esp, 4
// 005cb023  c706bc448d00         mov dword ptr [esi], 0x8d44bc
// 005cb029  8bc6                 mov eax, esi
// 005cb02b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb032  5e                   pop esi
// 005cb033  83c40c               add esp, 0xc
// 005cb036  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
