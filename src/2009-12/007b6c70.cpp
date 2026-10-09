// roc 2009-12 007b6c70  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b6c70
//
// 007b6c70  56                   push esi
// 007b6c71  8bf1                 mov esi, ecx
// 007b6c73  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b6c76  c70684e19e00         mov dword ptr [esi], 0x9ee184
// 007b6c7c  85c9                 test ecx, ecx
// 007b6c7e  7408                 je 0x7b6c88
// 007b6c80  8b01                 mov eax, dword ptr [ecx]
// 007b6c82  8b10                 mov edx, dword ptr [eax]
// 007b6c84  6a01                 push 1
// 007b6c86  ffd2                 call edx
// 007b6c88  f644240801           test byte ptr [esp + 8], 1
// 007b6c8d  7409                 je 0x7b6c98
// 007b6c8f  56                   push esi
// 007b6c90  e8c5cb0300           call 0x7f385a
// 007b6c95  83c404               add esp, 4
// 007b6c98  8bc6                 mov eax, esi
// 007b6c9a  5e                   pop esi
// 007b6c9b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
