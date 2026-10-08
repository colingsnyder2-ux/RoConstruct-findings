// roc 2010-06 0040b2d0  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040b2d0
//
// 0040b2d0  56                   push esi
// 0040b2d1  8bf1                 mov esi, ecx
// 0040b2d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040b2d7  684083b700           push 0xb78340
// 0040b2dc  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 0040b2e2  84c0                 test al, al
// 0040b2e4  7407                 je 0x40b2ed
// 0040b2e6  8d4610               lea eax, [esi + 0x10]
// 0040b2e9  5e                   pop esi
// 0040b2ea  c20400               ret 4
// 0040b2ed  33c0                 xor eax, eax
// 0040b2ef  5e                   pop esi
// 0040b2f0  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
