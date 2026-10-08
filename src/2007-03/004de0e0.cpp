// roc 2007-03 004de0e0  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de0e0
//
// 004de0e0  51                   push ecx
// 004de0e1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004de0e4  66890424             mov word ptr [esp], ax
// 004de0e8  6689442402           mov word ptr [esp + 2], ax
// 004de0ed  8b442408             mov eax, dword ptr [esp + 8]
// 004de0f1  8b1424               mov edx, dword ptr [esp]
// 004de0f4  50                   push eax
// 004de0f5  52                   push edx
// 004de0f6  6810b94d00           push 0x4db910
// 004de0fb  e8c0ecffff           call 0x4dcdc0
// 004de100  59                   pop ecx
// 004de101  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
