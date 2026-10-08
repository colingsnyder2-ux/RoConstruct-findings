// roc 2008-06 004fd620  unit: RBX::ViewNew::CylinderBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd620
//
// 004fd620  51                   push ecx
// 004fd621  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fd624  66890424             mov word ptr [esp], ax
// 004fd628  6689442402           mov word ptr [esp + 2], ax
// 004fd62d  8b442408             mov eax, dword ptr [esp + 8]
// 004fd631  8b1424               mov edx, dword ptr [esp]
// 004fd634  50                   push eax
// 004fd635  52                   push edx
// 004fd636  68a0d44f00           push 0x4fd4a0
// 004fd63b  e8e0efffff           call 0x4fc620
// 004fd640  59                   pop ecx
// 004fd641  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
