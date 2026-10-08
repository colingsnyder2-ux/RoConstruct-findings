// roc 2007-03 004dad20  unit: seg_004d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004dad20
//
// 004dad20  83ec0c               sub esp, 0xc
// 004dad23  d94120               fld dword ptr [ecx + 0x20]
// 004dad26  b801000000           mov eax, 1
// 004dad2b  66890424             mov word ptr [esp], ax
// 004dad2f  d95c2404             fstp dword ptr [esp + 4]
// 004dad33  d94124               fld dword ptr [ecx + 0x24]
// 004dad36  6689442402           mov word ptr [esp + 2], ax
// 004dad3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dad3f  d95c2408             fstp dword ptr [esp + 8]
// 004dad43  8b1424               mov edx, dword ptr [esp]
// 004dad46  50                   push eax
// 004dad47  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dad4b  52                   push edx
// 004dad4c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dad50  50                   push eax
// 004dad51  52                   push edx
// 004dad52  e8b9eeffff           call 0x4d9c10
// 004dad57  83c40c               add esp, 0xc
// 004dad5a  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
