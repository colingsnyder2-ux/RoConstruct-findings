// roc 2010-06 007112d0  unit: RBX::BallBallContact  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007112d0
//
// 007112d0  8b442408             mov eax, dword ptr [esp + 8]
// 007112d4  56                   push esi
// 007112d5  8bf1                 mov esi, ecx
// 007112d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007112db  50                   push eax
// 007112dc  51                   push ecx
// 007112dd  8bce                 mov ecx, esi
// 007112df  e82c560000           call 0x716910
// 007112e4  c70680c8a400         mov dword ptr [esi], 0xa4c880
// 007112ea  c7463400000000       mov dword ptr [esi + 0x34], 0
// 007112f1  8bc6                 mov eax, esi
// 007112f3  5e                   pop esi
// 007112f4  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
