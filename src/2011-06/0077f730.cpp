// from server: 100% by auto
// roc 2011-06 0077f730  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f730
//
// 0077f730  55                   push ebp
// 0077f731  56                   push esi
// 0077f732  57                   push edi
// 0077f733  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077f737  6a05                 push 5
// 0077f739  6a01                 push 1
// 0077f73b  57                   push edi
// 0077f73c  e8cf49feff           call 0x764110
// 0077f741  6a01                 push 1
// 0077f743  57                   push edi
// 0077f744  e88730feff           call 0x7627d0
// 0077f749  8be8                 mov ebp, eax
// 0077f74b  55                   push ebp
// 0077f74c  6a02                 push 2
// 0077f74e  57                   push edi
// 0077f74f  e8ec4bfeff           call 0x764340
// 0077f754  8bf0                 mov esi, eax
// 0077f756  83c420               add esp, 0x20
// 0077f759  83fe01               cmp esi, 1
// 0077f75c  7c4f                 jl 0x77f7ad
// 0077f75e  3bf5                 cmp esi, ebp
// 0077f760  7f4b                 jg 0x77f7ad
// 0077f762  56                   push esi
// 0077f763  6a01                 push 1
// 0077f765  57                   push edi
// 0077f766  e8e534feff           call 0x762c50
// 0077f76b  83c40c               add esp, 0xc
// 0077f76e  3bf5                 cmp esi, ebp
// 0077f770  7d20                 jge 0x77f792
// 0077f772  53                   push ebx
// 0077f773  8d5e01               lea ebx, [esi + 1]
// 0077f776  53                   push ebx
// 0077f777  6a01                 push 1
// 0077f779  57                   push edi
// 0077f77a  e8d134feff           call 0x762c50
// 0077f77f  56                   push esi
// 0077f780  6a01                 push 1
// 0077f782  57                   push edi
// 0077f783  e84837feff           call 0x762ed0
// 0077f788  8bf3                 mov esi, ebx
// 0077f78a  83c418               add esp, 0x18
// 0077f78d  3bf5                 cmp esi, ebp
// 0077f78f  7ce2                 jl 0x77f773
// 0077f791  5b                   pop ebx
// 0077f792  57                   push edi
// 0077f793  e86831feff           call 0x762900
// 0077f798  55                   push ebp
// 0077f799  6a01                 push 1
// 0077f79b  57                   push edi
// 0077f79c  e82f37feff           call 0x762ed0
// 0077f7a1  83c410               add esp, 0x10
// 0077f7a4  5f                   pop edi
// 0077f7a5  5e                   pop esi
// 0077f7a6  b801000000           mov eax, 1
// 0077f7ab  5d                   pop ebp
// 0077f7ac  c3                   ret 
// 0077f7ad  5f                   pop edi
// 0077f7ae  5e                   pop esi
// 0077f7af  33c0                 xor eax, eax
// 0077f7b1  5d                   pop ebp
// 0077f7b2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tremove)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
