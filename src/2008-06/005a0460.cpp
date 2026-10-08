// roc 2008-06 005a0460  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0460
//
// 005a0460  56                   push esi
// 005a0461  8bf1                 mov esi, ecx
// 005a0463  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a0467  68a4889200           push 0x9288a4
// 005a046c  ff1578288000         call dword ptr [0x802878]
// 005a0472  84c0                 test al, al
// 005a0474  7407                 je 0x5a047d
// 005a0476  8d4610               lea eax, [esi + 0x10]
// 005a0479  5e                   pop esi
// 005a047a  c20400               ret 4
// 005a047d  33c0                 xor eax, eax
// 005a047f  5e                   pop esi
// 005a0480  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
