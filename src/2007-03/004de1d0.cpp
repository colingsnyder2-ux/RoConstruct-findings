// roc 2007-03 004de1d0  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de1d0
//
// 004de1d0  51                   push ecx
// 004de1d1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004de1d4  66890424             mov word ptr [esp], ax
// 004de1d8  6689442402           mov word ptr [esp + 2], ax
// 004de1dd  8b442408             mov eax, dword ptr [esp + 8]
// 004de1e1  8b1424               mov edx, dword ptr [esp]
// 004de1e4  50                   push eax
// 004de1e5  52                   push edx
// 004de1e6  6810b94d00           push 0x4db910
// 004de1eb  e8c0fbffff           call 0x4dddb0
// 004de1f0  59                   pop ecx
// 004de1f1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
