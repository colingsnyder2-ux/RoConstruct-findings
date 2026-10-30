// from server: 100% by auto
// roc 2008-06 00610bf0  unit: RBX::BlockBlockContact  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610bf0
//
// 00610bf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00610bf4  83ec64               sub esp, 0x64
// 00610bf7  56                   push esi
// 00610bf8  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00610bfc  8d442404             lea eax, [esp + 4]
// 00610c00  50                   push eax
// 00610c01  51                   push ecx
// 00610c02  56                   push esi
// 00610c03  e8d8200100           call 0x622ce0
// 00610c08  83c40c               add esp, 0xc
// 00610c0b  85c0                 test eax, eax
// 00610c0d  7434                 je 0x610c43
// 00610c0f  8d542404             lea edx, [esp + 4]
// 00610c13  52                   push edx
// 00610c14  6874378400           push 0x843774
// 00610c19  56                   push esi
// 00610c1a  e8312d0100           call 0x623950
// 00610c1f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00610c23  83c40c               add esp, 0xc
// 00610c26  85c0                 test eax, eax
// 00610c28  7e19                 jle 0x610c43
// 00610c2a  50                   push eax
// 00610c2b  8d44242c             lea eax, [esp + 0x2c]
// 00610c2f  50                   push eax
// 00610c30  686c378400           push 0x84376c
// 00610c35  56                   push esi
// 00610c36  e8e5160000           call 0x612320
// 00610c3b  83c410               add esp, 0x10
// 00610c3e  5e                   pop esi
// 00610c3f  83c464               add esp, 0x64
// 00610c42  c3                   ret 
// 00610c43  6a00                 push 0
// 00610c45  6816b78000           push 0x80b716
// 00610c4a  56                   push esi
// 00610c4b  e8f0150000           call 0x612240
// 00610c50  83c40c               add esp, 0xc
// 00610c53  5e                   pop esi
// 00610c54  83c464               add esp, 0x64
// 00610c57  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
