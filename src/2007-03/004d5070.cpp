// roc 2007-03 004d5070  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d5070
//
// 004d5070  83ec10               sub esp, 0x10
// 004d5073  56                   push esi
// 004d5074  8bf1                 mov esi, ecx
// 004d5076  8d4c2408             lea ecx, [esp + 8]
// 004d507a  e811d3ffff           call 0x4d2390
// 004d507f  d9442408             fld dword ptr [esp + 8]
// 004d5083  668b542410           mov dx, word ptr [esp + 0x10]
// 004d5088  b801000000           mov eax, 1
// 004d508d  6689442404           mov word ptr [esp + 4], ax
// 004d5092  6689442406           mov word ptr [esp + 6], ax
// 004d5097  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d509b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d509f  50                   push eax
// 004d50a0  51                   push ecx
// 004d50a1  83ec0c               sub esp, 0xc
// 004d50a4  8bc4                 mov eax, esp
// 004d50a6  d918                 fstp dword ptr [eax]
// 004d50a8  8bce                 mov ecx, esi
// 004d50aa  d9442420             fld dword ptr [esp + 0x20]
// 004d50ae  66895008             mov word ptr [eax + 8], dx
// 004d50b2  d95804               fstp dword ptr [eax + 4]
// 004d50b5  e8b6f1ffff           call 0x4d4270
// 004d50ba  5e                   pop esi
// 004d50bb  83c410               add esp, 0x10
// 004d50be  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
