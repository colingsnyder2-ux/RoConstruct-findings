// roc 2009-06 0045c770  unit: RBX::AdornG3D  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045c770
//
// 0045c770  56                   push esi
// 0045c771  8bf1                 mov esi, ecx
// 0045c773  8d4e08               lea ecx, [esi + 8]
// 0045c776  c70108a58b00         mov dword ptr [ecx], 0x8ba508
// 0045c77c  e87ffeffff           call 0x45c600
// 0045c781  f644240801           test byte ptr [esp + 8], 1
// 0045c786  7409                 je 0x45c791
// 0045c788  56                   push esi
// 0045c789  e8a4c22b00           call 0x718a32
// 0045c78e  83c404               add esp, 4
// 0045c791  8bc6                 mov eax, esi
// 0045c793  5e                   pop esi
// 0045c794  c20400               ret 4
// library rbxgs-view/View.cpp (function ??_GNode@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
