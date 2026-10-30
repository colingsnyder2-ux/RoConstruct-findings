// from server: 100% by auto
// roc 2008-06 00628a40  unit: seg_00620000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628a40
//
// 00628a40  56                   push esi
// 00628a41  8b742408             mov esi, dword ptr [esp + 8]
// 00628a45  6a01                 push 1
// 00628a47  56                   push esi
// 00628a48  e8d391feff           call 0x611c20
// 00628a4d  6a00                 push 0
// 00628a4f  56                   push esi
// 00628a50  e8eba1feff           call 0x612c40
// 00628a55  6a01                 push 1
// 00628a57  56                   push esi
// 00628a58  e88395feff           call 0x611fe0
// 00628a5d  83c418               add esp, 0x18
// 00628a60  85c0                 test eax, eax
// 00628a62  0f84a5000000         je 0x628b0d
// 00628a68  6a01                 push 1
// 00628a6a  56                   push esi
// 00628a6b  e89093feff           call 0x611e00
// 00628a70  83c408               add esp, 8
// 00628a73  83f801               cmp eax, 1
// 00628a76  753a                 jne 0x628ab2
// 00628a78  6a00                 push 0
// 00628a7a  6a00                 push 0
// 00628a7c  56                   push esi
// 00628a7d  e8ee9afeff           call 0x612570
// 00628a82  6aff                 push -1
// 00628a84  56                   push esi
// 00628a85  e84693feff           call 0x611dd0
// 00628a8a  6a01                 push 1
// 00628a8c  56                   push esi
// 00628a8d  e85e99feff           call 0x6123f0
// 00628a92  68edd8ffff           push 0xffffd8ed
// 00628a97  56                   push esi
// 00628a98  e8739cfeff           call 0x612710
// 00628a9d  83c424               add esp, 0x24
// 00628aa0  6a02                 push 2
// 00628aa2  56                   push esi
// 00628aa3  e8489dfeff           call 0x6127f0
// 00628aa8  83c408               add esp, 8
// 00628aab  b801000000           mov eax, 1
// 00628ab0  5e                   pop esi
// 00628ab1  c3                   ret 
// 00628ab2  6a01                 push 1
// 00628ab4  56                   push esi
// 00628ab5  e8f69afeff           call 0x6125b0
// 00628aba  83c408               add esp, 8
// 00628abd  85c0                 test eax, eax
// 00628abf  7426                 je 0x628ae7
// 00628ac1  57                   push edi
// 00628ac2  68edd8ffff           push 0xffffd8ed
// 00628ac7  56                   push esi
// 00628ac8  e8239afeff           call 0x6124f0
// 00628acd  6aff                 push -1
// 00628acf  56                   push esi
// 00628ad0  e80b95feff           call 0x611fe0
// 00628ad5  6afe                 push -2
// 00628ad7  56                   push esi
// 00628ad8  8bf8                 mov edi, eax
// 00628ada  e84191feff           call 0x611c20
// 00628adf  83c418               add esp, 0x18
// 00628ae2  85ff                 test edi, edi
// 00628ae4  5f                   pop edi
// 00628ae5  7510                 jne 0x628af7
// 00628ae7  6808578400           push 0x845708
// 00628aec  6a01                 push 1
// 00628aee  56                   push esi
// 00628aef  e8dc89feff           call 0x6114d0
// 00628af4  83c40c               add esp, 0xc
// 00628af7  6a01                 push 1
// 00628af9  56                   push esi
// 00628afa  e8b19afeff           call 0x6125b0
// 00628aff  83c408               add esp, 8
// 00628b02  6a02                 push 2
// 00628b04  56                   push esi
// 00628b05  e8e69cfeff           call 0x6127f0
// 00628b0a  83c408               add esp, 8
// 00628b0d  b801000000           mov eax, 1
// 00628b12  5e                   pop esi
// 00628b13  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_newproxy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
