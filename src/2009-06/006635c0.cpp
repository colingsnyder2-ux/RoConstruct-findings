// roc 2009-06 006635c0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006635c0
//
// 006635c0  51                   push ecx
// 006635c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006635c5  56                   push esi
// 006635c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006635ca  50                   push eax
// 006635cb  56                   push esi
// 006635cc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006635d4  e82777e5ff           call 0x4bad00
// 006635d9  8bc6                 mov eax, esi
// 006635db  5e                   pop esi
// 006635dc  59                   pop ecx
// 006635dd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
