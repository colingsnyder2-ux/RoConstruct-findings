// roc 2007-03 004dade0  unit: seg_004d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dade0
//
// 004dade0  83ec0c               sub esp, 0xc
// 004dade3  d94120               fld dword ptr [ecx + 0x20]
// 004dade6  b801000000           mov eax, 1
// 004dadeb  66890424             mov word ptr [esp], ax
// 004dadef  d95c2404             fstp dword ptr [esp + 4]
// 004dadf3  d94124               fld dword ptr [ecx + 0x24]
// 004dadf6  6689442402           mov word ptr [esp + 2], ax
// 004dadfb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dadff  d95c2408             fstp dword ptr [esp + 8]
// 004dae03  8b1424               mov edx, dword ptr [esp]
// 004dae06  50                   push eax
// 004dae07  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dae0b  52                   push edx
// 004dae0c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dae10  50                   push eax
// 004dae11  52                   push edx
// 004dae12  e8b9f7ffff           call 0x4da5d0
// 004dae17  83c40c               add esp, 0xc
// 004dae1a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
