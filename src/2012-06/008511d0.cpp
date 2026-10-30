// from server: 100% by auto
// roc 2012-06 008511d0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008511d0
//
// 008511d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008511d4  8b4108               mov eax, dword ptr [ecx + 8]
// 008511d7  83f804               cmp eax, 4
// 008511da  7405                 je 0x8511e1
// 008511dc  83f803               cmp eax, 3
// 008511df  7504                 jne 0x8511e5
// 008511e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008511e5  c744240cfc2ebd00     mov dword ptr [esp + 0xc], 0xbd2efc
// 008511ed  894c2408             mov dword ptr [esp + 8], ecx
// 008511f1  e94affffff           jmp 0x851140
// library lua-5.1.4/ldebug.c (function _luaG_concaterror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
