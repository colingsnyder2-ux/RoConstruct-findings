// roc 2007-03 005e7560  unit: seg_005e0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7560
//
// 005e7560  8b442408             mov eax, dword ptr [esp + 8]
// 005e7564  56                   push esi
// 005e7565  8bf1                 mov esi, ecx
// 005e7567  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e756b  50                   push eax
// 005e756c  51                   push ecx
// 005e756d  8bce                 mov ecx, esi
// 005e756f  e89cfeffff           call 0x5e7410
// 005e7574  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e7577  50                   push eax
// 005e7578  e80357fcff           call 0x5acc80
// 005e757d  5e                   pop esi
// 005e757e  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onNewPair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
