// roc 2007-03 005135e0  unit: seg_00510000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005135e0
//
// 005135e0  53                   push ebx
// 005135e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005135e5  56                   push esi
// 005135e6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005135ea  57                   push edi
// 005135eb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005135ef  56                   push esi
// 005135f0  57                   push edi
// 005135f1  6848287a00           push 0x7a2848
// 005135f6  6a00                 push 0
// 005135f8  53                   push ebx
// 005135f9  e812feffff           call 0x513410
// 005135fe  56                   push esi
// 005135ff  57                   push edi
// 00513600  6848297a00           push 0x7a2948
// 00513605  6a01                 push 1
// 00513607  53                   push ebx
// 00513608  e803feffff           call 0x513410
// 0051360d  83c428               add esp, 0x28
// 00513610  5f                   pop edi
// 00513611  5e                   pop esi
// 00513612  5b                   pop ebx
// 00513613  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_set_linear_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
