// roc 2007-03 004d5010  unit: seg_004d0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d5010
//
// 004d5010  83ec10               sub esp, 0x10
// 004d5013  56                   push esi
// 004d5014  8bf1                 mov esi, ecx
// 004d5016  8d4c2408             lea ecx, [esp + 8]
// 004d501a  e871d3ffff           call 0x4d2390
// 004d501f  d9442408             fld dword ptr [esp + 8]
// 004d5023  668b542410           mov dx, word ptr [esp + 0x10]
// 004d5028  b801000000           mov eax, 1
// 004d502d  6689442404           mov word ptr [esp + 4], ax
// 004d5032  6689442406           mov word ptr [esp + 6], ax
// 004d5037  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d503b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d503f  50                   push eax
// 004d5040  51                   push ecx
// 004d5041  83ec0c               sub esp, 0xc
// 004d5044  8bc4                 mov eax, esp
// 004d5046  d918                 fstp dword ptr [eax]
// 004d5048  8bce                 mov ecx, esi
// 004d504a  d9442420             fld dword ptr [esp + 0x20]
// 004d504e  66895008             mov word ptr [eax + 8], dx
// 004d5052  d95804               fstp dword ptr [eax + 4]
// 004d5055  e8c6eeffff           call 0x4d3f20
// 004d505a  5e                   pop esi
// 004d505b  83c410               add esp, 0x10
// 004d505e  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
