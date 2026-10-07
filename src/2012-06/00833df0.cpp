// roc 2012-06 00833df0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833df0
//
// 00833df0  8b442404             mov eax, dword ptr [esp + 4]
// 00833df4  6a01                 push 1
// 00833df6  50                   push eax
// 00833df7  e8a4e4ffff           call 0x8322a0
// 00833dfc  83c408               add esp, 8
// 00833dff  b801000000           mov eax, 1
// 00833e04  c3                   ret 
// library lua-5.1.4/ldblib.c (function _db_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldblib.c
