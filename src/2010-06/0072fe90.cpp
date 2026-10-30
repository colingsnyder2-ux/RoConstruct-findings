// from server: 100% by auto
// roc 2010-06 0072fe90  unit: lua_exception  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fe90
//
// 0072fe90  8b4614               mov eax, dword ptr [esi + 0x14]
// 0072fe93  53                   push ebx
// 0072fe94  57                   push edi
// 0072fe95  8b38                 mov edi, dword ptr [eax]
// 0072fe97  8bc2                 mov eax, edx
// 0072fe99  897e08               mov dword ptr [esi + 8], edi
// 0072fe9c  8d5801               lea ebx, [eax + 1]
// 0072fe9f  90                   nop 
// 0072fea0  8a08                 mov cl, byte ptr [eax]
// 0072fea2  40                   inc eax
// 0072fea3  84c9                 test cl, cl
// 0072fea5  75f9                 jne 0x72fea0
// 0072fea7  2bc3                 sub eax, ebx
// 0072fea9  50                   push eax
// 0072feaa  52                   push edx
// 0072feab  56                   push esi
// 0072feac  e82fdf0400           call 0x77dde0
// 0072feb1  8907                 mov dword ptr [edi], eax
// 0072feb3  c7470804000000       mov dword ptr [edi + 8], 4
// 0072feba  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0072febd  2b4e08               sub ecx, dword ptr [esi + 8]
// 0072fec0  bf10000000           mov edi, 0x10
// 0072fec5  83c40c               add esp, 0xc
// 0072fec8  3bcf                 cmp ecx, edi
// 0072feca  7f2b                 jg 0x72fef7
// 0072fecc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072fecf  83f801               cmp eax, 1
// 0072fed2  7c18                 jl 0x72feec
// 0072fed4  8d1400               lea edx, [eax + eax]
// 0072fed7  52                   push edx
// 0072fed8  56                   push esi
// 0072fed9  e8d2fbffff           call 0x72fab0
// 0072fede  83c408               add esp, 8
// 0072fee1  017e08               add dword ptr [esi + 8], edi
// 0072fee4  5f                   pop edi
// 0072fee5  b802000000           mov eax, 2
// 0072feea  5b                   pop ebx
// 0072feeb  c3                   ret 
// 0072feec  40                   inc eax
// 0072feed  50                   push eax
// 0072feee  56                   push esi
// 0072feef  e8bcfbffff           call 0x72fab0
// 0072fef4  83c408               add esp, 8
// 0072fef7  017e08               add dword ptr [esi + 8], edi
// 0072fefa  5f                   pop edi
// 0072fefb  b802000000           mov eax, 2
// 0072ff00  5b                   pop ebx
// 0072ff01  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
