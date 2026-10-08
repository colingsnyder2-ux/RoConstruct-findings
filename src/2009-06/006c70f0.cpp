// from server: 100% by auto
// roc 2009-06 006c70f0  unit: seg_006c0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c70f0
//
// 006c70f0  56                   push esi
// 006c70f1  8b742408             mov esi, dword ptr [esp + 8]
// 006c70f5  6a05                 push 5
// 006c70f7  6a01                 push 1
// 006c70f9  56                   push esi
// 006c70fa  e8413bffff           call 0x6bac40
// 006c70ff  68edd8ffff           push 0xffffd8ed
// 006c7104  56                   push esi
// 006c7105  e8361effff           call 0x6b8f40
// 006c710a  6a01                 push 1
// 006c710c  56                   push esi
// 006c710d  e82e1effff           call 0x6b8f40
// 006c7112  56                   push esi
// 006c7113  e80822ffff           call 0x6b9320
// 006c7118  83c420               add esp, 0x20
// 006c711b  b803000000           mov eax, 3
// 006c7120  5e                   pop esi
// 006c7121  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
