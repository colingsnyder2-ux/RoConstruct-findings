// roc 2009-06 006db130  unit: RBX::GroundStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006db130
//
// 006db130  56                   push esi
// 006db131  8bf1                 mov esi, ecx
// 006db133  8b4e08               mov ecx, dword ptr [esi + 8]
// 006db136  c70644d28e00         mov dword ptr [esi], 0x8ed244
// 006db13c  85c9                 test ecx, ecx
// 006db13e  7408                 je 0x6db148
// 006db140  8b01                 mov eax, dword ptr [ecx]
// 006db142  8b10                 mov edx, dword ptr [eax]
// 006db144  6a01                 push 1
// 006db146  ffd2                 call edx
// 006db148  f644240801           test byte ptr [esp + 8], 1
// 006db14d  7409                 je 0x6db158
// 006db14f  56                   push esi
// 006db150  e8ddd80300           call 0x718a32
// 006db155  83c404               add esp, 4
// 006db158  8bc6                 mov eax, esi
// 006db15a  5e                   pop esi
// 006db15b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
