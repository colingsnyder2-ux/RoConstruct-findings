// roc 2009-12 0077b3c0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077b3c0
//
// 0077b3c0  8b442408             mov eax, dword ptr [esp + 8]
// 0077b3c4  56                   push esi
// 0077b3c5  8bf1                 mov esi, ecx
// 0077b3c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077b3cb  50                   push eax
// 0077b3cc  51                   push ecx
// 0077b3cd  8bce                 mov ecx, esi
// 0077b3cf  e89c410000           call 0x77f570
// 0077b3d4  c706b4969e00         mov dword ptr [esi], 0x9e96b4
// 0077b3da  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0077b3e1  8bc6                 mov eax, esi
// 0077b3e3  5e                   pop esi
// 0077b3e4  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
