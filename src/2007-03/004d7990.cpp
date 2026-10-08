// roc 2007-03 004d7990  unit: seg_004d0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d7990
//
// 004d7990  83ec08               sub esp, 8
// 004d7993  d94120               fld dword ptr [ecx + 0x20]
// 004d7996  b801000000           mov eax, 1
// 004d799b  66890424             mov word ptr [esp], ax
// 004d799f  d95c2404             fstp dword ptr [esp + 4]
// 004d79a3  6689442402           mov word ptr [esp + 2], ax
// 004d79a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d79ac  8b1424               mov edx, dword ptr [esp]
// 004d79af  50                   push eax
// 004d79b0  8b442408             mov eax, dword ptr [esp + 8]
// 004d79b4  52                   push edx
// 004d79b5  50                   push eax
// 004d79b6  e8e5f3ffff           call 0x4d6da0
// 004d79bb  83c408               add esp, 8
// 004d79be  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildTop@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
