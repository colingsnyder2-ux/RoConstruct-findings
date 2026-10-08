// roc 2008-06 005e7870  unit: RBX::Ball  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7870
//
// 005e7870  b801000000           mov eax, 1
// 005e7875  8405e4ab9700         test byte ptr [0x97abe4], al
// 005e787b  7531                 jne 0x5e78ae
// 005e787d  d9ee                 fldz 
// 005e787f  0905e4ab9700         or dword ptr [0x97abe4], eax
// 005e7885  d915d8ab9700         fst dword ptr [0x97abd8]
// 005e788b  68e0f97f00           push 0x7ff9e0
// 005e7890  d915dcab9700         fst dword ptr [0x97abdc]
// 005e7896  c705d4ab9700c4f78300 mov dword ptr [0x97abd4], 0x83f7c4
// 005e78a0  d91de0ab9700         fstp dword ptr [0x97abe0]
// 005e78a6  e8049f0b00           call 0x6a17af
// 005e78ab  83c404               add esp, 4
// 005e78ae  b8d4ab9700           mov eax, 0x97abd4
// 005e78b3  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?nullGeometry@Geometry@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
