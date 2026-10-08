// roc 2009-06 006a4ee0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4ee0
//
// 006a4ee0  64a100000000         mov eax, dword ptr fs:[0]
// 006a4ee6  6aff                 push -1
// 006a4ee8  68c0228600           push 0x8622c0
// 006a4eed  50                   push eax
// 006a4eee  64892500000000       mov dword ptr fs:[0], esp
// 006a4ef5  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a4ef9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a4efd  56                   push esi
// 006a4efe  50                   push eax
// 006a4eff  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a4f03  8bf1                 mov esi, ecx
// 006a4f05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a4f09  51                   push ecx
// 006a4f0a  52                   push edx
// 006a4f0b  50                   push eax
// 006a4f0c  8d4c2438             lea ecx, [esp + 0x38]
// 006a4f10  51                   push ecx
// 006a4f11  e81afdffff           call 0x6a4c30
// 006a4f16  8b08                 mov ecx, dword ptr [eax]
// 006a4f18  83c40c               add esp, 0xc
// 006a4f1b  c70000000000         mov dword ptr [eax], 0
// 006a4f21  8bc4                 mov eax, esp
// 006a4f23  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a4f2b  8964242c             mov dword ptr [esp + 0x2c], esp
// 006a4f2f  8908                 mov dword ptr [eax], ecx
// 006a4f31  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a4f35  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a4f39  52                   push edx
// 006a4f3a  50                   push eax
// 006a4f3b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006a4f40  e80b6ff4ff           call 0x5ebe50
// 006a4f45  50                   push eax
// 006a4f46  8bce                 mov ecx, esi
// 006a4f48  c644242000           mov byte ptr [esp + 0x20], 0
// 006a4f4d  e89e8dd9ff           call 0x43dcf0
// 006a4f52  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a4f56  51                   push ecx
// 006a4f57  e8d63a0700           call 0x718a32
// 006a4f5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a4f60  83c404               add esp, 4
// 006a4f63  c7063c9d8e00         mov dword ptr [esi], 0x8e9d3c
// 006a4f69  8bc6                 mov eax, esi
// 006a4f6b  64890d00000000       mov dword ptr fs:[0], ecx
// 006a4f72  5e                   pop esi
// 006a4f73  83c40c               add esp, 0xc
// 006a4f76  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
