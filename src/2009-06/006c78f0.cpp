// roc 2009-06 006c78f0  unit: seg_006c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c78f0
//
// 006c78f0  56                   push esi
// 006c78f1  57                   push edi
// 006c78f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c78f6  6a01                 push 1
// 006c78f8  57                   push edi
// 006c78f9  e89219ffff           call 0x6b9290
// 006c78fe  8bf0                 mov esi, eax
// 006c7900  83c408               add esp, 8
// 006c7903  85f6                 test esi, esi
// 006c7905  7510                 jne 0x6c7917
// 006c7907  68a0c18e00           push 0x8ec1a0
// 006c790c  6a01                 push 1
// 006c790e  57                   push edi
// 006c790f  e8bc31ffff           call 0x6baad0
// 006c7914  83c40c               add esp, 0xc
// 006c7917  57                   push edi
// 006c7918  e86314ffff           call 0x6b8d80
// 006c791d  83c404               add esp, 4
// 006c7920  48                   dec eax
// 006c7921  8bce                 mov ecx, esi
// 006c7923  e808ffffff           call 0x6c7830
// 006c7928  8bf0                 mov esi, eax
// 006c792a  85f6                 test esi, esi
// 006c792c  7d1b                 jge 0x6c7949
// 006c792e  6a00                 push 0
// 006c7930  57                   push edi
// 006c7931  e8fa1bffff           call 0x6b9530
// 006c7936  6afe                 push -2
// 006c7938  57                   push edi
// 006c7939  e8f214ffff           call 0x6b8e30
// 006c793e  83c410               add esp, 0x10
// 006c7941  5f                   pop edi
// 006c7942  b802000000           mov eax, 2
// 006c7947  5e                   pop esi
// 006c7948  c3                   ret 
// 006c7949  6a01                 push 1
// 006c794b  57                   push edi
// 006c794c  e8df1bffff           call 0x6b9530
// 006c7951  83c8ff               or eax, 0xffffffff
// 006c7954  2bc6                 sub eax, esi
// 006c7956  50                   push eax
// 006c7957  57                   push edi
// 006c7958  e8d314ffff           call 0x6b8e30
// 006c795d  83c410               add esp, 0x10
// 006c7960  5f                   pop edi
// 006c7961  8d4601               lea eax, [esi + 1]
// 006c7964  5e                   pop esi
// 006c7965  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_coresume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
