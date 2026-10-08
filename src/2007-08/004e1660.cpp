// roc 2007-08 004e1660  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1660
//
// 004e1660  83ec10               sub esp, 0x10
// 004e1663  56                   push esi
// 004e1664  8bf1                 mov esi, ecx
// 004e1666  8d4c2408             lea ecx, [esp + 8]
// 004e166a  e851d3ffff           call 0x4de9c0
// 004e166f  d9442408             fld dword ptr [esp + 8]
// 004e1673  668b542410           mov dx, word ptr [esp + 0x10]
// 004e1678  b801000000           mov eax, 1
// 004e167d  6689442404           mov word ptr [esp + 4], ax
// 004e1682  6689442406           mov word ptr [esp + 6], ax
// 004e1687  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e168b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e168f  50                   push eax
// 004e1690  51                   push ecx
// 004e1691  83ec0c               sub esp, 0xc
// 004e1694  8bc4                 mov eax, esp
// 004e1696  d918                 fstp dword ptr [eax]
// 004e1698  8bce                 mov ecx, esi
// 004e169a  d9442420             fld dword ptr [esp + 0x20]
// 004e169e  66895008             mov word ptr [eax + 8], dx
// 004e16a2  d95804               fstp dword ptr [eax + 4]
// 004e16a5  e806f5ffff           call 0x4e0bb0
// 004e16aa  5e                   pop esi
// 004e16ab  83c410               add esp, 0x10
// 004e16ae  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
