// roc 2007-03 004de1a0  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de1a0
//
// 004de1a0  51                   push ecx
// 004de1a1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004de1a4  66890424             mov word ptr [esp], ax
// 004de1a8  6689442402           mov word ptr [esp + 2], ax
// 004de1ad  8b442408             mov eax, dword ptr [esp + 8]
// 004de1b1  8b1424               mov edx, dword ptr [esp]
// 004de1b4  50                   push eax
// 004de1b5  52                   push edx
// 004de1b6  6810b94d00           push 0x4db910
// 004de1bb  e8c0f8ffff           call 0x4dda80
// 004de1c0  59                   pop ecx
// 004de1c1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
