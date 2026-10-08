// from server: 100% by auto
// roc 2007-08 005bf3b0  unit: boost::detail::H::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf3b0
//
// 005bf3b0  56                   push esi
// 005bf3b1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bf3b5  57                   push edi
// 005bf3b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bf3ba  56                   push esi
// 005bf3bb  57                   push edi
// 005bf3bc  e8afe3ffff           call 0x5bd770
// 005bf3c1  83c408               add esp, 8
// 005bf3c4  85c0                 test eax, eax
// 005bf3c6  7f2f                 jg 0x5bf3f7
// 005bf3c8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005bf3cc  85ff                 test edi, edi
// 005bf3ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bf3d2  7432                 je 0x5bf406
// 005bf3d4  85c0                 test eax, eax
// 005bf3d6  7418                 je 0x5bf3f0
// 005bf3d8  8bc8                 mov ecx, eax
// 005bf3da  8d7101               lea esi, [ecx + 1]
// 005bf3dd  8d4900               lea ecx, [ecx]
// 005bf3e0  8a11                 mov dl, byte ptr [ecx]
// 005bf3e2  83c101               add ecx, 1
// 005bf3e5  84d2                 test dl, dl
// 005bf3e7  75f7                 jne 0x5bf3e0
// 005bf3e9  2bce                 sub ecx, esi
// 005bf3eb  890f                 mov dword ptr [edi], ecx
// 005bf3ed  5f                   pop edi
// 005bf3ee  5e                   pop esi
// 005bf3ef  c3                   ret 
// 005bf3f0  33c9                 xor ecx, ecx
// 005bf3f2  890f                 mov dword ptr [edi], ecx
// 005bf3f4  5f                   pop edi
// 005bf3f5  5e                   pop esi
// 005bf3f6  c3                   ret 
// 005bf3f7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005bf3fb  50                   push eax
// 005bf3fc  56                   push esi
// 005bf3fd  57                   push edi
// 005bf3fe  e84dffffff           call 0x5bf350
// 005bf403  83c40c               add esp, 0xc
// 005bf406  5f                   pop edi
// 005bf407  5e                   pop esi
// 005bf408  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
