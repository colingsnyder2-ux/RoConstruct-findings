// roc 2007-08 004eaf80  unit: CylinderBuilder  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eaf80
//
// 004eaf80  51                   push ecx
// 004eaf81  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004eaf84  66890424             mov word ptr [esp], ax
// 004eaf88  6689442402           mov word ptr [esp + 2], ax
// 004eaf8d  8b442408             mov eax, dword ptr [esp + 8]
// 004eaf91  8b1424               mov edx, dword ptr [esp]
// 004eaf94  50                   push eax
// 004eaf95  52                   push edx
// 004eaf96  68f0ad4e00           push 0x4eadf0
// 004eaf9b  e880e3ffff           call 0x4e9320
// 004eafa0  59                   pop ecx
// 004eafa1  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildRight@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
