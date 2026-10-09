// roc 2009-12 00537580  unit: RBX::Network::IdSerializer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537580
//
// 00537580  51                   push ecx
// 00537581  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00537585  56                   push esi
// 00537586  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053758a  50                   push eax
// 0053758b  56                   push esi
// 0053758c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00537594  e817771600           call 0x69ecb0
// 00537599  8bc6                 mov eax, esi
// 0053759b  5e                   pop esi
// 0053759c  59                   pop ecx
// 0053759d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
