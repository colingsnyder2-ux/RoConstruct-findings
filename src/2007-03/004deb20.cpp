// roc 2007-03 004deb20  unit: seg_004d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004deb20
//
// 004deb20  51                   push ecx
// 004deb21  668b4120             mov ax, word ptr [ecx + 0x20]
// 004deb25  8b542408             mov edx, dword ptr [esp + 8]
// 004deb29  66890424             mov word ptr [esp], ax
// 004deb2d  52                   push edx
// 004deb2e  66c74424060100       mov word ptr [esp + 6], 1
// 004deb35  8b442404             mov eax, dword ptr [esp + 4]
// 004deb39  50                   push eax
// 004deb3a  68c0e94d00           push 0x4de9c0
// 004deb3f  e83cefffff           call 0x4dda80
// 004deb44  59                   pop ecx
// 004deb45  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
