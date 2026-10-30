// roc 2009-12 0079c770  unit: seg_00790000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079c770
//
// 0079c770  56                   push esi
// 0079c771  8b742408             mov esi, dword ptr [esp + 8]
// 0079c775  6a01                 push 1
// 0079c777  56                   push esi
// 0079c778  e8b3e0feff           call 0x78a830
// 0079c77d  dd1c24               fstp qword ptr [esp]
// 0079c780  ff1564b89800         call dword ptr [0x98b864]
// 0079c786  dd1c24               fstp qword ptr [esp]
// 0079c789  56                   push esi
// 0079c78a  e8d1c5feff           call 0x788d60
// 0079c78f  83c40c               add esp, 0xc
// 0079c792  b801000000           mov eax, 1
// 0079c797  5e                   pop esi
// 0079c798  c3                   ret 
// copied from an identical function in another client (function _math_ceil)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lmathlib.c