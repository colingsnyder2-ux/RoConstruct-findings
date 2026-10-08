// roc 2007-08 006091e0  unit: RBX::PointToPointBreakConnector  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006091e0
//
// 006091e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006091e4  8b542408             mov edx, dword ptr [esp + 8]
// 006091e8  56                   push esi
// 006091e9  6a02                 push 2
// 006091eb  50                   push eax
// 006091ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 006091f0  8bf1                 mov esi, ecx
// 006091f2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006091f6  51                   push ecx
// 006091f7  52                   push edx
// 006091f8  50                   push eax
// 006091f9  8bce                 mov ecx, esi
// 006091fb  e890140000           call 0x60a690
// 00609200  c706842d7c00         mov dword ptr [esi], 0x7c2d84
// 00609206  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00609210  8bc6                 mov eax, esi
// 00609212  5e                   pop esi
// 00609213  c21000               ret 0x10
// library rbxgs/v8world\RotateJoint.cpp (function ??0RotateJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RotateJoint.cpp
