// roc 2007-03 004d5190  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d5190
//
// 004d5190  83ec10               sub esp, 0x10
// 004d5193  56                   push esi
// 004d5194  8bf1                 mov esi, ecx
// 004d5196  8d4c2408             lea ecx, [esp + 8]
// 004d519a  e8f1d1ffff           call 0x4d2390
// 004d519f  d9442408             fld dword ptr [esp + 8]
// 004d51a3  668b542410           mov dx, word ptr [esp + 0x10]
// 004d51a8  b801000000           mov eax, 1
// 004d51ad  6689442404           mov word ptr [esp + 4], ax
// 004d51b2  6689442406           mov word ptr [esp + 6], ax
// 004d51b7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d51bb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d51bf  50                   push eax
// 004d51c0  51                   push ecx
// 004d51c1  83ec0c               sub esp, 0xc
// 004d51c4  8bc4                 mov eax, esp
// 004d51c6  d918                 fstp dword ptr [eax]
// 004d51c8  8bce                 mov ecx, esi
// 004d51ca  d9442420             fld dword ptr [esp + 0x20]
// 004d51ce  66895008             mov word ptr [eax + 8], dx
// 004d51d2  d95804               fstp dword ptr [eax + 4]
// 004d51d5  e886faffff           call 0x4d4c60
// 004d51da  5e                   pop esi
// 004d51db  83c410               add esp, 0x10
// 004d51de  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
