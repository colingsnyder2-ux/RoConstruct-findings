// roc 2009-06 004d7600  unit: RBX::VHint::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d7600
//
// 004d7600  64a100000000         mov eax, dword ptr fs:[0]
// 004d7606  6aff                 push -1
// 004d7608  68c0228600           push 0x8622c0
// 004d760d  50                   push eax
// 004d760e  64892500000000       mov dword ptr fs:[0], esp
// 004d7615  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d7619  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d761d  56                   push esi
// 004d761e  50                   push eax
// 004d761f  8b442420             mov eax, dword ptr [esp + 0x20]
// 004d7623  8bf1                 mov esi, ecx
// 004d7625  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d7629  51                   push ecx
// 004d762a  52                   push edx
// 004d762b  50                   push eax
// 004d762c  8d4c2438             lea ecx, [esp + 0x38]
// 004d7630  51                   push ecx
// 004d7631  e80af2ffff           call 0x4d6840
// 004d7636  8b08                 mov ecx, dword ptr [eax]
// 004d7638  83c40c               add esp, 0xc
// 004d763b  c70000000000         mov dword ptr [eax], 0
// 004d7641  8bc4                 mov eax, esp
// 004d7643  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d764b  8964242c             mov dword ptr [esp + 0x2c], esp
// 004d764f  8908                 mov dword ptr [eax], ecx
// 004d7651  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d7655  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d7659  52                   push edx
// 004d765a  50                   push eax
// 004d765b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004d7660  e86b87ffff           call 0x4cfdd0
// 004d7665  50                   push eax
// 004d7666  8bce                 mov ecx, esi
// 004d7668  c644242000           mov byte ptr [esp + 0x20], 0
// 004d766d  e87e66f6ff           call 0x43dcf0
// 004d7672  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d7676  51                   push ecx
// 004d7677  e8b6132400           call 0x718a32
// 004d767c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7680  83c404               add esp, 4
// 004d7683  c70694618c00         mov dword ptr [esi], 0x8c6194
// 004d7689  8bc6                 mov eax, esi
// 004d768b  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7692  5e                   pop esi
// 004d7693  83c40c               add esp, 0xc
// 004d7696  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
