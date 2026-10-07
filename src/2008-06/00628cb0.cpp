// roc 2008-06 00628cb0  unit: seg_00620000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628cb0
//
// 00628cb0  56                   push esi
// 00628cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00628cb5  57                   push edi
// 00628cb6  56                   push esi
// 00628cb7  e8a4a2feff           call 0x612f60
// 00628cbc  6a01                 push 1
// 00628cbe  56                   push esi
// 00628cbf  8bf8                 mov edi, eax
// 00628cc1  e83a91feff           call 0x611e00
// 00628cc6  83c40c               add esp, 0xc
// 00628cc9  83f806               cmp eax, 6
// 00628ccc  750f                 jne 0x628cdd
// 00628cce  6a01                 push 1
// 00628cd0  56                   push esi
// 00628cd1  e86a91feff           call 0x611e40
// 00628cd6  83c408               add esp, 8
// 00628cd9  85c0                 test eax, eax
// 00628cdb  7410                 je 0x628ced
// 00628cdd  6874578400           push 0x845774
// 00628ce2  6a01                 push 1
// 00628ce4  56                   push esi
// 00628ce5  e8e687feff           call 0x6114d0
// 00628cea  83c40c               add esp, 0xc
// 00628ced  6a01                 push 1
// 00628cef  56                   push esi
// 00628cf0  e8db90feff           call 0x611dd0
// 00628cf5  6a01                 push 1
// 00628cf7  57                   push edi
// 00628cf8  56                   push esi
// 00628cf9  e8a28efeff           call 0x611ba0
// 00628cfe  83c414               add esp, 0x14
// 00628d01  5f                   pop edi
// 00628d02  b801000000           mov eax, 1
// 00628d07  5e                   pop esi
// 00628d08  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
