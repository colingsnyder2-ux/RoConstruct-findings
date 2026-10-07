// roc 2008-06 00625ab0  unit: seg_00620000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625ab0
//
// 00625ab0  56                   push esi
// 00625ab1  8b742408             mov esi, dword ptr [esp + 8]
// 00625ab5  57                   push edi
// 00625ab6  6a05                 push 5
// 00625ab8  6a01                 push 1
// 00625aba  56                   push esi
// 00625abb  e880bbfeff           call 0x611640
// 00625ac0  6a01                 push 1
// 00625ac2  56                   push esi
// 00625ac3  e8b8c5feff           call 0x612080
// 00625ac8  6816b78000           push 0x80b716
// 00625acd  6a28                 push 0x28
// 00625acf  56                   push esi
// 00625ad0  8bf8                 mov edi, eax
// 00625ad2  e819b2feff           call 0x610cf0
// 00625ad7  6a02                 push 2
// 00625ad9  56                   push esi
// 00625ada  e821c3feff           call 0x611e00
// 00625adf  83c428               add esp, 0x28
// 00625ae2  85c0                 test eax, eax
// 00625ae4  7e0d                 jle 0x625af3
// 00625ae6  6a06                 push 6
// 00625ae8  6a02                 push 2
// 00625aea  56                   push esi
// 00625aeb  e850bbfeff           call 0x611640
// 00625af0  83c40c               add esp, 0xc
// 00625af3  6a02                 push 2
// 00625af5  56                   push esi
// 00625af6  e825c1feff           call 0x611c20
// 00625afb  57                   push edi
// 00625afc  6a01                 push 1
// 00625afe  56                   push esi
// 00625aff  e8acfbffff           call 0x6256b0
// 00625b04  83c414               add esp, 0x14
// 00625b07  5f                   pop edi
// 00625b08  33c0                 xor eax, eax
// 00625b0a  5e                   pop esi
// 00625b0b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _sort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
