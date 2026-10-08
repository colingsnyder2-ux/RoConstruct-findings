// roc 2007-03 004deaf0  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004deaf0
//
// 004deaf0  51                   push ecx
// 004deaf1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004deaf4  66890424             mov word ptr [esp], ax
// 004deaf8  6689442402           mov word ptr [esp + 2], ax
// 004deafd  8b442408             mov eax, dword ptr [esp + 8]
// 004deb01  8b1424               mov edx, dword ptr [esp]
// 004deb04  50                   push eax
// 004deb05  52                   push edx
// 004deb06  6860e84d00           push 0x4de860
// 004deb0b  e840ecffff           call 0x4dd750
// 004deb10  59                   pop ecx
// 004deb11  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
