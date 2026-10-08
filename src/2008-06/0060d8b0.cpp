// roc 2008-06 0060d8b0  unit: RBX::BlockBlockContact  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d8b0
//
// 0060d8b0  8b442408             mov eax, dword ptr [esp + 8]
// 0060d8b4  56                   push esi
// 0060d8b5  8bf1                 mov esi, ecx
// 0060d8b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060d8bb  50                   push eax
// 0060d8bc  51                   push ecx
// 0060d8bd  8bce                 mov ecx, esi
// 0060d8bf  e8acfeffff           call 0x60d770
// 0060d8c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060d8c7  50                   push eax
// 0060d8c8  e893b9fdff           call 0x5e9260
// 0060d8cd  5e                   pop esi
// 0060d8ce  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onNewPair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
