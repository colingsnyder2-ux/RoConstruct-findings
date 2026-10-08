// roc 2011-06 007ae000  unit: RBX::RigidJoint  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ae000
//
// 007ae000  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ae004  83ec60               sub esp, 0x60
// 007ae007  53                   push ebx
// 007ae008  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 007ae00c  56                   push esi
// 007ae00d  57                   push edi
// 007ae00e  50                   push eax
// 007ae00f  8d4c2440             lea ecx, [esp + 0x40]
// 007ae013  51                   push ecx
// 007ae014  8bcb                 mov ecx, ebx
// 007ae016  e8f55aefff           call 0x6a3b10
// 007ae01b  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007ae022  8bfa                 mov edi, edx
// 007ae024  8bf0                 mov esi, eax
// 007ae026  b909000000           mov ecx, 9
// 007ae02b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007ae02d  d94024               fld dword ptr [eax + 0x24]
// 007ae030  d95a24               fstp dword ptr [edx + 0x24]
// 007ae033  d94028               fld dword ptr [eax + 0x28]
// 007ae036  d95a28               fstp dword ptr [edx + 0x28]
// 007ae039  d9402c               fld dword ptr [eax + 0x2c]
// 007ae03c  d95a2c               fstp dword ptr [edx + 0x2c]
// 007ae03f  52                   push edx
// 007ae040  8d542410             lea edx, [esp + 0x10]
// 007ae044  52                   push edx
// 007ae045  8bcb                 mov ecx, ebx
// 007ae047  e8e46aefff           call 0x6a4b30
// 007ae04c  8bc8                 mov ecx, eax
// 007ae04e  e82dc9e5ff           call 0x60a980
// 007ae053  8d44240c             lea eax, [esp + 0xc]
// 007ae057  50                   push eax
// 007ae058  8d4c2440             lea ecx, [esp + 0x40]
// 007ae05c  51                   push ecx
// 007ae05d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007ae061  e8ca6aefff           call 0x6a4b30
// 007ae066  8bc8                 mov ecx, eax
// 007ae068  e843e3ebff           call 0x66c3b0
// 007ae06d  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007ae074  b909000000           mov ecx, 9
// 007ae079  8bf0                 mov esi, eax
// 007ae07b  8bfa                 mov edi, edx
// 007ae07d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007ae07f  d94024               fld dword ptr [eax + 0x24]
// 007ae082  d95a24               fstp dword ptr [edx + 0x24]
// 007ae085  d94028               fld dword ptr [eax + 0x28]
// 007ae088  d95a28               fstp dword ptr [edx + 0x28]
// 007ae08b  d9402c               fld dword ptr [eax + 0x2c]
// 007ae08e  d95a2c               fstp dword ptr [edx + 0x2c]
// 007ae091  5f                   pop edi
// 007ae092  5e                   pop esi
// 007ae093  5b                   pop ebx
// 007ae094  83c460               add esp, 0x60
// 007ae097  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?faceIdToCoords@RigidJoint@RBX@@KAXPAVPrimitive@2@0W4NormalId@2@1AAVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
