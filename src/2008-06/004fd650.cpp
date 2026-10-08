// roc 2008-06 004fd650  unit: RBX::ViewNew::CylinderBuilder  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd650
//
// 004fd650  51                   push ecx
// 004fd651  668b4120             mov ax, word ptr [ecx + 0x20]
// 004fd655  66890424             mov word ptr [esp], ax
// 004fd659  8b442408             mov eax, dword ptr [esp + 8]
// 004fd65d  ba01000000           mov edx, 1
// 004fd662  6689542402           mov word ptr [esp + 2], dx
// 004fd667  8b1424               mov edx, dword ptr [esp]
// 004fd66a  50                   push eax
// 004fd66b  52                   push edx
// 004fd66c  6830d54f00           push 0x4fd530
// 004fd671  e87af2ffff           call 0x4fc8f0
// 004fd676  59                   pop ecx
// 004fd677  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
