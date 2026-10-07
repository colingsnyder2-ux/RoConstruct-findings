// roc 2012-06 00854a60  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854a60
//
// 00854a60  8b4614               mov eax, dword ptr [esi + 0x14]
// 00854a63  53                   push ebx
// 00854a64  57                   push edi
// 00854a65  8b38                 mov edi, dword ptr [eax]
// 00854a67  8bc2                 mov eax, edx
// 00854a69  897e08               mov dword ptr [esi + 8], edi
// 00854a6c  8d5801               lea ebx, [eax + 1]
// 00854a6f  90                   nop 
// 00854a70  8a08                 mov cl, byte ptr [eax]
// 00854a72  40                   inc eax
// 00854a73  84c9                 test cl, cl
// 00854a75  75f9                 jne 0x854a70
// 00854a77  2bc3                 sub eax, ebx
// 00854a79  50                   push eax
// 00854a7a  52                   push edx
// 00854a7b  56                   push esi
// 00854a7c  e8af180e00           call 0x936330
// 00854a81  8907                 mov dword ptr [edi], eax
// 00854a83  c7470804000000       mov dword ptr [edi + 8], 4
// 00854a8a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00854a8d  2b4e08               sub ecx, dword ptr [esi + 8]
// 00854a90  bf10000000           mov edi, 0x10
// 00854a95  83c40c               add esp, 0xc
// 00854a98  3bcf                 cmp ecx, edi
// 00854a9a  7f2b                 jg 0x854ac7
// 00854a9c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00854a9f  83f801               cmp eax, 1
// 00854aa2  7c18                 jl 0x854abc
// 00854aa4  8d1400               lea edx, [eax + eax]
// 00854aa7  52                   push edx
// 00854aa8  56                   push esi
// 00854aa9  e8d2fbffff           call 0x854680
// 00854aae  83c408               add esp, 8
// 00854ab1  017e08               add dword ptr [esi + 8], edi
// 00854ab4  5f                   pop edi
// 00854ab5  b802000000           mov eax, 2
// 00854aba  5b                   pop ebx
// 00854abb  c3                   ret 
// 00854abc  40                   inc eax
// 00854abd  50                   push eax
// 00854abe  56                   push esi
// 00854abf  e8bcfbffff           call 0x854680
// 00854ac4  83c408               add esp, 8
// 00854ac7  017e08               add dword ptr [esi + 8], edi
// 00854aca  5f                   pop edi
// 00854acb  b802000000           mov eax, 2
// 00854ad0  5b                   pop ebx
// 00854ad1  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
