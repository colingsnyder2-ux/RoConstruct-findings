// from server: 100% by auto
// roc 2007-08 005bed60  unit: boost::detail::H::?$sp_counted_impl_p  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bed60
//
// 005bed60  53                   push ebx
// 005bed61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005bed65  8d830f270000         lea eax, [ebx + 0x270f]
// 005bed6b  3d0f270000           cmp eax, 0x270f
// 005bed70  56                   push esi
// 005bed71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bed75  770d                 ja 0x5bed84
// 005bed77  56                   push esi
// 005bed78  e803e8ffff           call 0x5bd580
// 005bed7d  83c404               add esp, 4
// 005bed80  8d5c0301             lea ebx, [ebx + eax + 1]
// 005bed84  6aff                 push -1
// 005bed86  56                   push esi
// 005bed87  e8e4e9ffff           call 0x5bd770
// 005bed8c  83c408               add esp, 8
// 005bed8f  85c0                 test eax, eax
// 005bed91  7511                 jne 0x5beda4
// 005bed93  6afe                 push -2
// 005bed95  56                   push esi
// 005bed96  e8f5e7ffff           call 0x5bd590
// 005bed9b  83c408               add esp, 8
// 005bed9e  5e                   pop esi
// 005bed9f  83c8ff               or eax, 0xffffffff
// 005beda2  5b                   pop ebx
// 005beda3  c3                   ret 
// 005beda4  57                   push edi
// 005beda5  6a00                 push 0
// 005beda7  53                   push ebx
// 005beda8  56                   push esi
// 005beda9  e8f2f0ffff           call 0x5bdea0
// 005bedae  6aff                 push -1
// 005bedb0  56                   push esi
// 005bedb1  e85aebffff           call 0x5bd910
// 005bedb6  6afe                 push -2
// 005bedb8  56                   push esi
// 005bedb9  8bf8                 mov edi, eax
// 005bedbb  e8d0e7ffff           call 0x5bd590
// 005bedc0  83c41c               add esp, 0x1c
// 005bedc3  85ff                 test edi, edi
// 005bedc5  7425                 je 0x5bedec
// 005bedc7  57                   push edi
// 005bedc8  53                   push ebx
// 005bedc9  56                   push esi
// 005bedca  e8d1f0ffff           call 0x5bdea0
// 005bedcf  6a00                 push 0
// 005bedd1  53                   push ebx
// 005bedd2  56                   push esi
// 005bedd3  e818f3ffff           call 0x5be0f0
// 005bedd8  83c418               add esp, 0x18
// 005beddb  57                   push edi
// 005beddc  53                   push ebx
// 005beddd  56                   push esi
// 005bedde  e80df3ffff           call 0x5be0f0
// 005bede3  83c40c               add esp, 0xc
// 005bede6  8bc7                 mov eax, edi
// 005bede8  5f                   pop edi
// 005bede9  5e                   pop esi
// 005bedea  5b                   pop ebx
// 005bedeb  c3                   ret 
// 005bedec  53                   push ebx
// 005beded  56                   push esi
// 005bedee  e8fdebffff           call 0x5bd9f0
// 005bedf3  8bf8                 mov edi, eax
// 005bedf5  83c408               add esp, 8
// 005bedf8  83c701               add edi, 1
// 005bedfb  57                   push edi
// 005bedfc  53                   push ebx
// 005bedfd  56                   push esi
// 005bedfe  e8edf2ffff           call 0x5be0f0
// 005bee03  83c40c               add esp, 0xc
// 005bee06  8bc7                 mov eax, edi
// 005bee08  5f                   pop edi
// 005bee09  5e                   pop esi
// 005bee0a  5b                   pop ebx
// 005bee0b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
