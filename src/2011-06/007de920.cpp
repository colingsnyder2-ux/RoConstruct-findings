// roc 2011-06 007de920  unit: seg_007d0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de920
//
// 007de920  53                   push ebx
// 007de921  56                   push esi
// 007de922  57                   push edi
// 007de923  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007de927  33db                 xor ebx, ebx
// 007de929  8da42400000000       lea esp, [esp]
// 007de930  8b349db0e4ab00       mov esi, dword ptr [ebx*4 + 0xabe4b0]
// 007de937  8bc6                 mov eax, esi
// 007de939  8d5001               lea edx, [eax + 1]
// 007de93c  8d642400             lea esp, [esp]
// 007de940  8a08                 mov cl, byte ptr [eax]
// 007de942  40                   inc eax
// 007de943  84c9                 test cl, cl
// 007de945  75f9                 jne 0x7de940
// 007de947  2bc2                 sub eax, edx
// 007de949  50                   push eax
// 007de94a  56                   push esi
// 007de94b  57                   push edi
// 007de94c  e8cfb8ffff           call 0x7da220
// 007de951  80480520             or byte ptr [eax + 5], 0x20
// 007de955  8acb                 mov cl, bl
// 007de957  fec1                 inc cl
// 007de959  43                   inc ebx
// 007de95a  83c40c               add esp, 0xc
// 007de95d  83fb15               cmp ebx, 0x15
// 007de960  884806               mov byte ptr [eax + 6], cl
// 007de963  7ccb                 jl 0x7de930
// 007de965  5f                   pop edi
// 007de966  5e                   pop esi
// 007de967  5b                   pop ebx
// 007de968  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
