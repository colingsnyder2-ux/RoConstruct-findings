// roc 2007-03 004d7950  unit: seg_004d0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d7950
//
// 004d7950  83ec0c               sub esp, 0xc
// 004d7953  d94120               fld dword ptr [ecx + 0x20]
// 004d7956  b801000000           mov eax, 1
// 004d795b  66890424             mov word ptr [esp], ax
// 004d795f  d95c2404             fstp dword ptr [esp + 4]
// 004d7963  d9e8                 fld1 
// 004d7965  6689442402           mov word ptr [esp + 2], ax
// 004d796a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d796e  d95c2408             fstp dword ptr [esp + 8]
// 004d7972  8b1424               mov edx, dword ptr [esp]
// 004d7975  50                   push eax
// 004d7976  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d797a  52                   push edx
// 004d797b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d797f  50                   push eax
// 004d7980  52                   push edx
// 004d7981  e8daf0ffff           call 0x4d6a60
// 004d7986  83c40c               add esp, 0xc
// 004d7989  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildLeft@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
