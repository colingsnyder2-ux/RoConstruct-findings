// roc 2011-06 00763b70  unit: seg_00760000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763b70
//
// 00763b70  53                   push ebx
// 00763b71  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00763b75  8d830f270000         lea eax, [ebx + 0x270f]
// 00763b7b  56                   push esi
// 00763b7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00763b80  3d0f270000           cmp eax, 0x270f
// 00763b85  770d                 ja 0x763b94
// 00763b87  56                   push esi
// 00763b88  e8d3e7ffff           call 0x762360
// 00763b8d  83c404               add esp, 4
// 00763b90  8d5c0301             lea ebx, [ebx + eax + 1]
// 00763b94  6aff                 push -1
// 00763b96  56                   push esi
// 00763b97  e8b4e9ffff           call 0x762550
// 00763b9c  83c408               add esp, 8
// 00763b9f  85c0                 test eax, eax
// 00763ba1  7511                 jne 0x763bb4
// 00763ba3  6afe                 push -2
// 00763ba5  56                   push esi
// 00763ba6  e8c5e7ffff           call 0x762370
// 00763bab  83c408               add esp, 8
// 00763bae  5e                   pop esi
// 00763baf  83c8ff               or eax, 0xffffffff
// 00763bb2  5b                   pop ebx
// 00763bb3  c3                   ret 
// 00763bb4  57                   push edi
// 00763bb5  6a00                 push 0
// 00763bb7  53                   push ebx
// 00763bb8  56                   push esi
// 00763bb9  e892f0ffff           call 0x762c50
// 00763bbe  6aff                 push -1
// 00763bc0  56                   push esi
// 00763bc1  e82aebffff           call 0x7626f0
// 00763bc6  6afe                 push -2
// 00763bc8  56                   push esi
// 00763bc9  8bf8                 mov edi, eax
// 00763bcb  e8a0e7ffff           call 0x762370
// 00763bd0  83c41c               add esp, 0x1c
// 00763bd3  85ff                 test edi, edi
// 00763bd5  7425                 je 0x763bfc
// 00763bd7  57                   push edi
// 00763bd8  53                   push ebx
// 00763bd9  56                   push esi
// 00763bda  e871f0ffff           call 0x762c50
// 00763bdf  6a00                 push 0
// 00763be1  53                   push ebx
// 00763be2  56                   push esi
// 00763be3  e8e8f2ffff           call 0x762ed0
// 00763be8  83c418               add esp, 0x18
// 00763beb  57                   push edi
// 00763bec  53                   push ebx
// 00763bed  56                   push esi
// 00763bee  e8ddf2ffff           call 0x762ed0
// 00763bf3  83c40c               add esp, 0xc
// 00763bf6  8bc7                 mov eax, edi
// 00763bf8  5f                   pop edi
// 00763bf9  5e                   pop esi
// 00763bfa  5b                   pop ebx
// 00763bfb  c3                   ret 
// 00763bfc  53                   push ebx
// 00763bfd  56                   push esi
// 00763bfe  e8cdebffff           call 0x7627d0
// 00763c03  8bf8                 mov edi, eax
// 00763c05  83c408               add esp, 8
// 00763c08  47                   inc edi
// 00763c09  57                   push edi
// 00763c0a  53                   push ebx
// 00763c0b  56                   push esi
// 00763c0c  e8bff2ffff           call 0x762ed0
// 00763c11  83c40c               add esp, 0xc
// 00763c14  8bc7                 mov eax, edi
// 00763c16  5f                   pop edi
// 00763c17  5e                   pop esi
// 00763c18  5b                   pop ebx
// 00763c19  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
