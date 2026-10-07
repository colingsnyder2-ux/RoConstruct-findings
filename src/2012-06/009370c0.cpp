// roc 2012-06 009370c0  unit: seg_00930000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009370c0
//
// 009370c0  53                   push ebx
// 009370c1  56                   push esi
// 009370c2  57                   push edi
// 009370c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009370c7  33db                 xor ebx, ebx
// 009370c9  8da42400000000       lea esp, [esp]
// 009370d0  8b349d98f9bf00       mov esi, dword ptr [ebx*4 + 0xbff998]
// 009370d7  8bc6                 mov eax, esi
// 009370d9  8d5001               lea edx, [eax + 1]
// 009370dc  8d642400             lea esp, [esp]
// 009370e0  8a08                 mov cl, byte ptr [eax]
// 009370e2  40                   inc eax
// 009370e3  84c9                 test cl, cl
// 009370e5  75f9                 jne 0x9370e0
// 009370e7  2bc2                 sub eax, edx
// 009370e9  50                   push eax
// 009370ea  56                   push esi
// 009370eb  57                   push edi
// 009370ec  e83ff2ffff           call 0x936330
// 009370f1  80480520             or byte ptr [eax + 5], 0x20
// 009370f5  8acb                 mov cl, bl
// 009370f7  fec1                 inc cl
// 009370f9  43                   inc ebx
// 009370fa  83c40c               add esp, 0xc
// 009370fd  83fb15               cmp ebx, 0x15
// 00937100  884806               mov byte ptr [eax + 6], cl
// 00937103  7ccb                 jl 0x9370d0
// 00937105  5f                   pop edi
// 00937106  5e                   pop esi
// 00937107  5b                   pop ebx
// 00937108  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
