// roc 2007-08 004eb070  unit: CylinderBuilder  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb070
//
// 004eb070  51                   push ecx
// 004eb071  668b4120             mov ax, word ptr [ecx + 0x20]
// 004eb075  8b542408             mov edx, dword ptr [esp + 8]
// 004eb079  66890424             mov word ptr [esp], ax
// 004eb07d  52                   push edx
// 004eb07e  66c74424060100       mov word ptr [esp + 6], 1
// 004eb085  8b442404             mov eax, dword ptr [esp + 4]
// 004eb089  50                   push eax
// 004eb08a  68e0ae4e00           push 0x4eaee0
// 004eb08f  e82cf2ffff           call 0x4ea2c0
// 004eb094  59                   pop ecx
// 004eb095  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
