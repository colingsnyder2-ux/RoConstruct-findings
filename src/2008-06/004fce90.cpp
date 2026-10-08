// roc 2008-06 004fce90  unit: RBX::ViewNew::SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fce90
//
// 004fce90  51                   push ecx
// 004fce91  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fce94  66890424             mov word ptr [esp], ax
// 004fce98  6689442402           mov word ptr [esp + 2], ax
// 004fce9d  8b442408             mov eax, dword ptr [esp + 8]
// 004fcea1  8b1424               mov edx, dword ptr [esp]
// 004fcea4  50                   push eax
// 004fcea5  52                   push edx
// 004fcea6  68b0ab4f00           push 0x4fabb0
// 004fceab  e800efffff           call 0x4fbdb0
// 004fceb0  59                   pop ecx
// 004fceb1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
