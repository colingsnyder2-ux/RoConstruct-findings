// roc 2007-03 004dea60  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dea60
//
// 004dea60  51                   push ecx
// 004dea61  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004dea64  66890424             mov word ptr [esp], ax
// 004dea68  6689442402           mov word ptr [esp + 2], ax
// 004dea6d  8b442408             mov eax, dword ptr [esp + 8]
// 004dea71  8b1424               mov edx, dword ptr [esp]
// 004dea74  50                   push eax
// 004dea75  52                   push edx
// 004dea76  6860e84d00           push 0x4de860
// 004dea7b  e840e3ffff           call 0x4dcdc0
// 004dea80  59                   pop ecx
// 004dea81  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
