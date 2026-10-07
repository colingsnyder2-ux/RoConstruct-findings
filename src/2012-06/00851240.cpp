// roc 2012-06 00851240  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00851240
//
// 00851240  8b442408             mov eax, dword ptr [esp + 8]
// 00851244  8b4808               mov ecx, dword ptr [eax + 8]
// 00851247  8b048d2cf5bf00       mov eax, dword ptr [ecx*4 + 0xbff52c]
// 0085124e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00851252  8b4a08               mov ecx, dword ptr [edx + 8]
// 00851255  8b0c8d2cf5bf00       mov ecx, dword ptr [ecx*4 + 0xbff52c]
// 0085125c  8a5002               mov dl, byte ptr [eax + 2]
// 0085125f  3a5102               cmp dl, byte ptr [ecx + 2]
// 00851262  7516                 jne 0x85127a
// 00851264  50                   push eax
// 00851265  8b442408             mov eax, dword ptr [esp + 8]
// 00851269  68402fbd00           push 0xbd2f40
// 0085126e  50                   push eax
// 0085126f  e89cfcffff           call 0x850f10
// 00851274  83c40c               add esp, 0xc
// 00851277  33c0                 xor eax, eax
// 00851279  c3                   ret 
// 0085127a  51                   push ecx
// 0085127b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085127f  50                   push eax
// 00851280  68202fbd00           push 0xbd2f20
// 00851285  51                   push ecx
// 00851286  e885fcffff           call 0x850f10
// 0085128b  83c410               add esp, 0x10
// 0085128e  33c0                 xor eax, eax
// 00851290  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
