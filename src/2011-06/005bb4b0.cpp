// roc 2011-06 005bb4b0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005bb4b0
//
// 005bb4b0  51                   push ecx
// 005bb4b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bb4b5  56                   push esi
// 005bb4b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bb4ba  50                   push eax
// 005bb4bb  56                   push esi
// 005bb4bc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005bb4c4  e807d0e8ff           call 0x4484d0
// 005bb4c9  8bc6                 mov eax, esi
// 005bb4cb  5e                   pop esi
// 005bb4cc  59                   pop ecx
// 005bb4cd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
