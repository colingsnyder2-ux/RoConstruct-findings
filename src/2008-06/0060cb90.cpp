// roc 2008-06 0060cb90  unit: RBX::BallBallContact  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cb90
//
// 0060cb90  8b442408             mov eax, dword ptr [esp + 8]
// 0060cb94  56                   push esi
// 0060cb95  8bf1                 mov esi, ecx
// 0060cb97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060cb9b  50                   push eax
// 0060cb9c  51                   push ecx
// 0060cb9d  8bce                 mov ecx, esi
// 0060cb9f  e87ca0ffff           call 0x606c20
// 0060cba4  c706e8368400         mov dword ptr [esi], 0x8436e8
// 0060cbaa  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0060cbb1  8bc6                 mov eax, esi
// 0060cbb3  5e                   pop esi
// 0060cbb4  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
