// roc 2009-06 006ba6a0  unit: RBX::UniversalTool  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba6a0
//
// 006ba6a0  53                   push ebx
// 006ba6a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006ba6a5  8d830f270000         lea eax, [ebx + 0x270f]
// 006ba6ab  56                   push esi
// 006ba6ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ba6b0  3d0f270000           cmp eax, 0x270f
// 006ba6b5  770d                 ja 0x6ba6c4
// 006ba6b7  56                   push esi
// 006ba6b8  e8c3e6ffff           call 0x6b8d80
// 006ba6bd  83c404               add esp, 4
// 006ba6c0  8d5c0301             lea ebx, [ebx + eax + 1]
// 006ba6c4  6aff                 push -1
// 006ba6c6  56                   push esi
// 006ba6c7  e8a4e8ffff           call 0x6b8f70
// 006ba6cc  83c408               add esp, 8
// 006ba6cf  85c0                 test eax, eax
// 006ba6d1  7511                 jne 0x6ba6e4
// 006ba6d3  6afe                 push -2
// 006ba6d5  56                   push esi
// 006ba6d6  e8b5e6ffff           call 0x6b8d90
// 006ba6db  83c408               add esp, 8
// 006ba6de  5e                   pop esi
// 006ba6df  83c8ff               or eax, 0xffffffff
// 006ba6e2  5b                   pop ebx
// 006ba6e3  c3                   ret 
// 006ba6e4  57                   push edi
// 006ba6e5  6a00                 push 0
// 006ba6e7  53                   push ebx
// 006ba6e8  56                   push esi
// 006ba6e9  e882efffff           call 0x6b9670
// 006ba6ee  6aff                 push -1
// 006ba6f0  56                   push esi
// 006ba6f1  e81aeaffff           call 0x6b9110
// 006ba6f6  6afe                 push -2
// 006ba6f8  56                   push esi
// 006ba6f9  8bf8                 mov edi, eax
// 006ba6fb  e890e6ffff           call 0x6b8d90
// 006ba700  83c41c               add esp, 0x1c
// 006ba703  85ff                 test edi, edi
// 006ba705  7425                 je 0x6ba72c
// 006ba707  57                   push edi
// 006ba708  53                   push ebx
// 006ba709  56                   push esi
// 006ba70a  e861efffff           call 0x6b9670
// 006ba70f  6a00                 push 0
// 006ba711  53                   push ebx
// 006ba712  56                   push esi
// 006ba713  e8d8f1ffff           call 0x6b98f0
// 006ba718  83c418               add esp, 0x18
// 006ba71b  57                   push edi
// 006ba71c  53                   push ebx
// 006ba71d  56                   push esi
// 006ba71e  e8cdf1ffff           call 0x6b98f0
// 006ba723  83c40c               add esp, 0xc
// 006ba726  8bc7                 mov eax, edi
// 006ba728  5f                   pop edi
// 006ba729  5e                   pop esi
// 006ba72a  5b                   pop ebx
// 006ba72b  c3                   ret 
// 006ba72c  53                   push ebx
// 006ba72d  56                   push esi
// 006ba72e  e8bdeaffff           call 0x6b91f0
// 006ba733  8bf8                 mov edi, eax
// 006ba735  83c408               add esp, 8
// 006ba738  47                   inc edi
// 006ba739  57                   push edi
// 006ba73a  53                   push ebx
// 006ba73b  56                   push esi
// 006ba73c  e8aff1ffff           call 0x6b98f0
// 006ba741  83c40c               add esp, 0xc
// 006ba744  8bc7                 mov eax, edi
// 006ba746  5f                   pop edi
// 006ba747  5e                   pop esi
// 006ba748  5b                   pop ebx
// 006ba749  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
