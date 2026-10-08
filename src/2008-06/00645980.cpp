// roc 2008-06 00645980  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645980
//
// 00645980  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00645984  83ec60               sub esp, 0x60
// 00645987  53                   push ebx
// 00645988  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0064598c  56                   push esi
// 0064598d  57                   push edi
// 0064598e  50                   push eax
// 0064598f  8d4c2440             lea ecx, [esp + 0x40]
// 00645993  51                   push ecx
// 00645994  8bcb                 mov ecx, ebx
// 00645996  e8e51cfaff           call 0x5e7680
// 0064599b  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 006459a2  8bfa                 mov edi, edx
// 006459a4  8bf0                 mov esi, eax
// 006459a6  b909000000           mov ecx, 9
// 006459ab  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006459ad  d94024               fld dword ptr [eax + 0x24]
// 006459b0  d95a24               fstp dword ptr [edx + 0x24]
// 006459b3  d94028               fld dword ptr [eax + 0x28]
// 006459b6  d95a28               fstp dword ptr [edx + 0x28]
// 006459b9  d9402c               fld dword ptr [eax + 0x2c]
// 006459bc  d95a2c               fstp dword ptr [edx + 0x2c]
// 006459bf  52                   push edx
// 006459c0  8d542410             lea edx, [esp + 0x10]
// 006459c4  52                   push edx
// 006459c5  8bcb                 mov ecx, ebx
// 006459c7  e8f428faff           call 0x5e82c0
// 006459cc  8bc8                 mov ecx, eax
// 006459ce  e82d0de3ff           call 0x476700
// 006459d3  8d44240c             lea eax, [esp + 0xc]
// 006459d7  50                   push eax
// 006459d8  8d4c2440             lea ecx, [esp + 0x40]
// 006459dc  51                   push ecx
// 006459dd  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 006459e1  e8da28faff           call 0x5e82c0
// 006459e6  8bc8                 mov ecx, eax
// 006459e8  e8038ffcff           call 0x60e8f0
// 006459ed  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 006459f4  b909000000           mov ecx, 9
// 006459f9  8bf0                 mov esi, eax
// 006459fb  8bfa                 mov edi, edx
// 006459fd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006459ff  d94024               fld dword ptr [eax + 0x24]
// 00645a02  d95a24               fstp dword ptr [edx + 0x24]
// 00645a05  d94028               fld dword ptr [eax + 0x28]
// 00645a08  d95a28               fstp dword ptr [edx + 0x28]
// 00645a0b  d9402c               fld dword ptr [eax + 0x2c]
// 00645a0e  d95a2c               fstp dword ptr [edx + 0x2c]
// 00645a11  5f                   pop edi
// 00645a12  5e                   pop esi
// 00645a13  5b                   pop ebx
// 00645a14  83c460               add esp, 0x60
// 00645a17  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
