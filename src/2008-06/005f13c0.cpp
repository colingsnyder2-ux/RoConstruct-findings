// roc 2008-06 005f13c0  unit: RBX::FaceInstance  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f13c0
//
// 005f13c0  e8dbfeffff           call 0x5f12a0
// 005f13c5  85c0                 test eax, eax
// 005f13c7  7410                 je 0x5f13d9
// 005f13c9  83f80c               cmp eax, 0xc
// 005f13cc  740b                 je 0x5f13d9
// 005f13ce  83f80d               cmp eax, 0xd
// 005f13d1  7406                 je 0x5f13d9
// 005f13d3  b801000000           mov eax, 1
// 005f13d8  c3                   ret 
// 005f13d9  33c0                 xor eax, eax
// 005f13db  c3                   ret 
// library rbxgs/v8datamodel\Surface.cpp (function ?isControllable@Surface@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
