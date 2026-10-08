// roc 2008-06 006458d0  unit: RBX::RigidJoint  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006458d0
//
// 006458d0  8bc1                 mov eax, ecx
// 006458d2  8b500c               mov edx, dword ptr [eax + 0xc]
// 006458d5  83ec60               sub esp, 0x60
// 006458d8  56                   push esi
// 006458d9  8d7028               lea esi, [eax + 0x28]
// 006458dc  3954246c             cmp dword ptr [esp + 0x6c], edx
// 006458e0  7403                 je 0x6458e5
// 006458e2  8d7058               lea esi, [eax + 0x58]
// 006458e5  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006458e9  3bca                 cmp ecx, edx
// 006458eb  7505                 jne 0x6458f2
// 006458ed  83c028               add eax, 0x28
// 006458f0  eb03                 jmp 0x6458f5
// 006458f2  83c058               add eax, 0x58
// 006458f5  50                   push eax
// 006458f6  8d442408             lea eax, [esp + 8]
// 006458fa  50                   push eax
// 006458fb  e8c029faff           call 0x5e82c0
// 00645900  8bc8                 mov ecx, eax
// 00645902  e8f90de3ff           call 0x476700
// 00645907  8d4c2434             lea ecx, [esp + 0x34]
// 0064590b  51                   push ecx
// 0064590c  8bce                 mov ecx, esi
// 0064590e  e81d2ae3ff           call 0x478330
// 00645913  8b742468             mov esi, dword ptr [esp + 0x68]
// 00645917  50                   push eax
// 00645918  56                   push esi
// 00645919  8d4c240c             lea ecx, [esp + 0xc]
// 0064591d  e8de0de3ff           call 0x476700
// 00645922  8bc6                 mov eax, esi
// 00645924  5e                   pop esi
// 00645925  83c460               add esp, 0x60
// 00645928  c20c00               ret 0xc
// library rbxgs/v8world\RigidJoint.cpp (function ?align@RigidJoint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
