// roc 2007-03 004deb50  unit: seg_004d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004deb50
//
// 004deb50  51                   push ecx
// 004deb51  668b4120             mov ax, word ptr [ecx + 0x20]
// 004deb55  8b542408             mov edx, dword ptr [esp + 8]
// 004deb59  66890424             mov word ptr [esp], ax
// 004deb5d  52                   push edx
// 004deb5e  66c74424060100       mov word ptr [esp + 6], 1
// 004deb65  8b442404             mov eax, dword ptr [esp + 4]
// 004deb69  50                   push eax
// 004deb6a  68c0e94d00           push 0x4de9c0
// 004deb6f  e83cf2ffff           call 0x4dddb0
// 004deb74  59                   pop ecx
// 004deb75  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
