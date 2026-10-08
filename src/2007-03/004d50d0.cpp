// roc 2007-03 004d50d0  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d50d0
//
// 004d50d0  83ec10               sub esp, 0x10
// 004d50d3  56                   push esi
// 004d50d4  8bf1                 mov esi, ecx
// 004d50d6  8d4c2408             lea ecx, [esp + 8]
// 004d50da  e8b1d2ffff           call 0x4d2390
// 004d50df  d9442408             fld dword ptr [esp + 8]
// 004d50e3  668b542410           mov dx, word ptr [esp + 0x10]
// 004d50e8  b801000000           mov eax, 1
// 004d50ed  6689442404           mov word ptr [esp + 4], ax
// 004d50f2  6689442406           mov word ptr [esp + 6], ax
// 004d50f7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d50fb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d50ff  50                   push eax
// 004d5100  51                   push ecx
// 004d5101  83ec0c               sub esp, 0xc
// 004d5104  8bc4                 mov eax, esp
// 004d5106  d918                 fstp dword ptr [eax]
// 004d5108  8bce                 mov ecx, esi
// 004d510a  d9442420             fld dword ptr [esp + 0x20]
// 004d510e  66895008             mov word ptr [eax + 8], dx
// 004d5112  d95804               fstp dword ptr [eax + 4]
// 004d5115  e8a6f4ffff           call 0x4d45c0
// 004d511a  5e                   pop esi
// 004d511b  83c410               add esp, 0x10
// 004d511e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
