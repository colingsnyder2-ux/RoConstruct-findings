// roc 2007-08 004ea670  unit: SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea670
//
// 004ea670  51                   push ecx
// 004ea671  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004ea674  66890424             mov word ptr [esp], ax
// 004ea678  6689442402           mov word ptr [esp + 2], ax
// 004ea67d  8b442408             mov eax, dword ptr [esp + 8]
// 004ea681  8b1424               mov edx, dword ptr [esp]
// 004ea684  50                   push eax
// 004ea685  52                   push edx
// 004ea686  68707e4e00           push 0x4e7e70
// 004ea68b  e8f0f5ffff           call 0x4e9c80
// 004ea690  59                   pop ecx
// 004ea691  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
