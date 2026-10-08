// roc 2007-03 004dea90  unit: seg_004d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dea90
//
// 004dea90  51                   push ecx
// 004dea91  668b4120             mov ax, word ptr [ecx + 0x20]
// 004dea95  8b542408             mov edx, dword ptr [esp + 8]
// 004dea99  66890424             mov word ptr [esp], ax
// 004dea9d  52                   push edx
// 004dea9e  66c74424060100       mov word ptr [esp + 6], 1
// 004deaa5  8b442404             mov eax, dword ptr [esp + 4]
// 004deaa9  50                   push eax
// 004deaaa  68c0e94d00           push 0x4de9c0
// 004deaaf  e83ce6ffff           call 0x4dd0f0
// 004deab4  59                   pop ecx
// 004deab5  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
