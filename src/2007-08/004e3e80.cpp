// roc 2007-08 004e3e80  unit: WedgeBuilder  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e3e80
//
// 004e3e80  83ec08               sub esp, 8
// 004e3e83  d94120               fld dword ptr [ecx + 0x20]
// 004e3e86  b801000000           mov eax, 1
// 004e3e8b  66890424             mov word ptr [esp], ax
// 004e3e8f  d95c2404             fstp dword ptr [esp + 4]
// 004e3e93  6689442402           mov word ptr [esp + 2], ax
// 004e3e98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3e9c  8b1424               mov edx, dword ptr [esp]
// 004e3e9f  50                   push eax
// 004e3ea0  8b442408             mov eax, dword ptr [esp + 8]
// 004e3ea4  52                   push edx
// 004e3ea5  50                   push eax
// 004e3ea6  e805eeffff           call 0x4e2cb0
// 004e3eab  83c408               add esp, 8
// 004e3eae  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildTop@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
