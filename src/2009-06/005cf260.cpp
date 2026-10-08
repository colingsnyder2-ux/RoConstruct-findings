// roc 2009-06 005cf260  unit: VAuthoringSettings::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf260
//
// 005cf260  64a100000000         mov eax, dword ptr fs:[0]
// 005cf266  6aff                 push -1
// 005cf268  68c0228600           push 0x8622c0
// 005cf26d  50                   push eax
// 005cf26e  64892500000000       mov dword ptr fs:[0], esp
// 005cf275  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cf279  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005cf27d  56                   push esi
// 005cf27e  50                   push eax
// 005cf27f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cf283  8bf1                 mov esi, ecx
// 005cf285  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cf289  51                   push ecx
// 005cf28a  52                   push edx
// 005cf28b  50                   push eax
// 005cf28c  8d4c2438             lea ecx, [esp + 0x38]
// 005cf290  51                   push ecx
// 005cf291  e80af0ffff           call 0x5ce2a0
// 005cf296  8b08                 mov ecx, dword ptr [eax]
// 005cf298  83c40c               add esp, 0xc
// 005cf29b  c70000000000         mov dword ptr [eax], 0
// 005cf2a1  8bc4                 mov eax, esp
// 005cf2a3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005cf2ab  8964242c             mov dword ptr [esp + 0x2c], esp
// 005cf2af  8908                 mov dword ptr [eax], ecx
// 005cf2b1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cf2b5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cf2b9  52                   push edx
// 005cf2ba  50                   push eax
// 005cf2bb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005cf2c0  e82bb2e3ff           call 0x40a4f0
// 005cf2c5  50                   push eax
// 005cf2c6  8bce                 mov ecx, esi
// 005cf2c8  c644242000           mov byte ptr [esp + 0x20], 0
// 005cf2cd  e89ee9e6ff           call 0x43dc70
// 005cf2d2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cf2d6  51                   push ecx
// 005cf2d7  e856971400           call 0x718a32
// 005cf2dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf2e0  83c404               add esp, 4
// 005cf2e3  c706cc4e8d00         mov dword ptr [esi], 0x8d4ecc
// 005cf2e9  8bc6                 mov eax, esi
// 005cf2eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf2f2  5e                   pop esi
// 005cf2f3  83c40c               add esp, 0xc
// 005cf2f6  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
