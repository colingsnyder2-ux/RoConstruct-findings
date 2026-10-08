// roc 2008-06 00646920  unit: RBX::RotatePJoint  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646920
//
// 00646920  8b442410             mov eax, dword ptr [esp + 0x10]
// 00646924  8b542408             mov edx, dword ptr [esp + 8]
// 00646928  56                   push esi
// 00646929  50                   push eax
// 0064692a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064692e  8bf1                 mov esi, ecx
// 00646930  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00646934  51                   push ecx
// 00646935  52                   push edx
// 00646936  50                   push eax
// 00646937  8bce                 mov ecx, esi
// 00646939  e882ecffff           call 0x6455c0
// 0064693e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00646942  51                   push ecx
// 00646943  8bce                 mov ecx, esi
// 00646945  c70614ae8400         mov dword ptr [esi], 0x84ae14
// 0064694b  e850ffffff           call 0x6468a0
// 00646950  8bc6                 mov eax, esi
// 00646952  5e                   pop esi
// 00646953  c21400               ret 0x14
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
