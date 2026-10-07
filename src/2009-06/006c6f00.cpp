// roc 2009-06 006c6f00  unit: seg_006c0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6f00
//
// 006c6f00  56                   push esi
// 006c6f01  8b742408             mov esi, dword ptr [esp + 8]
// 006c6f05  6a01                 push 1
// 006c6f07  56                   push esi
// 006c6f08  e8833dffff           call 0x6bac90
// 006c6f0d  6a02                 push 2
// 006c6f0f  56                   push esi
// 006c6f10  e87b3dffff           call 0x6bac90
// 006c6f15  6a02                 push 2
// 006c6f17  6a01                 push 1
// 006c6f19  56                   push esi
// 006c6f1a  e83121ffff           call 0x6b9050
// 006c6f1f  50                   push eax
// 006c6f20  56                   push esi
// 006c6f21  e80a26ffff           call 0x6b9530
// 006c6f26  83c424               add esp, 0x24
// 006c6f29  b801000000           mov eax, 1
// 006c6f2e  5e                   pop esi
// 006c6f2f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
