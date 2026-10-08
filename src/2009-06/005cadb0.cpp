// roc 2009-06 005cadb0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cadb0
//
// 005cadb0  64a100000000         mov eax, dword ptr fs:[0]
// 005cadb6  6aff                 push -1
// 005cadb8  68c0228600           push 0x8622c0
// 005cadbd  50                   push eax
// 005cadbe  64892500000000       mov dword ptr fs:[0], esp
// 005cadc5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cadc9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cadcd  56                   push esi
// 005cadce  50                   push eax
// 005cadcf  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cadd3  8bf1                 mov esi, ecx
// 005cadd5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cadd9  51                   push ecx
// 005cadda  52                   push edx
// 005caddb  50                   push eax
// 005caddc  8d4c2438             lea ecx, [esp + 0x38]
// 005cade0  51                   push ecx
// 005cade1  e8eae9ffff           call 0x5c97d0
// 005cade6  8b08                 mov ecx, dword ptr [eax]
// 005cade8  83c40c               add esp, 0xc
// 005cadeb  c70000000000         mov dword ptr [eax], 0
// 005cadf1  8bc4                 mov eax, esp
// 005cadf3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cadfb  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cadff  8908                 mov dword ptr [eax], ecx
// 005cae01  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cae05  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cae09  52                   push edx
// 005cae0a  50                   push eax
// 005cae0b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cae10  e88bfeffff           call 0x5caca0
// 005cae15  50                   push eax
// 005cae16  8bce                 mov ecx, esi
// 005cae18  c644242000           mov byte ptr [esp + 0x20], 0
// 005cae1d  e8eea1f0ff           call 0x4d5010
// 005cae22  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cae26  51                   push ecx
// 005cae27  e806dc1400           call 0x718a32
// 005cae2c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cae30  83c404               add esp, 4
// 005cae33  c70688448d00         mov dword ptr [esi], 0x8d4488
// 005cae39  8bc6                 mov eax, esi
// 005cae3b  64890d00000000       mov dword ptr fs:[0], ecx
// 005cae42  5e                   pop esi
// 005cae43  83c40c               add esp, 0xc
// 005cae46  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
