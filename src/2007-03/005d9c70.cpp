// roc 2007-03 005d9c70  unit: seg_005d0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d9c70
//
// 005d9c70  b801000000           mov eax, 1
// 005d9c75  8405cccd8b00         test byte ptr [0x8bcdcc], al
// 005d9c7b  7520                 jne 0x5d9c9d
// 005d9c7d  d9e8                 fld1 
// 005d9c7f  0905cccd8b00         or dword ptr [0x8bcdcc], eax
// 005d9c85  d915c0cd8b00         fst dword ptr [0x8bcdc0]
// 005d9c8b  d905a0727900         fld dword ptr [0x7972a0]
// 005d9c91  d91dc4cd8b00         fstp dword ptr [0x8bcdc4]
// 005d9c97  d91dc8cd8b00         fstp dword ptr [0x8bcdc8]
// 005d9c9d  8b442408             mov eax, dword ptr [esp + 8]
// 005d9ca1  56                   push esi
// 005d9ca2  8b742408             mov esi, dword ptr [esp + 8]
// 005d9ca6  68c0cd8b00           push 0x8bcdc0
// 005d9cab  50                   push eax
// 005d9cac  56                   push esi
// 005d9cad  e8deddfcff           call 0x5a7a90
// 005d9cb2  83c40c               add esp, 0xc
// 005d9cb5  8bc6                 mov eax, esi
// 005d9cb7  5e                   pop esi
// 005d9cb8  c3                   ret 
// library rbxgs/tool\Dragger.cpp (function ?toGrid@Dragger@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
