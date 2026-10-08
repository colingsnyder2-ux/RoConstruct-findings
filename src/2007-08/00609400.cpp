// roc 2007-08 00609400  unit: RBX::RotatePJoint  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609400
//
// 00609400  8b442410             mov eax, dword ptr [esp + 0x10]
// 00609404  8b542408             mov edx, dword ptr [esp + 8]
// 00609408  56                   push esi
// 00609409  6a02                 push 2
// 0060940b  50                   push eax
// 0060940c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00609410  8bf1                 mov esi, ecx
// 00609412  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00609416  51                   push ecx
// 00609417  52                   push edx
// 00609418  50                   push eax
// 00609419  8bce                 mov ecx, esi
// 0060941b  e870120000           call 0x60a690
// 00609420  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 0060942a  c706bc5e7b00         mov dword ptr [esi], 0x7b5ebc
// 00609430  8bc6                 mov eax, esi
// 00609432  5e                   pop esi
// 00609433  c21000               ret 0x10
// library rbxgs/v8world\RotateJoint.cpp (function ??0RotateVJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RotateJoint.cpp
