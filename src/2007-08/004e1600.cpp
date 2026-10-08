// roc 2007-08 004e1600  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1600
//
// 004e1600  83ec10               sub esp, 0x10
// 004e1603  56                   push esi
// 004e1604  8bf1                 mov esi, ecx
// 004e1606  8d4c2408             lea ecx, [esp + 8]
// 004e160a  e8b1d3ffff           call 0x4de9c0
// 004e160f  d9442408             fld dword ptr [esp + 8]
// 004e1613  668b542410           mov dx, word ptr [esp + 0x10]
// 004e1618  b801000000           mov eax, 1
// 004e161d  6689442404           mov word ptr [esp + 4], ax
// 004e1622  6689442406           mov word ptr [esp + 6], ax
// 004e1627  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e162b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e162f  50                   push eax
// 004e1630  51                   push ecx
// 004e1631  83ec0c               sub esp, 0xc
// 004e1634  8bc4                 mov eax, esp
// 004e1636  d918                 fstp dword ptr [eax]
// 004e1638  8bce                 mov ecx, esi
// 004e163a  d9442420             fld dword ptr [esp + 0x20]
// 004e163e  66895008             mov word ptr [eax + 8], dx
// 004e1642  d95804               fstp dword ptr [eax + 4]
// 004e1645  e836f2ffff           call 0x4e0880
// 004e164a  5e                   pop esi
// 004e164b  83c410               add esp, 0x10
// 004e164e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
