// roc 2007-08 004e3f00  unit: WedgeBuilder  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e3f00
//
// 004e3f00  83ec08               sub esp, 8
// 004e3f03  d94120               fld dword ptr [ecx + 0x20]
// 004e3f06  b801000000           mov eax, 1
// 004e3f0b  66890424             mov word ptr [esp], ax
// 004e3f0f  d95c2404             fstp dword ptr [esp + 4]
// 004e3f13  6689442402           mov word ptr [esp + 2], ax
// 004e3f18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3f1c  8b1424               mov edx, dword ptr [esp]
// 004e3f1f  50                   push eax
// 004e3f20  8b442408             mov eax, dword ptr [esp + 8]
// 004e3f24  52                   push edx
// 004e3f25  50                   push eax
// 004e3f26  e8d5f3ffff           call 0x4e3300
// 004e3f2b  83c408               add esp, 8
// 004e3f2e  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildTop@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
