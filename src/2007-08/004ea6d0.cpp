// roc 2007-08 004ea6d0  unit: SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea6d0
//
// 004ea6d0  51                   push ecx
// 004ea6d1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004ea6d4  66890424             mov word ptr [esp], ax
// 004ea6d8  6689442402           mov word ptr [esp + 2], ax
// 004ea6dd  8b442408             mov eax, dword ptr [esp + 8]
// 004ea6e1  8b1424               mov edx, dword ptr [esp]
// 004ea6e4  50                   push eax
// 004ea6e5  52                   push edx
// 004ea6e6  68707e4e00           push 0x4e7e70
// 004ea6eb  e8d0fbffff           call 0x4ea2c0
// 004ea6f0  59                   pop ecx
// 004ea6f1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
