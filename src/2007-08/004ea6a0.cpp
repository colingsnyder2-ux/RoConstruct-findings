// roc 2007-08 004ea6a0  unit: SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea6a0
//
// 004ea6a0  51                   push ecx
// 004ea6a1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004ea6a4  66890424             mov word ptr [esp], ax
// 004ea6a8  6689442402           mov word ptr [esp + 2], ax
// 004ea6ad  8b442408             mov eax, dword ptr [esp + 8]
// 004ea6b1  8b1424               mov edx, dword ptr [esp]
// 004ea6b4  50                   push eax
// 004ea6b5  52                   push edx
// 004ea6b6  68707e4e00           push 0x4e7e70
// 004ea6bb  e8e0f8ffff           call 0x4e9fa0
// 004ea6c0  59                   pop ecx
// 004ea6c1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
