// from server: 100% by auto
// roc 2007-08 005cbf70  unit: seg_005c0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbf70
//
// 005cbf70  56                   push esi
// 005cbf71  8b742408             mov esi, dword ptr [esp + 8]
// 005cbf75  57                   push edi
// 005cbf76  6a00                 push 0
// 005cbf78  682ca47b00           push 0x7ba42c
// 005cbf7d  6a02                 push 2
// 005cbf7f  56                   push esi
// 005cbf80  e82b34ffff           call 0x5bf3b0
// 005cbf85  6a06                 push 6
// 005cbf87  6a01                 push 1
// 005cbf89  56                   push esi
// 005cbf8a  8bf8                 mov edi, eax
// 005cbf8c  e83f33ffff           call 0x5bf2d0
// 005cbf91  6a03                 push 3
// 005cbf93  56                   push esi
// 005cbf94  e8f715ffff           call 0x5bd590
// 005cbf99  57                   push edi
// 005cbf9a  6a00                 push 0
// 005cbf9c  68f0be5c00           push 0x5cbef0
// 005cbfa1  56                   push esi
// 005cbfa2  e8b923ffff           call 0x5be360
// 005cbfa7  83c434               add esp, 0x34
// 005cbfaa  85c0                 test eax, eax
// 005cbfac  7508                 jne 0x5cbfb6
// 005cbfae  5f                   pop edi
// 005cbfaf  b801000000           mov eax, 1
// 005cbfb4  5e                   pop esi
// 005cbfb5  c3                   ret 
// 005cbfb6  56                   push esi
// 005cbfb7  e8941bffff           call 0x5bdb50
// 005cbfbc  6afe                 push -2
// 005cbfbe  56                   push esi
// 005cbfbf  e86c16ffff           call 0x5bd630
// 005cbfc4  83c40c               add esp, 0xc
// 005cbfc7  5f                   pop edi
// 005cbfc8  b802000000           mov eax, 2
// 005cbfcd  5e                   pop esi
// 005cbfce  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_load)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
