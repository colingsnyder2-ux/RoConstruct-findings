// roc 2009-06 006d8bc0  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d8bc0
//
// 006d8bc0  56                   push esi
// 006d8bc1  8bf1                 mov esi, ecx
// 006d8bc3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006d8bc6  c7069cd18e00         mov dword ptr [esi], 0x8ed19c
// 006d8bcc  85c9                 test ecx, ecx
// 006d8bce  7408                 je 0x6d8bd8
// 006d8bd0  8b01                 mov eax, dword ptr [ecx]
// 006d8bd2  8b10                 mov edx, dword ptr [eax]
// 006d8bd4  6a01                 push 1
// 006d8bd6  ffd2                 call edx
// 006d8bd8  f644240801           test byte ptr [esp + 8], 1
// 006d8bdd  7409                 je 0x6d8be8
// 006d8bdf  56                   push esi
// 006d8be0  e84dfe0300           call 0x718a32
// 006d8be5  83c404               add esp, 4
// 006d8be8  8bc6                 mov eax, esi
// 006d8bea  5e                   pop esi
// 006d8beb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
