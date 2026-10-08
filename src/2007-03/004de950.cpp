// roc 2007-03 004de950  unit: seg_004d0000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de950
//
// 004de950  8b442414             mov eax, dword ptr [esp + 0x14]
// 004de954  d9442408             fld dword ptr [esp + 8]
// 004de958  56                   push esi
// 004de959  50                   push eax
// 004de95a  83ec0c               sub esp, 0xc
// 004de95d  8bc4                 mov eax, esp
// 004de95f  d918                 fstp dword ptr [eax]
// 004de961  8bf1                 mov esi, ecx
// 004de963  d9442420             fld dword ptr [esp + 0x20]
// 004de967  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004de96b  d95804               fstp dword ptr [eax + 4]
// 004de96e  89642428             mov dword ptr [esp + 0x28], esp
// 004de972  d9442424             fld dword ptr [esp + 0x24]
// 004de976  51                   push ecx
// 004de977  8bce                 mov ecx, esi
// 004de979  d95808               fstp dword ptr [eax + 8]
// 004de97c  e8af3d0000           call 0x4e2730
// 004de981  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004de985  c1e802               shr eax, 2
// 004de988  89442408             mov dword ptr [esp + 8], eax
// 004de98c  83f801               cmp eax, 1
// 004de98f  c70694ea7900         mov dword ptr [esi], 0x79ea94
// 004de995  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004de99d  8d442418             lea eax, [esp + 0x18]
// 004de9a1  7204                 jb 0x4de9a7
// 004de9a3  8d442408             lea eax, [esp + 8]
// 004de9a7  8b10                 mov edx, dword ptr [eax]
// 004de9a9  895620               mov dword ptr [esi + 0x20], edx
// 004de9ac  8bc6                 mov eax, esi
// 004de9ae  5e                   pop esi
// 004de9af  c21800               ret 0x18
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderBuilder@@QAE@AAV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@VVector3@2@VRenderSurfaceTypes@View@RBX@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
