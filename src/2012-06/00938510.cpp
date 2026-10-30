// from server: 100% by auto
// roc 2012-06 00938510  unit: seg_00930000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938510
//
// 00938510  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00938517  7424                 je 0x93853d
// 00938519  681d010000           push 0x11d
// 0093851e  56                   push esi
// 0093851f  e8ecebffff           call 0x937110
// 00938524  50                   push eax
// 00938525  8b4634               mov eax, dword ptr [esi + 0x34]
// 00938528  682cfbbf00           push 0xbffb2c
// 0093852d  50                   push eax
// 0093852e  e80d7cf1ff           call 0x850140
// 00938533  50                   push eax
// 00938534  56                   push esi
// 00938535  e8d6ecffff           call 0x937210
// 0093853a  83c41c               add esp, 0x1c
// 0093853d  53                   push ebx
// 0093853e  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00938541  56                   push esi
// 00938542  e879feffff           call 0x9383c0
// 00938547  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0093854a  53                   push ebx
// 0093854b  51                   push ecx
// 0093854c  e86fee0200           call 0x9673c0
// 00938551  83c9ff               or ecx, 0xffffffff
// 00938554  83c40c               add esp, 0xc
// 00938557  894f10               mov dword ptr [edi + 0x10], ecx
// 0093855a  894f14               mov dword ptr [edi + 0x14], ecx
// 0093855d  c70704000000         mov dword ptr [edi], 4
// 00938563  894708               mov dword ptr [edi + 8], eax
// 00938566  5b                   pop ebx
// 00938567  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
