// roc 2010-06 0075ca80  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ca80
//
// 0075ca80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075ca84  83ec60               sub esp, 0x60
// 0075ca87  53                   push ebx
// 0075ca88  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0075ca8c  56                   push esi
// 0075ca8d  57                   push edi
// 0075ca8e  50                   push eax
// 0075ca8f  8d4c2440             lea ecx, [esp + 0x40]
// 0075ca93  51                   push ecx
// 0075ca94  8bcb                 mov ecx, ebx
// 0075ca96  e8f5baf1ff           call 0x678590
// 0075ca9b  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0075caa2  8bfa                 mov edi, edx
// 0075caa4  8bf0                 mov esi, eax
// 0075caa6  b909000000           mov ecx, 9
// 0075caab  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0075caad  d94024               fld dword ptr [eax + 0x24]
// 0075cab0  d95a24               fstp dword ptr [edx + 0x24]
// 0075cab3  d94028               fld dword ptr [eax + 0x28]
// 0075cab6  d95a28               fstp dword ptr [edx + 0x28]
// 0075cab9  d9402c               fld dword ptr [eax + 0x2c]
// 0075cabc  d95a2c               fstp dword ptr [edx + 0x2c]
// 0075cabf  52                   push edx
// 0075cac0  8d542410             lea edx, [esp + 0x10]
// 0075cac4  52                   push edx
// 0075cac5  8bcb                 mov ecx, ebx
// 0075cac7  e854c9f1ff           call 0x679420
// 0075cacc  8bc8                 mov ecx, eax
// 0075cace  e8ed40d3ff           call 0x490bc0
// 0075cad3  8d44240c             lea eax, [esp + 0xc]
// 0075cad7  50                   push eax
// 0075cad8  8d4c2440             lea ecx, [esp + 0x40]
// 0075cadc  51                   push ecx
// 0075cadd  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0075cae1  e83ac9f1ff           call 0x679420
// 0075cae6  8bc8                 mov ecx, eax
// 0075cae8  e8f3a6edff           call 0x6371e0
// 0075caed  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0075caf4  b909000000           mov ecx, 9
// 0075caf9  8bf0                 mov esi, eax
// 0075cafb  8bfa                 mov edi, edx
// 0075cafd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0075caff  d94024               fld dword ptr [eax + 0x24]
// 0075cb02  d95a24               fstp dword ptr [edx + 0x24]
// 0075cb05  d94028               fld dword ptr [eax + 0x28]
// 0075cb08  d95a28               fstp dword ptr [edx + 0x28]
// 0075cb0b  d9402c               fld dword ptr [eax + 0x2c]
// 0075cb0e  d95a2c               fstp dword ptr [edx + 0x2c]
// 0075cb11  5f                   pop edi
// 0075cb12  5e                   pop esi
// 0075cb13  5b                   pop ebx
// 0075cb14  83c460               add esp, 0x60
// 0075cb17  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
