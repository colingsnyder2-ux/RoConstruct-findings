// roc 2009-06 006b1f20  unit: RBX::BlockBlockContact  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b1f20
//
// 006b1f20  8b442408             mov eax, dword ptr [esp + 8]
// 006b1f24  56                   push esi
// 006b1f25  8bf1                 mov esi, ecx
// 006b1f27  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b1f2b  50                   push eax
// 006b1f2c  51                   push ecx
// 006b1f2d  8bce                 mov ecx, esi
// 006b1f2f  e8bcfeffff           call 0x6b1df0
// 006b1f34  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b1f37  50                   push eax
// 006b1f38  e813c8fcff           call 0x67e750
// 006b1f3d  5e                   pop esi
// 006b1f3e  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onNewPair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
