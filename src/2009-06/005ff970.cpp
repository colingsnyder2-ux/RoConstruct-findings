// roc 2009-06 005ff970  unit: RBX::Reflection::UTuple::?$holder  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff970
//
// 005ff970  64a100000000         mov eax, dword ptr fs:[0]
// 005ff976  6aff                 push -1
// 005ff978  68c0228600           push 0x8622c0
// 005ff97d  50                   push eax
// 005ff97e  64892500000000       mov dword ptr fs:[0], esp
// 005ff985  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ff989  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005ff98d  56                   push esi
// 005ff98e  50                   push eax
// 005ff98f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ff993  8bf1                 mov esi, ecx
// 005ff995  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ff999  51                   push ecx
// 005ff99a  52                   push edx
// 005ff99b  50                   push eax
// 005ff99c  8d4c2438             lea ecx, [esp + 0x38]
// 005ff9a0  51                   push ecx
// 005ff9a1  e8eac8ffff           call 0x5fc290
// 005ff9a6  8b08                 mov ecx, dword ptr [eax]
// 005ff9a8  83c40c               add esp, 0xc
// 005ff9ab  c70000000000         mov dword ptr [eax], 0
// 005ff9b1  8bc4                 mov eax, esp
// 005ff9b3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ff9bb  8964242c             mov dword ptr [esp + 0x2c], esp
// 005ff9bf  8908                 mov dword ptr [eax], ecx
// 005ff9c1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ff9c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ff9c9  52                   push edx
// 005ff9ca  50                   push eax
// 005ff9cb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ff9d0  e8fbb2feff           call 0x5eacd0
// 005ff9d5  50                   push eax
// 005ff9d6  8bce                 mov ecx, esi
// 005ff9d8  c644242000           mov byte ptr [esp + 0x20], 0
// 005ff9dd  e88ee2e3ff           call 0x43dc70
// 005ff9e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ff9e6  51                   push ecx
// 005ff9e7  e846901100           call 0x718a32
// 005ff9ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff9f0  83c404               add esp, 4
// 005ff9f3  c70630748d00         mov dword ptr [esi], 0x8d7430
// 005ff9f9  8bc6                 mov eax, esi
// 005ff9fb  64890d00000000       mov dword ptr fs:[0], ecx
// 005ffa02  5e                   pop esi
// 005ffa03  83c40c               add esp, 0xc
// 005ffa06  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
