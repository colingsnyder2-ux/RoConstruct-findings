// roc 2007-03 004d5130  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d5130
//
// 004d5130  83ec10               sub esp, 0x10
// 004d5133  56                   push esi
// 004d5134  8bf1                 mov esi, ecx
// 004d5136  8d4c2408             lea ecx, [esp + 8]
// 004d513a  e851d2ffff           call 0x4d2390
// 004d513f  d9442408             fld dword ptr [esp + 8]
// 004d5143  668b542410           mov dx, word ptr [esp + 0x10]
// 004d5148  b801000000           mov eax, 1
// 004d514d  6689442404           mov word ptr [esp + 4], ax
// 004d5152  6689442406           mov word ptr [esp + 6], ax
// 004d5157  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d515b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d515f  50                   push eax
// 004d5160  51                   push ecx
// 004d5161  83ec0c               sub esp, 0xc
// 004d5164  8bc4                 mov eax, esp
// 004d5166  d918                 fstp dword ptr [eax]
// 004d5168  8bce                 mov ecx, esi
// 004d516a  d9442420             fld dword ptr [esp + 0x20]
// 004d516e  66895008             mov word ptr [eax + 8], dx
// 004d5172  d95804               fstp dword ptr [eax + 4]
// 004d5175  e896f7ffff           call 0x4d4910
// 004d517a  5e                   pop esi
// 004d517b  83c410               add esp, 0x10
// 004d517e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
