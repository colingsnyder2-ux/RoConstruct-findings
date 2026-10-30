// from server: 100% by auto
// roc 2009-06 006c74f0  unit: seg_006c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c74f0
//
// 006c74f0  56                   push esi
// 006c74f1  8b742408             mov esi, dword ptr [esp + 8]
// 006c74f5  6a01                 push 1
// 006c74f7  56                   push esi
// 006c74f8  e89337ffff           call 0x6bac90
// 006c74fd  83c408               add esp, 8
// 006c7500  6a00                 push 0
// 006c7502  6aff                 push -1
// 006c7504  56                   push esi
// 006c7505  e87618ffff           call 0x6b8d80
// 006c750a  83c404               add esp, 4
// 006c750d  48                   dec eax
// 006c750e  50                   push eax
// 006c750f  56                   push esi
// 006c7510  e8eb25ffff           call 0x6b9b00
// 006c7515  33c9                 xor ecx, ecx
// 006c7517  85c0                 test eax, eax
// 006c7519  0f94c1               sete cl
// 006c751c  51                   push ecx
// 006c751d  56                   push esi
// 006c751e  e80d20ffff           call 0x6b9530
// 006c7523  6a01                 push 1
// 006c7525  56                   push esi
// 006c7526  e80519ffff           call 0x6b8e30
// 006c752b  56                   push esi
// 006c752c  e84f18ffff           call 0x6b8d80
// 006c7531  83c424               add esp, 0x24
// 006c7534  5e                   pop esi
// 006c7535  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
