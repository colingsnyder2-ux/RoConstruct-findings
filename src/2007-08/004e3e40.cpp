// roc 2007-08 004e3e40  unit: WedgeBuilder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e3e40
//
// 004e3e40  83ec0c               sub esp, 0xc
// 004e3e43  d94120               fld dword ptr [ecx + 0x20]
// 004e3e46  b801000000           mov eax, 1
// 004e3e4b  66890424             mov word ptr [esp], ax
// 004e3e4f  d95c2404             fstp dword ptr [esp + 4]
// 004e3e53  d9056c647900         fld dword ptr [0x79646c]
// 004e3e59  6689442402           mov word ptr [esp + 2], ax
// 004e3e5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e3e62  d95c2408             fstp dword ptr [esp + 8]
// 004e3e66  8b1424               mov edx, dword ptr [esp]
// 004e3e69  50                   push eax
// 004e3e6a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3e6e  52                   push edx
// 004e3e6f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e3e73  50                   push eax
// 004e3e74  52                   push edx
// 004e3e75  e816ebffff           call 0x4e2990
// 004e3e7a  83c40c               add esp, 0xc
// 004e3e7d  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildRight@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
