// roc 2009-12 007b94b0  unit: RBX::GroundStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b94b0
//
// 007b94b0  56                   push esi
// 007b94b1  8bf1                 mov esi, ecx
// 007b94b3  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b94b6  c7062ce29e00         mov dword ptr [esi], 0x9ee22c
// 007b94bc  85c9                 test ecx, ecx
// 007b94be  7408                 je 0x7b94c8
// 007b94c0  8b01                 mov eax, dword ptr [ecx]
// 007b94c2  8b10                 mov edx, dword ptr [eax]
// 007b94c4  6a01                 push 1
// 007b94c6  ffd2                 call edx
// 007b94c8  f644240801           test byte ptr [esp + 8], 1
// 007b94cd  7409                 je 0x7b94d8
// 007b94cf  56                   push esi
// 007b94d0  e885a30300           call 0x7f385a
// 007b94d5  83c404               add esp, 4
// 007b94d8  8bc6                 mov eax, esi
// 007b94da  5e                   pop esi
// 007b94db  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
