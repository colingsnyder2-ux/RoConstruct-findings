// roc 2007-03 005d3410  unit: seg_005d0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d3410
//
// 005d3410  56                   push esi
// 005d3411  8bf1                 mov esi, ecx
// 005d3413  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d3417  681cff8700           push 0x87ff1c
// 005d341c  ff1574e97700         call dword ptr [0x77e974]
// 005d3422  84c0                 test al, al
// 005d3424  7407                 je 0x5d342d
// 005d3426  8d4610               lea eax, [esi + 0x10]
// 005d3429  5e                   pop esi
// 005d342a  c20400               ret 4
// 005d342d  33c0                 xor eax, eax
// 005d342f  5e                   pop esi
// 005d3430  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
