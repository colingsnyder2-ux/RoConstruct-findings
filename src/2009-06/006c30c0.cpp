// from server: 100% by auto
// roc 2009-06 006c30c0  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c30c0
//
// 006c30c0  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c30c3  53                   push ebx
// 006c30c4  57                   push edi
// 006c30c5  8b38                 mov edi, dword ptr [eax]
// 006c30c7  8bc2                 mov eax, edx
// 006c30c9  897e08               mov dword ptr [esi + 8], edi
// 006c30cc  8d5801               lea ebx, [eax + 1]
// 006c30cf  90                   nop 
// 006c30d0  8a08                 mov cl, byte ptr [eax]
// 006c30d2  40                   inc eax
// 006c30d3  84c9                 test cl, cl
// 006c30d5  75f9                 jne 0x6c30d0
// 006c30d7  2bc3                 sub eax, ebx
// 006c30d9  50                   push eax
// 006c30da  52                   push edx
// 006c30db  56                   push esi
// 006c30dc  e85f9a0200           call 0x6ecb40
// 006c30e1  8907                 mov dword ptr [edi], eax
// 006c30e3  c7470804000000       mov dword ptr [edi + 8], 4
// 006c30ea  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006c30ed  2b4e08               sub ecx, dword ptr [esi + 8]
// 006c30f0  bf10000000           mov edi, 0x10
// 006c30f5  83c40c               add esp, 0xc
// 006c30f8  3bcf                 cmp ecx, edi
// 006c30fa  7f2b                 jg 0x6c3127
// 006c30fc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006c30ff  83f801               cmp eax, 1
// 006c3102  7c18                 jl 0x6c311c
// 006c3104  8d1400               lea edx, [eax + eax]
// 006c3107  52                   push edx
// 006c3108  56                   push esi
// 006c3109  e8d2fbffff           call 0x6c2ce0
// 006c310e  83c408               add esp, 8
// 006c3111  017e08               add dword ptr [esi + 8], edi
// 006c3114  5f                   pop edi
// 006c3115  b802000000           mov eax, 2
// 006c311a  5b                   pop ebx
// 006c311b  c3                   ret 
// 006c311c  40                   inc eax
// 006c311d  50                   push eax
// 006c311e  56                   push esi
// 006c311f  e8bcfbffff           call 0x6c2ce0
// 006c3124  83c408               add esp, 8
// 006c3127  017e08               add dword ptr [esi + 8], edi
// 006c312a  5f                   pop edi
// 006c312b  b802000000           mov eax, 2
// 006c3130  5b                   pop ebx
// 006c3131  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
