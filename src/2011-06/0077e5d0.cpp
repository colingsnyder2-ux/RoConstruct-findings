// from server: 100% by auto
// roc 2011-06 0077e5d0  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e5d0
//
// 0077e5d0  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077e5d3  53                   push ebx
// 0077e5d4  57                   push edi
// 0077e5d5  8b38                 mov edi, dword ptr [eax]
// 0077e5d7  8bc2                 mov eax, edx
// 0077e5d9  897e08               mov dword ptr [esi + 8], edi
// 0077e5dc  8d5801               lea ebx, [eax + 1]
// 0077e5df  90                   nop 
// 0077e5e0  8a08                 mov cl, byte ptr [eax]
// 0077e5e2  40                   inc eax
// 0077e5e3  84c9                 test cl, cl
// 0077e5e5  75f9                 jne 0x77e5e0
// 0077e5e7  2bc3                 sub eax, ebx
// 0077e5e9  50                   push eax
// 0077e5ea  52                   push edx
// 0077e5eb  56                   push esi
// 0077e5ec  e82fbc0500           call 0x7da220
// 0077e5f1  8907                 mov dword ptr [edi], eax
// 0077e5f3  c7470804000000       mov dword ptr [edi + 8], 4
// 0077e5fa  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0077e5fd  2b4e08               sub ecx, dword ptr [esi + 8]
// 0077e600  bf10000000           mov edi, 0x10
// 0077e605  83c40c               add esp, 0xc
// 0077e608  3bcf                 cmp ecx, edi
// 0077e60a  7f2b                 jg 0x77e637
// 0077e60c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0077e60f  83f801               cmp eax, 1
// 0077e612  7c18                 jl 0x77e62c
// 0077e614  8d1400               lea edx, [eax + eax]
// 0077e617  52                   push edx
// 0077e618  56                   push esi
// 0077e619  e8d2fbffff           call 0x77e1f0
// 0077e61e  83c408               add esp, 8
// 0077e621  017e08               add dword ptr [esi + 8], edi
// 0077e624  5f                   pop edi
// 0077e625  b802000000           mov eax, 2
// 0077e62a  5b                   pop ebx
// 0077e62b  c3                   ret 
// 0077e62c  40                   inc eax
// 0077e62d  50                   push eax
// 0077e62e  56                   push esi
// 0077e62f  e8bcfbffff           call 0x77e1f0
// 0077e634  83c408               add esp, 8
// 0077e637  017e08               add dword ptr [esi + 8], edi
// 0077e63a  5f                   pop edi
// 0077e63b  b802000000           mov eax, 2
// 0077e640  5b                   pop ebx
// 0077e641  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
