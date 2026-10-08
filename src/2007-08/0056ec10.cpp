// roc 2007-08 0056ec10  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ec10
//
// 0056ec10  51                   push ecx
// 0056ec11  8b542408             mov edx, dword ptr [esp + 8]
// 0056ec15  83ec1c               sub esp, 0x1c
// 0056ec18  8bc4                 mov eax, esp
// 0056ec1a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0056ec1e  52                   push edx
// 0056ec1f  50                   push eax
// 0056ec20  e85b0e0500           call 0x5bfa80
// 0056ec25  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056ec29  83c10c               add ecx, 0xc
// 0056ec2c  e8cf28f2ff           call 0x491500
// 0056ec31  59                   pop ecx
// 0056ec32  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
