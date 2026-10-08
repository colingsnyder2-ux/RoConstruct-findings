// roc 2007-08 004e72c0  unit: TorsoBuilder  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e72c0
//
// 004e72c0  83ec0c               sub esp, 0xc
// 004e72c3  d94120               fld dword ptr [ecx + 0x20]
// 004e72c6  b801000000           mov eax, 1
// 004e72cb  66890424             mov word ptr [esp], ax
// 004e72cf  d95c2404             fstp dword ptr [esp + 4]
// 004e72d3  d94124               fld dword ptr [ecx + 0x24]
// 004e72d6  6689442402           mov word ptr [esp + 2], ax
// 004e72db  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e72df  d95c2408             fstp dword ptr [esp + 8]
// 004e72e3  8b1424               mov edx, dword ptr [esp]
// 004e72e6  50                   push eax
// 004e72e7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e72eb  52                   push edx
// 004e72ec  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e72f0  50                   push eax
// 004e72f1  52                   push edx
// 004e72f2  e8d9f1ffff           call 0x4e64d0
// 004e72f7  83c40c               add esp, 0xc
// 004e72fa  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
