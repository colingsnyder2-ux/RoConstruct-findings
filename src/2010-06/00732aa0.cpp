// roc 2010-06 00732aa0  unit: lua_exception  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732aa0
//
// 00732aa0  53                   push ebx
// 00732aa1  8bc2                 mov eax, edx
// 00732aa3  57                   push edi
// 00732aa4  8b7e08               mov edi, dword ptr [esi + 8]
// 00732aa7  8d5801               lea ebx, [eax + 1]
// 00732aaa  8d9b00000000         lea ebx, [ebx]
// 00732ab0  8a08                 mov cl, byte ptr [eax]
// 00732ab2  40                   inc eax
// 00732ab3  84c9                 test cl, cl
// 00732ab5  75f9                 jne 0x732ab0
// 00732ab7  2bc3                 sub eax, ebx
// 00732ab9  50                   push eax
// 00732aba  52                   push edx
// 00732abb  56                   push esi
// 00732abc  e81fb30400           call 0x77dde0
// 00732ac1  8907                 mov dword ptr [edi], eax
// 00732ac3  c7470804000000       mov dword ptr [edi + 8], 4
// 00732aca  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00732acd  2b4608               sub eax, dword ptr [esi + 8]
// 00732ad0  bf10000000           mov edi, 0x10
// 00732ad5  83c40c               add esp, 0xc
// 00732ad8  3bc7                 cmp eax, edi
// 00732ada  7f0b                 jg 0x732ae7
// 00732adc  6a01                 push 1
// 00732ade  56                   push esi
// 00732adf  e8acd0ffff           call 0x72fb90
// 00732ae4  83c408               add esp, 8
// 00732ae7  017e08               add dword ptr [esi + 8], edi
// 00732aea  5f                   pop edi
// 00732aeb  5b                   pop ebx
// 00732aec  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
