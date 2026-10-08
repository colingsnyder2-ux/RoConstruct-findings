// roc 2008-06 0045d820  unit: RBX::AdornG3D  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045d820
//
// 0045d820  56                   push esi
// 0045d821  8bf1                 mov esi, ecx
// 0045d823  8d4e08               lea ecx, [esi + 8]
// 0045d826  c701d89c8100         mov dword ptr [ecx], 0x819cd8
// 0045d82c  e84feeffff           call 0x45c680
// 0045d831  f644240801           test byte ptr [esp + 8], 1
// 0045d836  7409                 je 0x45d841
// 0045d838  56                   push esi
// 0045d839  e83c2e2400           call 0x6a067a
// 0045d83e  83c404               add esp, 4
// 0045d841  8bc6                 mov eax, esi
// 0045d843  5e                   pop esi
// 0045d844  c20400               ret 4
// library rbxgs-view/View.cpp (function ??_GNode@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
