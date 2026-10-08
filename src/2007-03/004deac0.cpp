// roc 2007-03 004deac0  unit: seg_004d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004deac0
//
// 004deac0  51                   push ecx
// 004deac1  668b4120             mov ax, word ptr [ecx + 0x20]
// 004deac5  8b542408             mov edx, dword ptr [esp + 8]
// 004deac9  66890424             mov word ptr [esp], ax
// 004deacd  52                   push edx
// 004deace  66c74424060100       mov word ptr [esp + 6], 1
// 004dead5  8b442404             mov eax, dword ptr [esp + 4]
// 004dead9  50                   push eax
// 004deada  68c0e94d00           push 0x4de9c0
// 004deadf  e83ce9ffff           call 0x4dd420
// 004deae4  59                   pop ecx
// 004deae5  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
