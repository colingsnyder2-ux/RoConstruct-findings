// roc 2007-08 004e3ec0  unit: WedgeBuilder  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e3ec0
//
// 004e3ec0  83ec0c               sub esp, 0xc
// 004e3ec3  d94120               fld dword ptr [ecx + 0x20]
// 004e3ec6  b801000000           mov eax, 1
// 004e3ecb  66890424             mov word ptr [esp], ax
// 004e3ecf  d95c2404             fstp dword ptr [esp + 4]
// 004e3ed3  d9e8                 fld1 
// 004e3ed5  6689442402           mov word ptr [esp + 2], ax
// 004e3eda  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e3ede  d95c2408             fstp dword ptr [esp + 8]
// 004e3ee2  8b1424               mov edx, dword ptr [esp]
// 004e3ee5  50                   push eax
// 004e3ee6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3eea  52                   push edx
// 004e3eeb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e3eef  50                   push eax
// 004e3ef0  52                   push edx
// 004e3ef1  e8daf0ffff           call 0x4e2fd0
// 004e3ef6  83c40c               add esp, 0xc
// 004e3ef9  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildLeft@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
