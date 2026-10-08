// roc 2007-03 004de140  unit: seg_004d0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004de140
//
// 004de140  51                   push ecx
// 004de141  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004de144  66890424             mov word ptr [esp], ax
// 004de148  6689442402           mov word ptr [esp + 2], ax
// 004de14d  8b442408             mov eax, dword ptr [esp + 8]
// 004de151  8b1424               mov edx, dword ptr [esp]
// 004de154  50                   push eax
// 004de155  52                   push edx
// 004de156  6810b94d00           push 0x4db910
// 004de15b  e8c0f2ffff           call 0x4dd420
// 004de160  59                   pop ecx
// 004de161  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
