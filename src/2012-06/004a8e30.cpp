// roc 2012-06 004a8e30  unit: DxUserInputHardwareMouse  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a8e30
//
// 004a8e30  51                   push ecx
// 004a8e31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a8e35  56                   push esi
// 004a8e36  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a8e3a  50                   push eax
// 004a8e3b  56                   push esi
// 004a8e3c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a8e44  e857c42f00           call 0x7a52a0
// 004a8e49  8bc6                 mov eax, esi
// 004a8e4b  5e                   pop esi
// 004a8e4c  59                   pop ecx
// 004a8e4d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
