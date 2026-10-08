// roc 2007-08 004e7240  unit: TorsoBuilder  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7240
//
// 004e7240  83ec0c               sub esp, 0xc
// 004e7243  d94120               fld dword ptr [ecx + 0x20]
// 004e7246  b801000000           mov eax, 1
// 004e724b  66890424             mov word ptr [esp], ax
// 004e724f  d95c2404             fstp dword ptr [esp + 4]
// 004e7253  d94124               fld dword ptr [ecx + 0x24]
// 004e7256  6689442402           mov word ptr [esp + 2], ax
// 004e725b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e725f  d95c2408             fstp dword ptr [esp + 8]
// 004e7263  8b1424               mov edx, dword ptr [esp]
// 004e7266  50                   push eax
// 004e7267  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e726b  52                   push edx
// 004e726c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e7270  50                   push eax
// 004e7271  52                   push edx
// 004e7272  e809ecffff           call 0x4e5e80
// 004e7277  83c40c               add esp, 0xc
// 004e727a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
