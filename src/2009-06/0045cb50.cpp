// roc 2009-06 0045cb50  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045cb50
//
// 0045cb50  56                   push esi
// 0045cb51  8bf1                 mov esi, ecx
// 0045cb53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045cb57  6840b39d00           push 0x9db340
// 0045cb5c  ff15a4e98900         call dword ptr [0x89e9a4]
// 0045cb62  84c0                 test al, al
// 0045cb64  7407                 je 0x45cb6d
// 0045cb66  8d4610               lea eax, [esi + 0x10]
// 0045cb69  5e                   pop esi
// 0045cb6a  c20400               ret 4
// 0045cb6d  33c0                 xor eax, eax
// 0045cb6f  5e                   pop esi
// 0045cb70  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
