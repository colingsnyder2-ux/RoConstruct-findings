// roc 2012-06 00850660  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00850660
//
// 00850660  8b442404             mov eax, dword ptr [esp + 4]
// 00850664  8bc8                 mov ecx, eax
// 00850666  83e13f               and ecx, 0x3f
// 00850669  83f91c               cmp ecx, 0x1c
// 0085066c  7c15                 jl 0x850683
// 0085066e  83f91e               cmp ecx, 0x1e
// 00850671  7e05                 jle 0x850678
// 00850673  83f922               cmp ecx, 0x22
// 00850676  750b                 jne 0x850683
// 00850678  25000080ff           and eax, 0xff800000
// 0085067d  f7d8                 neg eax
// 0085067f  1bc0                 sbb eax, eax
// 00850681  40                   inc eax
// 00850682  c3                   ret 
// 00850683  33c0                 xor eax, eax
// 00850685  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
