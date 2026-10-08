// roc 2007-08 004e1540  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1540
//
// 004e1540  83ec10               sub esp, 0x10
// 004e1543  56                   push esi
// 004e1544  8bf1                 mov esi, ecx
// 004e1546  8d4c2408             lea ecx, [esp + 8]
// 004e154a  e871d4ffff           call 0x4de9c0
// 004e154f  d9442408             fld dword ptr [esp + 8]
// 004e1553  668b542410           mov dx, word ptr [esp + 0x10]
// 004e1558  b801000000           mov eax, 1
// 004e155d  6689442404           mov word ptr [esp + 4], ax
// 004e1562  6689442406           mov word ptr [esp + 6], ax
// 004e1567  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e156b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e156f  50                   push eax
// 004e1570  51                   push ecx
// 004e1571  83ec0c               sub esp, 0xc
// 004e1574  8bc4                 mov eax, esp
// 004e1576  d918                 fstp dword ptr [eax]
// 004e1578  8bce                 mov ecx, esi
// 004e157a  d9442420             fld dword ptr [esp + 0x20]
// 004e157e  66895008             mov word ptr [eax + 8], dx
// 004e1582  d95804               fstp dword ptr [eax + 4]
// 004e1585  e896ecffff           call 0x4e0220
// 004e158a  5e                   pop esi
// 004e158b  83c410               add esp, 0x10
// 004e158e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
