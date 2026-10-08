// roc 2007-08 005b9250  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9250
//
// 005b9250  e8dbfeffff           call 0x5b9130
// 005b9255  85c0                 test eax, eax
// 005b9257  7410                 je 0x5b9269
// 005b9259  83f80c               cmp eax, 0xc
// 005b925c  740b                 je 0x5b9269
// 005b925e  83f80d               cmp eax, 0xd
// 005b9261  7406                 je 0x5b9269
// 005b9263  b801000000           mov eax, 1
// 005b9268  c3                   ret 
// 005b9269  33c0                 xor eax, eax
// 005b926b  c3                   ret 
// library rbxgs/v8datamodel\Surface.cpp (function ?isControllable@Surface@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Surface.cpp
