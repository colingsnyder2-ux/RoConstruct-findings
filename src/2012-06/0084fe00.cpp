// from server: 100% by auto
// roc 2012-06 0084fe00  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084fe00
//
// 0084fe00  53                   push ebx
// 0084fe01  8bc2                 mov eax, edx
// 0084fe03  57                   push edi
// 0084fe04  8b7e08               mov edi, dword ptr [esi + 8]
// 0084fe07  8d5801               lea ebx, [eax + 1]
// 0084fe0a  8d9b00000000         lea ebx, [ebx]
// 0084fe10  8a08                 mov cl, byte ptr [eax]
// 0084fe12  40                   inc eax
// 0084fe13  84c9                 test cl, cl
// 0084fe15  75f9                 jne 0x84fe10
// 0084fe17  2bc3                 sub eax, ebx
// 0084fe19  50                   push eax
// 0084fe1a  52                   push edx
// 0084fe1b  56                   push esi
// 0084fe1c  e80f650e00           call 0x936330
// 0084fe21  8907                 mov dword ptr [edi], eax
// 0084fe23  c7470804000000       mov dword ptr [edi + 8], 4
// 0084fe2a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0084fe2d  2b4608               sub eax, dword ptr [esi + 8]
// 0084fe30  bf10000000           mov edi, 0x10
// 0084fe35  83c40c               add esp, 0xc
// 0084fe38  3bc7                 cmp eax, edi
// 0084fe3a  7f0b                 jg 0x84fe47
// 0084fe3c  6a01                 push 1
// 0084fe3e  56                   push esi
// 0084fe3f  e81c490000           call 0x854760
// 0084fe44  83c408               add esp, 8
// 0084fe47  017e08               add dword ptr [esi + 8], edi
// 0084fe4a  5f                   pop edi
// 0084fe4b  5b                   pop ebx
// 0084fe4c  c3                   ret 
// library lua-5.1.4/lobject.c (function _pushstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
