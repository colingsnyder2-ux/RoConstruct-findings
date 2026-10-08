// roc 2007-08 004e7340  unit: TorsoBuilder  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7340
//
// 004e7340  83ec0c               sub esp, 0xc
// 004e7343  d94120               fld dword ptr [ecx + 0x20]
// 004e7346  b801000000           mov eax, 1
// 004e734b  66890424             mov word ptr [esp], ax
// 004e734f  d95c2404             fstp dword ptr [esp + 4]
// 004e7353  d94124               fld dword ptr [ecx + 0x24]
// 004e7356  6689442402           mov word ptr [esp + 2], ax
// 004e735b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e735f  d95c2408             fstp dword ptr [esp + 8]
// 004e7363  8b1424               mov edx, dword ptr [esp]
// 004e7366  50                   push eax
// 004e7367  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e736b  52                   push edx
// 004e736c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e7370  50                   push eax
// 004e7371  52                   push edx
// 004e7372  e8b9f7ffff           call 0x4e6b30
// 004e7377  83c40c               add esp, 0xc
// 004e737a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
