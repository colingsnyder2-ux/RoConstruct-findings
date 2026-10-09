// roc 2010-06 00761190  unit: RBX::GroundStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00761190
//
// 00761190  56                   push esi
// 00761191  8bf1                 mov esi, ecx
// 00761193  8b4e08               mov ecx, dword ptr [esi + 8]
// 00761196  c7063422a500         mov dword ptr [esi], 0xa52234
// 0076119c  85c9                 test ecx, ecx
// 0076119e  7408                 je 0x7611a8
// 007611a0  8b01                 mov eax, dword ptr [ecx]
// 007611a2  8b10                 mov edx, dword ptr [eax]
// 007611a4  6a01                 push 1
// 007611a6  ffd2                 call edx
// 007611a8  f644240801           test byte ptr [esp + 8], 1
// 007611ad  7409                 je 0x7611b8
// 007611af  56                   push esi
// 007611b0  e8e5670400           call 0x7a799a
// 007611b5  83c404               add esp, 4
// 007611b8  8bc6                 mov eax, esi
// 007611ba  5e                   pop esi
// 007611bb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
