// from server: 100% by auto
// roc 2008-06 00611690  unit: seg_00610000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611690
//
// 00611690  56                   push esi
// 00611691  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611695  57                   push edi
// 00611696  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061169a  56                   push esi
// 0061169b  57                   push edi
// 0061169c  e85f070000           call 0x611e00
// 006116a1  83c408               add esp, 8
// 006116a4  83f8ff               cmp eax, -1
// 006116a7  750f                 jne 0x6116b8
// 006116a9  6834388400           push 0x843834
// 006116ae  56                   push esi
// 006116af  57                   push edi
// 006116b0  e81bfeffff           call 0x6114d0
// 006116b5  83c40c               add esp, 0xc
// 006116b8  5f                   pop edi
// 006116b9  5e                   pop esi
// 006116ba  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
