// roc 2007-03 004dada0  unit: seg_004d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dada0
//
// 004dada0  83ec0c               sub esp, 0xc
// 004dada3  d94120               fld dword ptr [ecx + 0x20]
// 004dada6  b801000000           mov eax, 1
// 004dadab  66890424             mov word ptr [esp], ax
// 004dadaf  d95c2404             fstp dword ptr [esp + 4]
// 004dadb3  d94124               fld dword ptr [ecx + 0x24]
// 004dadb6  6689442402           mov word ptr [esp + 2], ax
// 004dadbb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dadbf  d95c2408             fstp dword ptr [esp + 8]
// 004dadc3  8b1424               mov edx, dword ptr [esp]
// 004dadc6  50                   push eax
// 004dadc7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dadcb  52                   push edx
// 004dadcc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dadd0  50                   push eax
// 004dadd1  52                   push edx
// 004dadd2  e8b9f4ffff           call 0x4da290
// 004dadd7  83c40c               add esp, 0xc
// 004dadda  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
