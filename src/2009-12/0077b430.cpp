// roc 2009-12 0077b430  unit: RBX::BallBallContact  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077b430
//
// 0077b430  8b442408             mov eax, dword ptr [esp + 8]
// 0077b434  56                   push esi
// 0077b435  8bf1                 mov esi, ecx
// 0077b437  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077b43b  50                   push eax
// 0077b43c  51                   push ecx
// 0077b43d  8bce                 mov ecx, esi
// 0077b43f  e82c410000           call 0x77f570
// 0077b444  c706e0969e00         mov dword ptr [esi], 0x9e96e0
// 0077b44a  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0077b451  8bc6                 mov eax, esi
// 0077b453  5e                   pop esi
// 0077b454  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
