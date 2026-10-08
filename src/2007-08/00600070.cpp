// roc 2007-08 00600070  unit: RBX::BallBallContact  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00600070
//
// 00600070  8b442408             mov eax, dword ptr [esp + 8]
// 00600074  56                   push esi
// 00600075  8bf1                 mov esi, ecx
// 00600077  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060007b  50                   push eax
// 0060007c  51                   push ecx
// 0060007d  8bce                 mov ecx, esi
// 0060007f  e8bcfeffff           call 0x5fff40
// 00600084  8b4e04               mov ecx, dword ptr [esi + 4]
// 00600087  50                   push eax
// 00600088  e83390faff           call 0x5a90c0
// 0060008d  5e                   pop esi
// 0060008e  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onNewPair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
