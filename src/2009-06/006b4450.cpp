// roc 2009-06 006b4450  unit: RBX::BlockBlockContact  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b4450
//
// 006b4450  b801000000           mov eax, 1
// 006b4455  8405e8cfa400         test byte ptr [0xa4cfe8], al
// 006b445b  7520                 jne 0x6b447d
// 006b445d  d9e8                 fld1 
// 006b445f  0905e8cfa400         or dword ptr [0xa4cfe8], eax
// 006b4465  d915dccfa400         fst dword ptr [0xa4cfdc]
// 006b446b  d905c4758b00         fld dword ptr [0x8b75c4]
// 006b4471  d91de0cfa400         fstp dword ptr [0xa4cfe0]
// 006b4477  d91de4cfa400         fstp dword ptr [0xa4cfe4]
// 006b447d  8b442408             mov eax, dword ptr [esp + 8]
// 006b4481  56                   push esi
// 006b4482  8b742408             mov esi, dword ptr [esp + 8]
// 006b4486  68dccfa400           push 0xa4cfdc
// 006b448b  50                   push eax
// 006b448c  56                   push esi
// 006b448d  e86e9afbff           call 0x66df00
// 006b4492  83c40c               add esp, 0xc
// 006b4495  8bc6                 mov eax, esi
// 006b4497  5e                   pop esi
// 006b4498  c3                   ret 
// library rbxgs/tool\Dragger.cpp (function ?toGrid@Dragger@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
