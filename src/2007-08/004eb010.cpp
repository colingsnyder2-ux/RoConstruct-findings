// roc 2007-08 004eb010  unit: CylinderBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb010
//
// 004eb010  51                   push ecx
// 004eb011  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004eb014  66890424             mov word ptr [esp], ax
// 004eb018  6689442402           mov word ptr [esp + 2], ax
// 004eb01d  8b442408             mov eax, dword ptr [esp + 8]
// 004eb021  8b1424               mov edx, dword ptr [esp]
// 004eb024  50                   push eax
// 004eb025  52                   push edx
// 004eb026  68f0ad4e00           push 0x4eadf0
// 004eb02b  e850ecffff           call 0x4e9c80
// 004eb030  59                   pop ecx
// 004eb031  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
