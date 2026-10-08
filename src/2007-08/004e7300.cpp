// roc 2007-08 004e7300  unit: TorsoBuilder  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7300
//
// 004e7300  83ec0c               sub esp, 0xc
// 004e7303  d94120               fld dword ptr [ecx + 0x20]
// 004e7306  b801000000           mov eax, 1
// 004e730b  66890424             mov word ptr [esp], ax
// 004e730f  d95c2404             fstp dword ptr [esp + 4]
// 004e7313  d94124               fld dword ptr [ecx + 0x24]
// 004e7316  6689442402           mov word ptr [esp + 2], ax
// 004e731b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e731f  d95c2408             fstp dword ptr [esp + 8]
// 004e7323  8b1424               mov edx, dword ptr [esp]
// 004e7326  50                   push eax
// 004e7327  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e732b  52                   push edx
// 004e732c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e7330  50                   push eax
// 004e7331  52                   push edx
// 004e7332  e8c9f4ffff           call 0x4e6800
// 004e7337  83c40c               add esp, 0xc
// 004e733a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
