// roc 2007-08 004ea610  unit: SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea610
//
// 004ea610  51                   push ecx
// 004ea611  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004ea614  66890424             mov word ptr [esp], ax
// 004ea618  6689442402           mov word ptr [esp + 2], ax
// 004ea61d  8b442408             mov eax, dword ptr [esp + 8]
// 004ea621  8b1424               mov edx, dword ptr [esp]
// 004ea624  50                   push eax
// 004ea625  52                   push edx
// 004ea626  68707e4e00           push 0x4e7e70
// 004ea62b  e810f0ffff           call 0x4e9640
// 004ea630  59                   pop ecx
// 004ea631  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
