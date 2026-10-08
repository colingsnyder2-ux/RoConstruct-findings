// roc 2010-06 005a4210  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a4210
//
// 005a4210  51                   push ecx
// 005a4211  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a4215  56                   push esi
// 005a4216  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a421a  50                   push eax
// 005a421b  56                   push esi
// 005a421c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a4224  e88790f0ff           call 0x4ad2b0
// 005a4229  8bc6                 mov eax, esi
// 005a422b  5e                   pop esi
// 005a422c  59                   pop ecx
// 005a422d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
