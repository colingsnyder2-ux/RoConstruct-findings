// roc 2007-08 004eb040  unit: CylinderBuilder  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb040
//
// 004eb040  51                   push ecx
// 004eb041  668b4120             mov ax, word ptr [ecx + 0x20]
// 004eb045  8b542408             mov edx, dword ptr [esp + 8]
// 004eb049  66890424             mov word ptr [esp], ax
// 004eb04d  52                   push edx
// 004eb04e  66c74424060100       mov word ptr [esp + 6], 1
// 004eb055  8b442404             mov eax, dword ptr [esp + 4]
// 004eb059  50                   push eax
// 004eb05a  68e0ae4e00           push 0x4eaee0
// 004eb05f  e83cefffff           call 0x4e9fa0
// 004eb064  59                   pop ecx
// 004eb065  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
