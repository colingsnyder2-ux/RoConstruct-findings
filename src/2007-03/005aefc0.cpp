// roc 2007-03 005aefc0  unit: seg_005a0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005aefc0
//
// 005aefc0  b801000000           mov eax, 1
// 005aefc5  8405d0f48b00         test byte ptr [0x8bf4d0], al
// 005aefcb  7531                 jne 0x5aeffe
// 005aefcd  d9ee                 fldz 
// 005aefcf  0905d0f48b00         or dword ptr [0x8bf4d0], eax
// 005aefd5  d915c4f48b00         fst dword ptr [0x8bf4c4]
// 005aefdb  6810b07700           push 0x77b010
// 005aefe0  d915c8f48b00         fst dword ptr [0x8bf4c8]
// 005aefe6  c705c0f48b00347b7b00 mov dword ptr [0x8bf4c0], 0x7b7b34
// 005aeff0  d91dccf48b00         fstp dword ptr [0x8bf4cc]
// 005aeff6  e8b8010700           call 0x61f1b3
// 005aeffb  83c404               add esp, 4
// 005aeffe  b8c0f48b00           mov eax, 0x8bf4c0
// 005af003  c3                   ret 
// library rbxgs/v8world\Primitive.cpp (function ?nullGeometry@Geometry@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
