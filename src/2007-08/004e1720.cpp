// roc 2007-08 004e1720  unit: PBBBuilder  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1720
//
// 004e1720  83ec10               sub esp, 0x10
// 004e1723  56                   push esi
// 004e1724  8bf1                 mov esi, ecx
// 004e1726  8d4c2408             lea ecx, [esp + 8]
// 004e172a  e891d2ffff           call 0x4de9c0
// 004e172f  d9442408             fld dword ptr [esp + 8]
// 004e1733  668b542410           mov dx, word ptr [esp + 0x10]
// 004e1738  b801000000           mov eax, 1
// 004e173d  6689442404           mov word ptr [esp + 4], ax
// 004e1742  6689442406           mov word ptr [esp + 6], ax
// 004e1747  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e174b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e174f  50                   push eax
// 004e1750  51                   push ecx
// 004e1751  83ec0c               sub esp, 0xc
// 004e1754  8bc4                 mov eax, esp
// 004e1756  d918                 fstp dword ptr [eax]
// 004e1758  8bce                 mov ecx, esi
// 004e175a  d9442420             fld dword ptr [esp + 0x20]
// 004e175e  66895008             mov word ptr [eax + 8], dx
// 004e1762  d95804               fstp dword ptr [eax + 4]
// 004e1765  e8a6faffff           call 0x4e1210
// 004e176a  5e                   pop esi
// 004e176b  83c410               add esp, 0x10
// 004e176e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
