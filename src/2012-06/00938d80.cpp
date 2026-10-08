// from server: 100% by auto
// roc 2012-06 00938d80  unit: seg_00930000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938d80
//
// 00938d80  56                   push esi
// 00938d81  e83af6ffff           call 0x9383c0
// 00938d86  6a00                 push 0
// 00938d88  57                   push edi
// 00938d89  56                   push esi
// 00938d8a  e8010f0000           call 0x939c90
// 00938d8f  8b4630               mov eax, dword ptr [esi + 0x30]
// 00938d92  57                   push edi
// 00938d93  50                   push eax
// 00938d94  e8a7f00200           call 0x967e40
// 00938d99  83c418               add esp, 0x18
// 00938d9c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 00938da0  7421                 je 0x938dc3
// 00938da2  6a5d                 push 0x5d
// 00938da4  56                   push esi
// 00938da5  e866e3ffff           call 0x937110
// 00938daa  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00938dad  50                   push eax
// 00938dae  682cfbbf00           push 0xbffb2c
// 00938db3  51                   push ecx
// 00938db4  e88773f1ff           call 0x850140
// 00938db9  50                   push eax
// 00938dba  56                   push esi
// 00938dbb  e850e4ffff           call 0x937210
// 00938dc0  83c41c               add esp, 0x1c
// 00938dc3  56                   push esi
// 00938dc4  e8f7f5ffff           call 0x9383c0
// 00938dc9  59                   pop ecx
// 00938dca  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
