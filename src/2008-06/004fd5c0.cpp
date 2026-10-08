// roc 2008-06 004fd5c0  unit: RBX::ViewNew::CylinderBuilder  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd5c0
//
// 004fd5c0  51                   push ecx
// 004fd5c1  668b4120             mov ax, word ptr [ecx + 0x20]
// 004fd5c5  66890424             mov word ptr [esp], ax
// 004fd5c9  8b442408             mov eax, dword ptr [esp + 8]
// 004fd5cd  ba01000000           mov edx, 1
// 004fd5d2  6689542402           mov word ptr [esp + 2], dx
// 004fd5d7  8b1424               mov edx, dword ptr [esp]
// 004fd5da  50                   push eax
// 004fd5db  52                   push edx
// 004fd5dc  6830d54f00           push 0x4fd530
// 004fd5e1  e89aeaffff           call 0x4fc080
// 004fd5e6  59                   pop ecx
// 004fd5e7  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
