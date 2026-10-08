// roc 2008-06 004fcec0  unit: RBX::ViewNew::SphereBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fcec0
//
// 004fcec0  51                   push ecx
// 004fcec1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fcec4  66890424             mov word ptr [esp], ax
// 004fcec8  6689442402           mov word ptr [esp + 2], ax
// 004fcecd  8b442408             mov eax, dword ptr [esp + 8]
// 004fced1  8b1424               mov edx, dword ptr [esp]
// 004fced4  50                   push eax
// 004fced5  52                   push edx
// 004fced6  68b0ab4f00           push 0x4fabb0
// 004fcedb  e8a0f1ffff           call 0x4fc080
// 004fcee0  59                   pop ecx
// 004fcee1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
