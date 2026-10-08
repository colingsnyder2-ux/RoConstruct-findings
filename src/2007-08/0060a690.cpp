// roc 2007-08 0060a690  unit: RBX::MultiJoint  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a690
//
// 0060a690  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060a694  8b542408             mov edx, dword ptr [esp + 8]
// 0060a698  56                   push esi
// 0060a699  50                   push eax
// 0060a69a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060a69e  8bf1                 mov esi, ecx
// 0060a6a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060a6a4  51                   push ecx
// 0060a6a5  52                   push edx
// 0060a6a6  50                   push eax
// 0060a6a7  8bce                 mov ecx, esi
// 0060a6a9  e8b2fbffff           call 0x60a260
// 0060a6ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060a6b2  51                   push ecx
// 0060a6b3  8bce                 mov ecx, esi
// 0060a6b5  c706ec2d7c00         mov dword ptr [esi], 0x7c2dec
// 0060a6bb  e800fdffff           call 0x60a3c0
// 0060a6c0  8bc6                 mov eax, esi
// 0060a6c2  5e                   pop esi
// 0060a6c3  c21400               ret 0x14
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
