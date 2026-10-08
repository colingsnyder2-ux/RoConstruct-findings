// roc 2007-03 004db850  unit: seg_004d0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004db850
//
// 004db850  8b442404             mov eax, dword ptr [esp + 4]
// 004db854  56                   push esi
// 004db855  57                   push edi
// 004db856  50                   push eax
// 004db857  6a01                 push 1
// 004db859  6a01                 push 1
// 004db85b  83ec28               sub esp, 0x28
// 004db85e  8bf1                 mov esi, ecx
// 004db860  8bfc                 mov edi, esp
// 004db862  89642440             mov dword ptr [esp + 0x40], esp
// 004db866  56                   push esi
// 004db867  8bcf                 mov ecx, edi
// 004db869  e802c0ffff           call 0x4d7870
// 004db86e  c70728ea7900         mov dword ptr [edi], 0x79ea28
// 004db874  d94624               fld dword ptr [esi + 0x24]
// 004db877  8bce                 mov ecx, esi
// 004db879  d95f24               fstp dword ptr [edi + 0x24]
// 004db87c  e81fffffff           call 0x4db7a0
// 004db881  5f                   pop edi
// 004db882  5e                   pop esi
// 004db883  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildBottom@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
