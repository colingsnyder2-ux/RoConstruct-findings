// from server: 100% by auto
// roc 2010-06 00722430  unit: RBX::UniversalTool  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722430
//
// 00722430  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00722434  83ec64               sub esp, 0x64
// 00722437  56                   push esi
// 00722438  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0072243c  8d442404             lea eax, [esp + 4]
// 00722440  50                   push eax
// 00722441  51                   push ecx
// 00722442  56                   push esi
// 00722443  e8b80b0100           call 0x733000
// 00722448  83c40c               add esp, 0xc
// 0072244b  85c0                 test eax, eax
// 0072244d  7434                 je 0x722483
// 0072244f  8d542404             lea edx, [esp + 4]
// 00722453  52                   push edx
// 00722454  68eccea400           push 0xa4ceec
// 00722459  56                   push esi
// 0072245a  e8c1180100           call 0x733d20
// 0072245f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00722463  83c40c               add esp, 0xc
// 00722466  85c0                 test eax, eax
// 00722468  7e19                 jle 0x722483
// 0072246a  50                   push eax
// 0072246b  8d44242c             lea eax, [esp + 0x2c]
// 0072246f  50                   push eax
// 00722470  68e4cea400           push 0xa4cee4
// 00722475  56                   push esi
// 00722476  e8b5f1ffff           call 0x721630
// 0072247b  83c410               add esp, 0x10
// 0072247e  5e                   pop esi
// 0072247f  83c464               add esp, 0x64
// 00722482  c3                   ret 
// 00722483  6a00                 push 0
// 00722485  68fe08a000           push 0xa008fe
// 0072248a  56                   push esi
// 0072248b  e8c0f0ffff           call 0x721550
// 00722490  83c40c               add esp, 0xc
// 00722493  5e                   pop esi
// 00722494  83c464               add esp, 0x64
// 00722497  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
