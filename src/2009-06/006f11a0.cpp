// from server: 100% by auto
// roc 2009-06 006f11a0  unit: seg_006f0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f11a0
//
// 006f11a0  53                   push ebx
// 006f11a1  56                   push esi
// 006f11a2  57                   push edi
// 006f11a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f11a7  33db                 xor ebx, ebx
// 006f11a9  8da42400000000       lea esp, [esp]
// 006f11b0  8b349d40e18e00       mov esi, dword ptr [ebx*4 + 0x8ee140]
// 006f11b7  8bc6                 mov eax, esi
// 006f11b9  8d5001               lea edx, [eax + 1]
// 006f11bc  8d642400             lea esp, [esp]
// 006f11c0  8a08                 mov cl, byte ptr [eax]
// 006f11c2  40                   inc eax
// 006f11c3  84c9                 test cl, cl
// 006f11c5  75f9                 jne 0x6f11c0
// 006f11c7  2bc2                 sub eax, edx
// 006f11c9  50                   push eax
// 006f11ca  56                   push esi
// 006f11cb  57                   push edi
// 006f11cc  e86fb9ffff           call 0x6ecb40
// 006f11d1  80480520             or byte ptr [eax + 5], 0x20
// 006f11d5  8acb                 mov cl, bl
// 006f11d7  fec1                 inc cl
// 006f11d9  43                   inc ebx
// 006f11da  83c40c               add esp, 0xc
// 006f11dd  83fb15               cmp ebx, 0x15
// 006f11e0  884806               mov byte ptr [eax + 6], cl
// 006f11e3  7ccb                 jl 0x6f11b0
// 006f11e5  5f                   pop edi
// 006f11e6  5e                   pop esi
// 006f11e7  5b                   pop ebx
// 006f11e8  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
