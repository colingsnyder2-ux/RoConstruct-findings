// roc 2009-06 006b0d30  unit: RBX::BlockBlockContact  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b0d30
//
// 006b0d30  8b442408             mov eax, dword ptr [esp + 8]
// 006b0d34  56                   push esi
// 006b0d35  8bf1                 mov esi, ecx
// 006b0d37  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b0d3b  50                   push eax
// 006b0d3c  51                   push ecx
// 006b0d3d  8bce                 mov ecx, esi
// 006b0d3f  e87ce1ffff           call 0x6aeec0
// 006b0d44  c706acaa8e00         mov dword ptr [esi], 0x8eaaac
// 006b0d4a  c7463400000000       mov dword ptr [esi + 0x34], 0
// 006b0d51  8bc6                 mov eax, esi
// 006b0d53  5e                   pop esi
// 006b0d54  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
