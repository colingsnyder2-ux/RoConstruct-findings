// roc 2009-06 006b0dc0  unit: RBX::BallBallContact  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0dc0
//
// 006b0dc0  8b442408             mov eax, dword ptr [esp + 8]
// 006b0dc4  56                   push esi
// 006b0dc5  8bf1                 mov esi, ecx
// 006b0dc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b0dcb  50                   push eax
// 006b0dcc  51                   push ecx
// 006b0dcd  8bce                 mov ecx, esi
// 006b0dcf  e8ece0ffff           call 0x6aeec0
// 006b0dd4  c706d8aa8e00         mov dword ptr [esi], 0x8eaad8
// 006b0dda  c7463400000000       mov dword ptr [esi + 0x34], 0
// 006b0de1  8bc6                 mov eax, esi
// 006b0de3  5e                   pop esi
// 006b0de4  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
