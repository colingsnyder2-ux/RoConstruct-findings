// roc 2009-12 007b4ae0  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b4ae0
//
// 007b4ae0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b4ae4  83ec60               sub esp, 0x60
// 007b4ae7  53                   push ebx
// 007b4ae8  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 007b4aec  56                   push esi
// 007b4aed  57                   push edi
// 007b4aee  50                   push eax
// 007b4aef  8d4c2440             lea ecx, [esp + 0x40]
// 007b4af3  51                   push ecx
// 007b4af4  8bcb                 mov ecx, ebx
// 007b4af6  e8d583f3ff           call 0x6eced0
// 007b4afb  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007b4b02  8bfa                 mov edi, edx
// 007b4b04  8bf0                 mov esi, eax
// 007b4b06  b909000000           mov ecx, 9
// 007b4b0b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007b4b0d  d94024               fld dword ptr [eax + 0x24]
// 007b4b10  d95a24               fstp dword ptr [edx + 0x24]
// 007b4b13  d94028               fld dword ptr [eax + 0x28]
// 007b4b16  d95a28               fstp dword ptr [edx + 0x28]
// 007b4b19  d9402c               fld dword ptr [eax + 0x2c]
// 007b4b1c  d95a2c               fstp dword ptr [edx + 0x2c]
// 007b4b1f  52                   push edx
// 007b4b20  8d542410             lea edx, [esp + 0x10]
// 007b4b24  52                   push edx
// 007b4b25  8bcb                 mov ecx, ebx
// 007b4b27  e86490f3ff           call 0x6edb90
// 007b4b2c  8bc8                 mov ecx, eax
// 007b4b2e  e8ad8dccff           call 0x47d8e0
// 007b4b33  8d44240c             lea eax, [esp + 0xc]
// 007b4b37  50                   push eax
// 007b4b38  8d4c2440             lea ecx, [esp + 0x40]
// 007b4b3c  51                   push ecx
// 007b4b3d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b4b41  e84a90f3ff           call 0x6edb90
// 007b4b46  8bc8                 mov ecx, eax
// 007b4b48  e823dad0ff           call 0x4c2570
// 007b4b4d  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007b4b54  b909000000           mov ecx, 9
// 007b4b59  8bf0                 mov esi, eax
// 007b4b5b  8bfa                 mov edi, edx
// 007b4b5d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007b4b5f  d94024               fld dword ptr [eax + 0x24]
// 007b4b62  d95a24               fstp dword ptr [edx + 0x24]
// 007b4b65  d94028               fld dword ptr [eax + 0x28]
// 007b4b68  d95a28               fstp dword ptr [edx + 0x28]
// 007b4b6b  d9402c               fld dword ptr [eax + 0x2c]
// 007b4b6e  d95a2c               fstp dword ptr [edx + 0x2c]
// 007b4b71  5f                   pop edi
// 007b4b72  5e                   pop esi
// 007b4b73  5b                   pop ebx
// 007b4b74  83c460               add esp, 0x60
// 007b4b77  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
