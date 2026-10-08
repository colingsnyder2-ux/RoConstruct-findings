// roc 2007-08 004ead80  unit: SphereBuilder  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ead80
//
// 004ead80  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ead84  d9442408             fld dword ptr [esp + 8]
// 004ead88  56                   push esi
// 004ead89  50                   push eax
// 004ead8a  83ec0c               sub esp, 0xc
// 004ead8d  8bc4                 mov eax, esp
// 004ead8f  d918                 fstp dword ptr [eax]
// 004ead91  8bf1                 mov esi, ecx
// 004ead93  d9442420             fld dword ptr [esp + 0x20]
// 004ead97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ead9b  d95804               fstp dword ptr [eax + 4]
// 004ead9e  89642428             mov dword ptr [esp + 0x28], esp
// 004eada2  d9442424             fld dword ptr [esp + 0x24]
// 004eada6  51                   push ecx
// 004eada7  8bce                 mov ecx, esi
// 004eada9  d95808               fstp dword ptr [eax + 8]
// 004eadac  e84f3f0000           call 0x4eed00
// 004eadb1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eadb5  c1e802               shr eax, 2
// 004eadb8  89442408             mov dword ptr [esp + 8], eax
// 004eadbc  83f801               cmp eax, 1
// 004eadbf  c7064cf47900         mov dword ptr [esi], 0x79f44c
// 004eadc5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004eadcd  8d442418             lea eax, [esp + 0x18]
// 004eadd1  7204                 jb 0x4eadd7
// 004eadd3  8d442408             lea eax, [esp + 8]
// 004eadd7  8b10                 mov edx, dword ptr [eax]
// 004eadd9  895620               mov dword ptr [esi + 0x20], edx
// 004eaddc  8bc6                 mov eax, esi
// 004eadde  5e                   pop esi
// 004eaddf  c21800               ret 0x18
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderBuilder@@QAE@AAV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@VVector3@2@VRenderSurfaceTypes@View@RBX@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
