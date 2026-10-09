// roc 2009-06 006f6c70  unit: RBX::MechToAssemblyStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f6c70
//
// 006f6c70  56                   push esi
// 006f6c71  8bf1                 mov esi, ecx
// 006f6c73  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f6c76  c70684e98e00         mov dword ptr [esi], 0x8ee984
// 006f6c7c  85c9                 test ecx, ecx
// 006f6c7e  7408                 je 0x6f6c88
// 006f6c80  8b01                 mov eax, dword ptr [ecx]
// 006f6c82  8b10                 mov edx, dword ptr [eax]
// 006f6c84  6a01                 push 1
// 006f6c86  ffd2                 call edx
// 006f6c88  f644240801           test byte ptr [esp + 8], 1
// 006f6c8d  7409                 je 0x6f6c98
// 006f6c8f  56                   push esi
// 006f6c90  e89d1d0200           call 0x718a32
// 006f6c95  83c404               add esp, 4
// 006f6c98  8bc6                 mov eax, esi
// 006f6c9a  5e                   pop esi
// 006f6c9b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
