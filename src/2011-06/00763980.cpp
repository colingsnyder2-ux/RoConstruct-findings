// roc 2011-06 00763980  unit: seg_00760000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763980
//
// 00763980  55                   push ebp
// 00763981  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00763985  56                   push esi
// 00763986  be01000000           mov esi, 1
// 0076398b  397504               cmp dword ptr [ebp + 4], esi
// 0076398e  7e5d                 jle 0x7639ed
// 00763990  53                   push ebx
// 00763991  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00763994  57                   push edi
// 00763995  6aff                 push -1
// 00763997  53                   push ebx
// 00763998  e833eeffff           call 0x7627d0
// 0076399d  83c408               add esp, 8
// 007639a0  89442414             mov dword ptr [esp + 0x14], eax
// 007639a4  bffeffffff           mov edi, 0xfffffffe
// 007639a9  8da42400000000       lea esp, [esp]
// 007639b0  57                   push edi
// 007639b1  53                   push ebx
// 007639b2  e819eeffff           call 0x7627d0
// 007639b7  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007639ba  8bd1                 mov edx, ecx
// 007639bc  2bd6                 sub edx, esi
// 007639be  42                   inc edx
// 007639bf  83c408               add esp, 8
// 007639c2  83fa0a               cmp edx, 0xa
// 007639c5  7d06                 jge 0x7639cd
// 007639c7  39442414             cmp dword ptr [esp + 0x14], eax
// 007639cb  760a                 jbe 0x7639d7
// 007639cd  01442414             add dword ptr [esp + 0x14], eax
// 007639d1  46                   inc esi
// 007639d2  4f                   dec edi
// 007639d3  3bf1                 cmp esi, ecx
// 007639d5  7cd9                 jl 0x7639b0
// 007639d7  56                   push esi
// 007639d8  53                   push ebx
// 007639d9  e852f9ffff           call 0x763330
// 007639de  83c408               add esp, 8
// 007639e1  b801000000           mov eax, 1
// 007639e6  2bc6                 sub eax, esi
// 007639e8  014504               add dword ptr [ebp + 4], eax
// 007639eb  5f                   pop edi
// 007639ec  5b                   pop ebx
// 007639ed  5e                   pop esi
// 007639ee  5d                   pop ebp
// 007639ef  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
