// roc 2007-08 0056e750  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e750
//
// 0056e750  8b542408             mov edx, dword ptr [esp + 8]
// 0056e754  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e757  8b01                 mov eax, dword ptr [ecx]
// 0056e759  8b4008               mov eax, dword ptr [eax + 8]
// 0056e75c  52                   push edx
// 0056e75d  8b542408             mov edx, dword ptr [esp + 8]
// 0056e761  52                   push edx
// 0056e762  ffd0                 call eax
// 0056e764  b001                 mov al, 1
// 0056e766  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
