// roc 2007-08 004eafe0  unit: CylinderBuilder  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eafe0
//
// 004eafe0  51                   push ecx
// 004eafe1  668b4120             mov ax, word ptr [ecx + 0x20]
// 004eafe5  8b542408             mov edx, dword ptr [esp + 8]
// 004eafe9  66890424             mov word ptr [esp], ax
// 004eafed  52                   push edx
// 004eafee  66c74424060100       mov word ptr [esp + 6], 1
// 004eaff5  8b442404             mov eax, dword ptr [esp + 4]
// 004eaff9  50                   push eax
// 004eaffa  68e0ae4e00           push 0x4eaee0
// 004eafff  e85ce9ffff           call 0x4e9960
// 004eb004  59                   pop ecx
// 004eb005  c20400               ret 4
// library rbxgs-view/CylinderMesh.cpp (function ?buildTop@CylinderBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
