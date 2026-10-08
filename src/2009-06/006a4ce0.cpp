// roc 2009-06 006a4ce0  unit: RBX::P8BackpackItem::?$GetSetImpl  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4ce0
//
// 006a4ce0  64a100000000         mov eax, dword ptr fs:[0]
// 006a4ce6  6aff                 push -1
// 006a4ce8  68c0228600           push 0x8622c0
// 006a4ced  50                   push eax
// 006a4cee  64892500000000       mov dword ptr fs:[0], esp
// 006a4cf5  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a4cf9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a4cfd  56                   push esi
// 006a4cfe  50                   push eax
// 006a4cff  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a4d03  8bf1                 mov esi, ecx
// 006a4d05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a4d09  51                   push ecx
// 006a4d0a  52                   push edx
// 006a4d0b  50                   push eax
// 006a4d0c  8d4c2438             lea ecx, [esp + 0x38]
// 006a4d10  51                   push ecx
// 006a4d11  e87afeffff           call 0x6a4b90
// 006a4d16  8b08                 mov ecx, dword ptr [eax]
// 006a4d18  83c40c               add esp, 0xc
// 006a4d1b  c70000000000         mov dword ptr [eax], 0
// 006a4d21  8bc4                 mov eax, esp
// 006a4d23  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a4d2b  8964242c             mov dword ptr [esp + 0x2c], esp
// 006a4d2f  8908                 mov dword ptr [eax], ecx
// 006a4d31  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a4d35  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a4d39  52                   push edx
// 006a4d3a  50                   push eax
// 006a4d3b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 006a4d40  e80b71f4ff           call 0x5ebe50
// 006a4d45  50                   push eax
// 006a4d46  8bce                 mov ecx, esi
// 006a4d48  c644242000           mov byte ptr [esp + 0x20], 0
// 006a4d4d  e8dec7f6ff           call 0x611530
// 006a4d52  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a4d56  51                   push ecx
// 006a4d57  e8d63c0700           call 0x718a32
// 006a4d5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a4d60  83c404               add esp, 4
// 006a4d63  c706c49c8e00         mov dword ptr [esi], 0x8e9cc4
// 006a4d69  8bc6                 mov eax, esi
// 006a4d6b  64890d00000000       mov dword ptr fs:[0], ecx
// 006a4d72  5e                   pop esi
// 006a4d73  83c40c               add esp, 0xc
// 006a4d76  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
