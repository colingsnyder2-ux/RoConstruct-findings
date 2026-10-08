// roc 2007-03 004d4fb0  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d4fb0
//
// 004d4fb0  83ec10               sub esp, 0x10
// 004d4fb3  56                   push esi
// 004d4fb4  8bf1                 mov esi, ecx
// 004d4fb6  8d4c2408             lea ecx, [esp + 8]
// 004d4fba  e8d1d3ffff           call 0x4d2390
// 004d4fbf  d9442408             fld dword ptr [esp + 8]
// 004d4fc3  668b542410           mov dx, word ptr [esp + 0x10]
// 004d4fc8  b801000000           mov eax, 1
// 004d4fcd  6689442404           mov word ptr [esp + 4], ax
// 004d4fd2  6689442406           mov word ptr [esp + 6], ax
// 004d4fd7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d4fdb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d4fdf  50                   push eax
// 004d4fe0  51                   push ecx
// 004d4fe1  83ec0c               sub esp, 0xc
// 004d4fe4  8bc4                 mov eax, esp
// 004d4fe6  d918                 fstp dword ptr [eax]
// 004d4fe8  8bce                 mov ecx, esi
// 004d4fea  d9442420             fld dword ptr [esp + 0x20]
// 004d4fee  66895008             mov word ptr [eax + 8], dx
// 004d4ff2  d95804               fstp dword ptr [eax + 4]
// 004d4ff5  e8d6ebffff           call 0x4d3bd0
// 004d4ffa  5e                   pop esi
// 004d4ffb  83c410               add esp, 0x10
// 004d4ffe  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
