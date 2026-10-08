// roc 2007-08 004e15a0  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e15a0
//
// 004e15a0  83ec10               sub esp, 0x10
// 004e15a3  56                   push esi
// 004e15a4  8bf1                 mov esi, ecx
// 004e15a6  8d4c2408             lea ecx, [esp + 8]
// 004e15aa  e811d4ffff           call 0x4de9c0
// 004e15af  d9442408             fld dword ptr [esp + 8]
// 004e15b3  668b542410           mov dx, word ptr [esp + 0x10]
// 004e15b8  b801000000           mov eax, 1
// 004e15bd  6689442404           mov word ptr [esp + 4], ax
// 004e15c2  6689442406           mov word ptr [esp + 6], ax
// 004e15c7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e15cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e15cf  50                   push eax
// 004e15d0  51                   push ecx
// 004e15d1  83ec0c               sub esp, 0xc
// 004e15d4  8bc4                 mov eax, esp
// 004e15d6  d918                 fstp dword ptr [eax]
// 004e15d8  8bce                 mov ecx, esi
// 004e15da  d9442420             fld dword ptr [esp + 0x20]
// 004e15de  66895008             mov word ptr [eax + 8], dx
// 004e15e2  d95804               fstp dword ptr [eax + 4]
// 004e15e5  e866efffff           call 0x4e0550
// 004e15ea  5e                   pop esi
// 004e15eb  83c410               add esp, 0x10
// 004e15ee  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
