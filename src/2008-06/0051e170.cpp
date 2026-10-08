// from server: 100% by auto
// roc 2008-06 0051e170  unit: seg_00510000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e170
//
// 0051e170  56                   push esi
// 0051e171  8b742408             mov esi, dword ptr [esp + 8]
// 0051e175  57                   push edi
// 0051e176  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051e17a  6aff                 push -1
// 0051e17c  68ff7f0000           push 0x7fff
// 0051e181  57                   push edi
// 0051e182  56                   push esi
// 0051e183  e848fcffff           call 0x51ddd0
// 0051e188  83c410               add esp, 0x10
// 0051e18b  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 0051e192  7424                 je 0x51e1b8
// 0051e194  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 0051e19a  50                   push eax
// 0051e19b  56                   push esi
// 0051e19c  e85fc30000           call 0x52a500
// 0051e1a1  83c408               add esp, 8
// 0051e1a4  c7862402000000000000 mov dword ptr [esi + 0x224], 0
// 0051e1ae  c7862002000000000000 mov dword ptr [esi + 0x220], 0
// 0051e1b8  6820010000           push 0x120
// 0051e1bd  6a00                 push 0
// 0051e1bf  57                   push edi
// 0051e1c0  e83f351800           call 0x6a1704
// 0051e1c5  83c40c               add esp, 0xc
// 0051e1c8  5f                   pop edi
// 0051e1c9  5e                   pop esi
// 0051e1ca  c3                   ret 
// library libpng-1.2.5/png.c (function _png_info_destroy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
