// roc 2009-12 0079ca30  unit: seg_00790000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079ca30
//
// 0079ca30  56                   push esi
// 0079ca31  8b742408             mov esi, dword ptr [esp + 8]
// 0079ca35  6a02                 push 2
// 0079ca37  56                   push esi
// 0079ca38  e873defeff           call 0x78a8b0
// 0079ca3d  83c408               add esp, 8
// 0079ca40  50                   push eax
// 0079ca41  6a01                 push 1
// 0079ca43  56                   push esi
// 0079ca44  e8e7ddfeff           call 0x78a830
// 0079ca49  dd1c24               fstp qword ptr [esp]
// 0079ca4c  ff150cb99800         call dword ptr [0x98b90c]
// 0079ca52  dd5c2404             fstp qword ptr [esp + 4]
// 0079ca56  83c404               add esp, 4
// 0079ca59  56                   push esi
// 0079ca5a  e801c3feff           call 0x788d60
// 0079ca5f  83c40c               add esp, 0xc
// 0079ca62  b801000000           mov eax, 1
// 0079ca67  5e                   pop esi
// 0079ca68  c3                   ret 
// copied from an identical function in another client (function _math_ldexp)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lmathlib.c