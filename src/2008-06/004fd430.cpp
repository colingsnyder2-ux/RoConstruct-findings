// roc 2008-06 004fd430  unit: RBX::ViewNew::SphereBuilder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd430
//
// 004fd430  51                   push ecx
// 004fd431  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fd435  d944240c             fld dword ptr [esp + 0xc]
// 004fd439  56                   push esi
// 004fd43a  50                   push eax
// 004fd43b  83ec0c               sub esp, 0xc
// 004fd43e  8bc4                 mov eax, esp
// 004fd440  d918                 fstp dword ptr [eax]
// 004fd442  8bf1                 mov esi, ecx
// 004fd444  d9442424             fld dword ptr [esp + 0x24]
// 004fd448  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fd44c  d95804               fstp dword ptr [eax + 4]
// 004fd44f  89642414             mov dword ptr [esp + 0x14], esp
// 004fd453  d9442428             fld dword ptr [esp + 0x28]
// 004fd457  51                   push ecx
// 004fd458  8bce                 mov ecx, esi
// 004fd45a  d95808               fstp dword ptr [eax + 8]
// 004fd45d  e81e390000           call 0x500d80
// 004fd462  8b442420             mov eax, dword ptr [esp + 0x20]
// 004fd466  c1e802               shr eax, 2
// 004fd469  8944240c             mov dword ptr [esp + 0xc], eax
// 004fd46d  83f801               cmp eax, 1
// 004fd470  c70664718200         mov dword ptr [esi], 0x827164
// 004fd476  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004fd47e  8d44241c             lea eax, [esp + 0x1c]
// 004fd482  7204                 jb 0x4fd488
// 004fd484  8d44240c             lea eax, [esp + 0xc]
// 004fd488  8b10                 mov edx, dword ptr [eax]
// 004fd48a  895620               mov dword ptr [esi + 0x20], edx
// 004fd48d  8bc6                 mov eax, esi
// 004fd48f  5e                   pop esi
// 004fd490  59                   pop ecx
// 004fd491  c21800               ret 0x18
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderBuilder@@QAE@AAV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@VVector3@2@VRenderSurfaceTypes@View@RBX@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
