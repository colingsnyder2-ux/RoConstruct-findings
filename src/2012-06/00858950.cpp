// roc 2012-06 00858950  unit: seg_00850000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858950
//
// 00858950  56                   push esi
// 00858951  8b742408             mov esi, dword ptr [esp + 8]
// 00858955  6a01                 push 1
// 00858957  56                   push esi
// 00858958  e893affdff           call 0x8338f0
// 0085895d  83c408               add esp, 8
// 00858960  6a00                 push 0
// 00858962  6aff                 push -1
// 00858964  56                   push esi
// 00858965  e88691fdff           call 0x831af0
// 0085896a  83c404               add esp, 4
// 0085896d  48                   dec eax
// 0085896e  50                   push eax
// 0085896f  56                   push esi
// 00858970  e8fb9efdff           call 0x832870
// 00858975  33c9                 xor ecx, ecx
// 00858977  85c0                 test eax, eax
// 00858979  0f94c1               sete cl
// 0085897c  51                   push ecx
// 0085897d  56                   push esi
// 0085897e  e81d99fdff           call 0x8322a0
// 00858983  6a01                 push 1
// 00858985  56                   push esi
// 00858986  e81592fdff           call 0x831ba0
// 0085898b  56                   push esi
// 0085898c  e85f91fdff           call 0x831af0
// 00858991  83c424               add esp, 0x24
// 00858994  5e                   pop esi
// 00858995  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
