// roc 2008-06 0060cae0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cae0
//
// 0060cae0  8b442408             mov eax, dword ptr [esp + 8]
// 0060cae4  56                   push esi
// 0060cae5  8bf1                 mov esi, ecx
// 0060cae7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060caeb  50                   push eax
// 0060caec  51                   push ecx
// 0060caed  8bce                 mov ecx, esi
// 0060caef  e82ca1ffff           call 0x606c20
// 0060caf4  c706bc368400         mov dword ptr [esi], 0x8436bc
// 0060cafa  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0060cb01  8bc6                 mov eax, esi
// 0060cb03  5e                   pop esi
// 0060cb04  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
