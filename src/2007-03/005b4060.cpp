// roc 2007-03 005b4060  unit: seg_005b0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4060
//
// 005b4060  e8dbfeffff           call 0x5b3f40
// 005b4065  85c0                 test eax, eax
// 005b4067  7410                 je 0x5b4079
// 005b4069  83f80c               cmp eax, 0xc
// 005b406c  740b                 je 0x5b4079
// 005b406e  83f80d               cmp eax, 0xd
// 005b4071  7406                 je 0x5b4079
// 005b4073  b801000000           mov eax, 1
// 005b4078  c3                   ret 
// 005b4079  33c0                 xor eax, eax
// 005b407b  c3                   ret 
// library rbxgs/v8datamodel\Surface.cpp (function ?isControllable@Surface@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
