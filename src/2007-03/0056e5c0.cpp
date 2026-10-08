// roc 2007-03 0056e5c0  unit: seg_00560000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e5c0
//
// 0056e5c0  51                   push ecx
// 0056e5c1  8b542408             mov edx, dword ptr [esp + 8]
// 0056e5c5  83ec1c               sub esp, 0x1c
// 0056e5c8  8bc4                 mov eax, esp
// 0056e5ca  8964241c             mov dword ptr [esp + 0x1c], esp
// 0056e5ce  52                   push edx
// 0056e5cf  50                   push eax
// 0056e5d0  e88b9b0000           call 0x578160
// 0056e5d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056e5d9  83c10c               add ecx, 0xc
// 0056e5dc  e8efcef1ff           call 0x48b4d0
// 0056e5e1  59                   pop ecx
// 0056e5e2  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
