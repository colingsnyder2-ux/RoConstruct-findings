// roc 2008-06 004fcf80  unit: RBX::ViewNew::SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fcf80
//
// 004fcf80  51                   push ecx
// 004fcf81  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fcf84  66890424             mov word ptr [esp], ax
// 004fcf88  6689442402           mov word ptr [esp + 2], ax
// 004fcf8d  8b442408             mov eax, dword ptr [esp + 8]
// 004fcf91  8b1424               mov edx, dword ptr [esp]
// 004fcf94  50                   push eax
// 004fcf95  52                   push edx
// 004fcf96  68b0ab4f00           push 0x4fabb0
// 004fcf9b  e820fcffff           call 0x4fcbc0
// 004fcfa0  59                   pop ecx
// 004fcfa1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
