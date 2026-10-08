// roc 2007-03 004dad60  unit: seg_004d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dad60
//
// 004dad60  83ec0c               sub esp, 0xc
// 004dad63  d94120               fld dword ptr [ecx + 0x20]
// 004dad66  b801000000           mov eax, 1
// 004dad6b  66890424             mov word ptr [esp], ax
// 004dad6f  d95c2404             fstp dword ptr [esp + 4]
// 004dad73  d94124               fld dword ptr [ecx + 0x24]
// 004dad76  6689442402           mov word ptr [esp + 2], ax
// 004dad7b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dad7f  d95c2408             fstp dword ptr [esp + 8]
// 004dad83  8b1424               mov edx, dword ptr [esp]
// 004dad86  50                   push eax
// 004dad87  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dad8b  52                   push edx
// 004dad8c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dad90  50                   push eax
// 004dad91  52                   push edx
// 004dad92  e8b9f1ffff           call 0x4d9f50
// 004dad97  83c40c               add esp, 0xc
// 004dad9a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
