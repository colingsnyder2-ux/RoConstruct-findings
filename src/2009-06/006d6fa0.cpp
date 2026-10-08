// roc 2009-06 006d6fa0  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d6fa0
//
// 006d6fa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d6fa4  83ec60               sub esp, 0x60
// 006d6fa7  53                   push ebx
// 006d6fa8  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 006d6fac  56                   push esi
// 006d6fad  57                   push edi
// 006d6fae  50                   push eax
// 006d6faf  8d4c2440             lea ecx, [esp + 0x40]
// 006d6fb3  51                   push ecx
// 006d6fb4  8bcb                 mov ecx, ebx
// 006d6fb6  e8f594f9ff           call 0x6704b0
// 006d6fbb  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 006d6fc2  8bfa                 mov edi, edx
// 006d6fc4  8bf0                 mov esi, eax
// 006d6fc6  b909000000           mov ecx, 9
// 006d6fcb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006d6fcd  d94024               fld dword ptr [eax + 0x24]
// 006d6fd0  d95a24               fstp dword ptr [edx + 0x24]
// 006d6fd3  d94028               fld dword ptr [eax + 0x28]
// 006d6fd6  d95a28               fstp dword ptr [edx + 0x28]
// 006d6fd9  d9402c               fld dword ptr [eax + 0x2c]
// 006d6fdc  d95a2c               fstp dword ptr [edx + 0x2c]
// 006d6fdf  52                   push edx
// 006d6fe0  8d542410             lea edx, [esp + 0x10]
// 006d6fe4  52                   push edx
// 006d6fe5  8bcb                 mov ecx, ebx
// 006d6fe7  e8249ff9ff           call 0x670f10
// 006d6fec  8bc8                 mov ecx, eax
// 006d6fee  e87d6ddcff           call 0x49dd70
// 006d6ff3  8d44240c             lea eax, [esp + 0xc]
// 006d6ff7  50                   push eax
// 006d6ff8  8d4c2440             lea ecx, [esp + 0x40]
// 006d6ffc  51                   push ecx
// 006d6ffd  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 006d7001  e80a9ff9ff           call 0x670f10
// 006d7006  8bc8                 mov ecx, eax
// 006d7008  e8034ff8ff           call 0x65bf10
// 006d700d  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 006d7014  b909000000           mov ecx, 9
// 006d7019  8bf0                 mov esi, eax
// 006d701b  8bfa                 mov edi, edx
// 006d701d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006d701f  d94024               fld dword ptr [eax + 0x24]
// 006d7022  d95a24               fstp dword ptr [edx + 0x24]
// 006d7025  d94028               fld dword ptr [eax + 0x28]
// 006d7028  d95a28               fstp dword ptr [edx + 0x28]
// 006d702b  d9402c               fld dword ptr [eax + 0x2c]
// 006d702e  d95a2c               fstp dword ptr [edx + 0x2c]
// 006d7031  5f                   pop edi
// 006d7032  5e                   pop esi
// 006d7033  5b                   pop ebx
// 006d7034  83c460               add esp, 0x60
// 006d7037  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
