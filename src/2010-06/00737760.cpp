// from server: 100% by auto
// roc 2010-06 00737760  unit: seg_00730000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737760
//
// 00737760  56                   push esi
// 00737761  8b742408             mov esi, dword ptr [esp + 8]
// 00737765  6a05                 push 5
// 00737767  6a01                 push 1
// 00737769  56                   push esi
// 0073776a  e831b7feff           call 0x722ea0
// 0073776f  68edd8ffff           push 0xffffd8ed
// 00737774  56                   push esi
// 00737775  e89699feff           call 0x721110
// 0073777a  6a01                 push 1
// 0073777c  56                   push esi
// 0073777d  e88e99feff           call 0x721110
// 00737782  56                   push esi
// 00737783  e8689dfeff           call 0x7214f0
// 00737788  83c420               add esp, 0x20
// 0073778b  b803000000           mov eax, 3
// 00737790  5e                   pop esi
// 00737791  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
