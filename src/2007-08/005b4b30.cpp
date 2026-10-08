// roc 2007-08 005b4b30  unit: RBX::Geometry  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4b30
//
// 005b4b30  b801000000           mov eax, 1
// 005b4b35  8405d05e8c00         test byte ptr [0x8c5ed0], al
// 005b4b3b  7531                 jne 0x5b4b6e
// 005b4b3d  d9ee                 fldz 
// 005b4b3f  0905d05e8c00         or dword ptr [0x8c5ed0], eax
// 005b4b45  d915c45e8c00         fst dword ptr [0x8c5ec4]
// 005b4b4b  6810b77700           push 0x77b710
// 005b4b50  d915c85e8c00         fst dword ptr [0x8c5ec8]
// 005b4b56  c705c05e8c00847e7b00 mov dword ptr [0x8c5ec0], 0x7b7e84
// 005b4b60  d91dcc5e8c00         fstp dword ptr [0x8c5ecc]
// 005b4b66  e8b8c10700           call 0x630d23
// 005b4b6b  83c404               add esp, 4
// 005b4b6e  b8c05e8c00           mov eax, 0x8c5ec0
// 005b4b73  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?nullGeometry@Geometry@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
