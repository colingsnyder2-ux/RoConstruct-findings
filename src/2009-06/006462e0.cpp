// roc 2009-06 006462e0  unit: RBX::Soundscape::SoundService  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006462e0
//
// 006462e0  64a100000000         mov eax, dword ptr fs:[0]
// 006462e6  6aff                 push -1
// 006462e8  68c0228600           push 0x8622c0
// 006462ed  50                   push eax
// 006462ee  64892500000000       mov dword ptr fs:[0], esp
// 006462f5  8b442424             mov eax, dword ptr [esp + 0x24]
// 006462f9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006462fd  56                   push esi
// 006462fe  50                   push eax
// 006462ff  8b442420             mov eax, dword ptr [esp + 0x20]
// 00646303  8bf1                 mov esi, ecx
// 00646305  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00646309  51                   push ecx
// 0064630a  52                   push edx
// 0064630b  50                   push eax
// 0064630c  8d4c2438             lea ecx, [esp + 0x38]
// 00646310  51                   push ecx
// 00646311  e86ad8ffff           call 0x643b80
// 00646316  8b08                 mov ecx, dword ptr [eax]
// 00646318  83c40c               add esp, 0xc
// 0064631b  c70000000000         mov dword ptr [eax], 0
// 00646321  8bc4                 mov eax, esp
// 00646323  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064632b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0064632f  8908                 mov dword ptr [eax], ecx
// 00646331  8b542420             mov edx, dword ptr [esp + 0x20]
// 00646335  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00646339  52                   push edx
// 0064633a  50                   push eax
// 0064633b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00646340  e8cbfbffff           call 0x645f10
// 00646345  50                   push eax
// 00646346  8bce                 mov ecx, esi
// 00646348  c644242000           mov byte ptr [esp + 0x20], 0
// 0064634d  e8ee33dcff           call 0x409740
// 00646352  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00646356  51                   push ecx
// 00646357  e8d6260d00           call 0x718a32
// 0064635c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00646360  83c404               add esp, 4
// 00646363  c706c0e68d00         mov dword ptr [esi], 0x8de6c0
// 00646369  8bc6                 mov eax, esi
// 0064636b  64890d00000000       mov dword ptr fs:[0], ecx
// 00646372  5e                   pop esi
// 00646373  83c40c               add esp, 0xc
// 00646376  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
