// roc 2008-06 00622780  unit: lua_exception  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622780
//
// 00622780  53                   push ebx
// 00622781  8bc2                 mov eax, edx
// 00622783  57                   push edi
// 00622784  8b7e08               mov edi, dword ptr [esi + 8]
// 00622787  8d5801               lea ebx, [eax + 1]
// 0062278a  8d9b00000000         lea ebx, [ebx]
// 00622790  8a08                 mov cl, byte ptr [eax]
// 00622792  40                   inc eax
// 00622793  84c9                 test cl, cl
// 00622795  75f9                 jne 0x622790
// 00622797  2bc3                 sub eax, ebx
// 00622799  50                   push eax
// 0062279a  52                   push edx
// 0062279b  56                   push esi
// 0062279c  e85fcb0300           call 0x65f300
// 006227a1  8907                 mov dword ptr [edi], eax
// 006227a3  c7470804000000       mov dword ptr [edi + 8], 4
// 006227aa  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006227ad  2b4608               sub eax, dword ptr [esi + 8]
// 006227b0  bf10000000           mov edi, 0x10
// 006227b5  83c40c               add esp, 0xc
// 006227b8  3bc7                 cmp eax, edi
// 006227ba  7f0b                 jg 0x6227c7
// 006227bc  6a01                 push 1
// 006227be  56                   push esi
// 006227bf  e88cf3ffff           call 0x621b50
// 006227c4  83c408               add esp, 8
// 006227c7  017e08               add dword ptr [esi + 8], edi
// 006227ca  5f                   pop edi
// 006227cb  5b                   pop ebx
// 006227cc  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
