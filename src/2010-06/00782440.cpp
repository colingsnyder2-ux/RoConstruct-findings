// from server: 100% by auto
// roc 2010-06 00782440  unit: seg_00780000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782440
//
// 00782440  53                   push ebx
// 00782441  56                   push esi
// 00782442  57                   push edi
// 00782443  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00782447  33db                 xor ebx, ebx
// 00782449  8da42400000000       lea esp, [esp]
// 00782450  8b349da035a500       mov esi, dword ptr [ebx*4 + 0xa535a0]
// 00782457  8bc6                 mov eax, esi
// 00782459  8d5001               lea edx, [eax + 1]
// 0078245c  8d642400             lea esp, [esp]
// 00782460  8a08                 mov cl, byte ptr [eax]
// 00782462  40                   inc eax
// 00782463  84c9                 test cl, cl
// 00782465  75f9                 jne 0x782460
// 00782467  2bc2                 sub eax, edx
// 00782469  50                   push eax
// 0078246a  56                   push esi
// 0078246b  57                   push edi
// 0078246c  e86fb9ffff           call 0x77dde0
// 00782471  80480520             or byte ptr [eax + 5], 0x20
// 00782475  8acb                 mov cl, bl
// 00782477  fec1                 inc cl
// 00782479  43                   inc ebx
// 0078247a  83c40c               add esp, 0xc
// 0078247d  83fb15               cmp ebx, 0x15
// 00782480  884806               mov byte ptr [eax + 6], cl
// 00782483  7ccb                 jl 0x782450
// 00782485  5f                   pop edi
// 00782486  5e                   pop esi
// 00782487  5b                   pop ebx
// 00782488  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
