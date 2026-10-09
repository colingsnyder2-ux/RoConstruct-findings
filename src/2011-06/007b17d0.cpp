// roc 2011-06 007b17d0  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b17d0
//
// 007b17d0  56                   push esi
// 007b17d1  8bf1                 mov esi, ecx
// 007b17d3  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b17d6  c70638d1ab00         mov dword ptr [esi], 0xabd138
// 007b17dc  85c9                 test ecx, ecx
// 007b17de  7408                 je 0x7b17e8
// 007b17e0  8b01                 mov eax, dword ptr [ecx]
// 007b17e2  8b10                 mov edx, dword ptr [eax]
// 007b17e4  6a01                 push 1
// 007b17e6  ffd2                 call edx
// 007b17e8  f644240801           test byte ptr [esp + 8], 1
// 007b17ed  7409                 je 0x7b17f8
// 007b17ef  56                   push esi
// 007b17f0  e863880500           call 0x80a058
// 007b17f5  83c404               add esp, 4
// 007b17f8  8bc6                 mov eax, esi
// 007b17fa  5e                   pop esi
// 007b17fb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
