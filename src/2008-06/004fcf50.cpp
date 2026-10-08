// roc 2008-06 004fcf50  unit: RBX::ViewNew::SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fcf50
//
// 004fcf50  51                   push ecx
// 004fcf51  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fcf54  66890424             mov word ptr [esp], ax
// 004fcf58  6689442402           mov word ptr [esp + 2], ax
// 004fcf5d  8b442408             mov eax, dword ptr [esp + 8]
// 004fcf61  8b1424               mov edx, dword ptr [esp]
// 004fcf64  50                   push eax
// 004fcf65  52                   push edx
// 004fcf66  68b0ab4f00           push 0x4fabb0
// 004fcf6b  e880f9ffff           call 0x4fc8f0
// 004fcf70  59                   pop ecx
// 004fcf71  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
