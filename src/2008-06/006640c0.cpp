// from server: 100% by auto
// roc 2008-06 006640c0  unit: RBX::FilterStairs  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006640c0
//
// 006640c0  53                   push ebx
// 006640c1  56                   push esi
// 006640c2  57                   push edi
// 006640c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006640c7  33db                 xor ebx, ebx
// 006640c9  8da42400000000       lea esp, [esp]
// 006640d0  8b349d00ca8400       mov esi, dword ptr [ebx*4 + 0x84ca00]
// 006640d7  8bc6                 mov eax, esi
// 006640d9  8d5001               lea edx, [eax + 1]
// 006640dc  8d642400             lea esp, [esp]
// 006640e0  8a08                 mov cl, byte ptr [eax]
// 006640e2  40                   inc eax
// 006640e3  84c9                 test cl, cl
// 006640e5  75f9                 jne 0x6640e0
// 006640e7  2bc2                 sub eax, edx
// 006640e9  50                   push eax
// 006640ea  56                   push esi
// 006640eb  57                   push edi
// 006640ec  e80fb2ffff           call 0x65f300
// 006640f1  80480520             or byte ptr [eax + 5], 0x20
// 006640f5  8acb                 mov cl, bl
// 006640f7  fec1                 inc cl
// 006640f9  43                   inc ebx
// 006640fa  83c40c               add esp, 0xc
// 006640fd  83fb15               cmp ebx, 0x15
// 00664100  884806               mov byte ptr [eax + 6], cl
// 00664103  7ccb                 jl 0x6640d0
// 00664105  5f                   pop edi
// 00664106  5e                   pop esi
// 00664107  5b                   pop ebx
// 00664108  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
