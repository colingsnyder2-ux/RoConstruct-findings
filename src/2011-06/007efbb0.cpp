// roc 2011-06 007efbb0  unit: RBX::MechToAssemblyStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007efbb0
//
// 007efbb0  56                   push esi
// 007efbb1  8bf1                 mov esi, ecx
// 007efbb3  8b4e08               mov ecx, dword ptr [esi + 8]
// 007efbb6  c70608f1ab00         mov dword ptr [esi], 0xabf108
// 007efbbc  85c9                 test ecx, ecx
// 007efbbe  7408                 je 0x7efbc8
// 007efbc0  8b01                 mov eax, dword ptr [ecx]
// 007efbc2  8b10                 mov edx, dword ptr [eax]
// 007efbc4  6a01                 push 1
// 007efbc6  ffd2                 call edx
// 007efbc8  f644240801           test byte ptr [esp + 8], 1
// 007efbcd  7409                 je 0x7efbd8
// 007efbcf  56                   push esi
// 007efbd0  e883a40100           call 0x80a058
// 007efbd5  83c404               add esp, 4
// 007efbd8  8bc6                 mov eax, esi
// 007efbda  5e                   pop esi
// 007efbdb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
