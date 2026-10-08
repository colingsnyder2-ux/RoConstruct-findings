// roc 2008-06 00645a90  unit: RBX::PointToPointBreakConnector  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645a90
//
// 00645a90  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645a94  8b542408             mov edx, dword ptr [esp + 8]
// 00645a98  56                   push esi
// 00645a99  6a02                 push 2
// 00645a9b  50                   push eax
// 00645a9c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00645aa0  8bf1                 mov esi, ecx
// 00645aa2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00645aa6  51                   push ecx
// 00645aa7  52                   push edx
// 00645aa8  50                   push eax
// 00645aa9  8bce                 mov ecx, esi
// 00645aab  e8700e0000           call 0x646920
// 00645ab0  c706c4ad8400         mov dword ptr [esi], 0x84adc4
// 00645ab6  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00645ac0  8bc6                 mov eax, esi
// 00645ac2  5e                   pop esi
// 00645ac3  c21000               ret 0x10
// library rbxgs/v8world\RotateJoint.cpp (function ??0RotateJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RotateJoint.cpp
