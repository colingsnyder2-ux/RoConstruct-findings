// roc 2007-08 005e1060  unit: RBX::VMotorFeature::?$FactoryProduct  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1060
//
// 005e1060  b801000000           mov eax, 1
// 005e1065  8405fc2a8c00         test byte ptr [0x8c2afc], al
// 005e106b  7520                 jne 0x5e108d
// 005e106d  d9e8                 fld1 
// 005e106f  0905fc2a8c00         or dword ptr [0x8c2afc], eax
// 005e1075  d915f02a8c00         fst dword ptr [0x8c2af0]
// 005e107b  d905b07e7900         fld dword ptr [0x797eb0]
// 005e1081  d91df42a8c00         fstp dword ptr [0x8c2af4]
// 005e1087  d91df82a8c00         fstp dword ptr [0x8c2af8]
// 005e108d  8b442408             mov eax, dword ptr [esp + 8]
// 005e1091  56                   push esi
// 005e1092  8b742408             mov esi, dword ptr [esp + 8]
// 005e1096  68f02a8c00           push 0x8c2af0
// 005e109b  50                   push eax
// 005e109c  56                   push esi
// 005e109d  e8beaefcff           call 0x5abf60
// 005e10a2  83c40c               add esp, 0xc
// 005e10a5  8bc6                 mov eax, esi
// 005e10a7  5e                   pop esi
// 005e10a8  c3                   ret 
// library rbxgs/tool\Dragger.cpp (function ?toGrid@Dragger@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
