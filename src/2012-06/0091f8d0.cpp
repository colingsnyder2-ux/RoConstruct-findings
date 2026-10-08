// roc 2012-06 0091f8d0  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091f8d0
//
// 0091f8d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0091f8d4  83ec60               sub esp, 0x60
// 0091f8d7  53                   push ebx
// 0091f8d8  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0091f8dc  56                   push esi
// 0091f8dd  57                   push edi
// 0091f8de  50                   push eax
// 0091f8df  8d4c2440             lea ecx, [esp + 0x40]
// 0091f8e3  51                   push ecx
// 0091f8e4  8bcb                 mov ecx, ebx
// 0091f8e6  e885abe9ff           call 0x7ba470
// 0091f8eb  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0091f8f2  8bfa                 mov edi, edx
// 0091f8f4  8bf0                 mov esi, eax
// 0091f8f6  b909000000           mov ecx, 9
// 0091f8fb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0091f8fd  d94024               fld dword ptr [eax + 0x24]
// 0091f900  d95a24               fstp dword ptr [edx + 0x24]
// 0091f903  d94028               fld dword ptr [eax + 0x28]
// 0091f906  d95a28               fstp dword ptr [edx + 0x28]
// 0091f909  d9402c               fld dword ptr [eax + 0x2c]
// 0091f90c  d95a2c               fstp dword ptr [edx + 0x2c]
// 0091f90f  52                   push edx
// 0091f910  8d542410             lea edx, [esp + 0x10]
// 0091f914  52                   push edx
// 0091f915  8bcb                 mov ecx, ebx
// 0091f917  e8f4bde9ff           call 0x7bb710
// 0091f91c  8bc8                 mov ecx, eax
// 0091f91e  e80d1fbaff           call 0x4c1830
// 0091f923  8d44240c             lea eax, [esp + 0xc]
// 0091f927  50                   push eax
// 0091f928  8d4c2440             lea ecx, [esp + 0x40]
// 0091f92c  51                   push ecx
// 0091f92d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0091f931  e8dabde9ff           call 0x7bb710
// 0091f936  8bc8                 mov ecx, eax
// 0091f938  e8c37fbfff           call 0x517900
// 0091f93d  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0091f944  b909000000           mov ecx, 9
// 0091f949  8bf0                 mov esi, eax
// 0091f94b  8bfa                 mov edi, edx
// 0091f94d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0091f94f  d94024               fld dword ptr [eax + 0x24]
// 0091f952  d95a24               fstp dword ptr [edx + 0x24]
// 0091f955  d94028               fld dword ptr [eax + 0x28]
// 0091f958  d95a28               fstp dword ptr [edx + 0x28]
// 0091f95b  d9402c               fld dword ptr [eax + 0x2c]
// 0091f95e  d95a2c               fstp dword ptr [edx + 0x2c]
// 0091f961  5f                   pop edi
// 0091f962  5e                   pop esi
// 0091f963  5b                   pop ebx
// 0091f964  83c460               add esp, 0x60
// 0091f967  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
