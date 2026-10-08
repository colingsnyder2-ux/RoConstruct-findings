// roc 2007-08 005b7db0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7db0
//
// 005b7db0  51                   push ecx
// 005b7db1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b7db5  56                   push esi
// 005b7db6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b7dba  50                   push eax
// 005b7dbb  56                   push esi
// 005b7dbc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7dc4  e837eaecff           call 0x486800
// 005b7dc9  8bc6                 mov eax, esi
// 005b7dcb  5e                   pop esi
// 005b7dcc  59                   pop ecx
// 005b7dcd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
