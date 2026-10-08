// roc 2007-08 004ea640  unit: SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea640
//
// 004ea640  51                   push ecx
// 004ea641  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004ea644  66890424             mov word ptr [esp], ax
// 004ea648  6689442402           mov word ptr [esp + 2], ax
// 004ea64d  8b442408             mov eax, dword ptr [esp + 8]
// 004ea651  8b1424               mov edx, dword ptr [esp]
// 004ea654  50                   push eax
// 004ea655  52                   push edx
// 004ea656  68707e4e00           push 0x4e7e70
// 004ea65b  e800f3ffff           call 0x4e9960
// 004ea660  59                   pop ecx
// 004ea661  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
