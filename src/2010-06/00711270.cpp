// roc 2010-06 00711270  unit: seg_00710000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00711270
//
// 00711270  8b442408             mov eax, dword ptr [esp + 8]
// 00711274  56                   push esi
// 00711275  8bf1                 mov esi, ecx
// 00711277  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071127b  50                   push eax
// 0071127c  51                   push ecx
// 0071127d  8bce                 mov ecx, esi
// 0071127f  e88c560000           call 0x716910
// 00711284  c70654c8a400         mov dword ptr [esi], 0xa4c854
// 0071128a  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00711291  8bc6                 mov eax, esi
// 00711293  5e                   pop esi
// 00711294  c20800               ret 8
// library rbxgs/v8world\Contact.cpp (function ??0BallBallContact@RBX@@QAE@PAVPrimitive@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
