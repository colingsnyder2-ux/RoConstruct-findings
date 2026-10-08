// roc 2007-03 004de110  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de110
//
// 004de110  51                   push ecx
// 004de111  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004de114  66890424             mov word ptr [esp], ax
// 004de118  6689442402           mov word ptr [esp + 2], ax
// 004de11d  8b442408             mov eax, dword ptr [esp + 8]
// 004de121  8b1424               mov edx, dword ptr [esp]
// 004de124  50                   push eax
// 004de125  52                   push edx
// 004de126  6810b94d00           push 0x4db910
// 004de12b  e8c0efffff           call 0x4dd0f0
// 004de130  59                   pop ecx
// 004de131  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
