// roc 2007-08 005ff4c0  unit: RBX::BallBallContact  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff4c0
//
// 005ff4c0  8b442408             mov eax, dword ptr [esp + 8]
// 005ff4c4  56                   push esi
// 005ff4c5  8bf1                 mov esi, ecx
// 005ff4c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff4cb  50                   push eax
// 005ff4cc  51                   push ecx
// 005ff4cd  e89e59fbff           call 0x5b4e70
// 005ff4d2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ff4d5  83c408               add esp, 8
// 005ff4d8  50                   push eax
// 005ff4d9  e8029cfaff           call 0x5a90e0
// 005ff4de  5e                   pop esi
// 005ff4df  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onReleasePair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
