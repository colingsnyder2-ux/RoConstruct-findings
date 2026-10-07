// roc 2009-06 006ba4b0  unit: RBX::UniversalTool  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba4b0
//
// 006ba4b0  55                   push ebp
// 006ba4b1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006ba4b5  56                   push esi
// 006ba4b6  be01000000           mov esi, 1
// 006ba4bb  397504               cmp dword ptr [ebp + 4], esi
// 006ba4be  7e5d                 jle 0x6ba51d
// 006ba4c0  53                   push ebx
// 006ba4c1  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006ba4c4  57                   push edi
// 006ba4c5  6aff                 push -1
// 006ba4c7  53                   push ebx
// 006ba4c8  e823edffff           call 0x6b91f0
// 006ba4cd  83c408               add esp, 8
// 006ba4d0  89442414             mov dword ptr [esp + 0x14], eax
// 006ba4d4  bffeffffff           mov edi, 0xfffffffe
// 006ba4d9  8da42400000000       lea esp, [esp]
// 006ba4e0  57                   push edi
// 006ba4e1  53                   push ebx
// 006ba4e2  e809edffff           call 0x6b91f0
// 006ba4e7  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006ba4ea  8bd1                 mov edx, ecx
// 006ba4ec  2bd6                 sub edx, esi
// 006ba4ee  42                   inc edx
// 006ba4ef  83c408               add esp, 8
// 006ba4f2  83fa0a               cmp edx, 0xa
// 006ba4f5  7d06                 jge 0x6ba4fd
// 006ba4f7  39442414             cmp dword ptr [esp + 0x14], eax
// 006ba4fb  760a                 jbe 0x6ba507
// 006ba4fd  01442414             add dword ptr [esp + 0x14], eax
// 006ba501  46                   inc esi
// 006ba502  4f                   dec edi
// 006ba503  3bf1                 cmp esi, ecx
// 006ba505  7cd9                 jl 0x6ba4e0
// 006ba507  56                   push esi
// 006ba508  53                   push ebx
// 006ba509  e842f8ffff           call 0x6b9d50
// 006ba50e  83c408               add esp, 8
// 006ba511  b801000000           mov eax, 1
// 006ba516  2bc6                 sub eax, esi
// 006ba518  014504               add dword ptr [ebp + 4], eax
// 006ba51b  5f                   pop edi
// 006ba51c  5b                   pop ebx
// 006ba51d  5e                   pop esi
// 006ba51e  5d                   pop ebp
// 006ba51f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
