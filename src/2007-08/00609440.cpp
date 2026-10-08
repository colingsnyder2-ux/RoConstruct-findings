// roc 2007-08 00609440  unit: RBX::RotatePJoint  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609440
//
// 00609440  8b442410             mov eax, dword ptr [esp + 0x10]
// 00609444  8b542408             mov edx, dword ptr [esp + 8]
// 00609448  56                   push esi
// 00609449  6a02                 push 2
// 0060944b  50                   push eax
// 0060944c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00609450  8bf1                 mov esi, ecx
// 00609452  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00609456  51                   push ecx
// 00609457  52                   push edx
// 00609458  50                   push eax
// 00609459  8bce                 mov ecx, esi
// 0060945b  e830120000           call 0x60a690
// 00609460  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 0060946a  c706fc5e7b00         mov dword ptr [esi], 0x7b5efc
// 00609470  8bc6                 mov eax, esi
// 00609472  5e                   pop esi
// 00609473  c21000               ret 0x10
// library rbxgs/v8world\RotateJoint.cpp (function ??0RotateVJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RotateJoint.cpp
