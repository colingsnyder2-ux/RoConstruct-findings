// roc 2007-08 004e16c0  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e16c0
//
// 004e16c0  83ec10               sub esp, 0x10
// 004e16c3  56                   push esi
// 004e16c4  8bf1                 mov esi, ecx
// 004e16c6  8d4c2408             lea ecx, [esp + 8]
// 004e16ca  e8f1d2ffff           call 0x4de9c0
// 004e16cf  d9442408             fld dword ptr [esp + 8]
// 004e16d3  668b542410           mov dx, word ptr [esp + 0x10]
// 004e16d8  b801000000           mov eax, 1
// 004e16dd  6689442404           mov word ptr [esp + 4], ax
// 004e16e2  6689442406           mov word ptr [esp + 6], ax
// 004e16e7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e16eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e16ef  50                   push eax
// 004e16f0  51                   push ecx
// 004e16f1  83ec0c               sub esp, 0xc
// 004e16f4  8bc4                 mov eax, esp
// 004e16f6  d918                 fstp dword ptr [eax]
// 004e16f8  8bce                 mov ecx, esi
// 004e16fa  d9442420             fld dword ptr [esp + 0x20]
// 004e16fe  66895008             mov word ptr [eax + 8], dx
// 004e1702  d95804               fstp dword ptr [eax + 4]
// 004e1705  e8d6f7ffff           call 0x4e0ee0
// 004e170a  5e                   pop esi
// 004e170b  83c410               add esp, 0x10
// 004e170e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
